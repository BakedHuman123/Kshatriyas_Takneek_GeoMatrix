using System.Collections;
using UnityEngine;

public class ARShooter : MonoBehaviour
{
    public GameObject bulletPrefab;
    public Transform shootPoint;
    public Gun gun;
    public GunManager gm;
    public GameObject Spawner;
    private SpawnEnemies spawnerScript; 
    public GameObject TimeFreezer;
    public GameObject Slasher;
    public GameObject slashPrefab;
    public GameObject AirStrike;
    public GameObject LaserPrefab;
    public GameObject Bomber;
    public GameObject Bomb;
    public Ammo ammo;
    public void Shoot()
    {
        if(TimeFreezer.activeSelf){
            if(ammo.Ammo_Count > 4)
            TimeFreeze();
        }
        else{
            if(Slasher.activeSelf){
                if(ammo.Ammo_Count > 3)
                HorizontalSlash();
            }
            else{
                if(AirStrike.activeSelf){
                    if(ammo.Ammo_Count > 10)
                    Air_Strike();
                }
                else{
                    if(Bomber.activeSelf){
                        if(ammo.Ammo_Count > 5)
                        ShootBomb();
                    }
                    else{
                        StartCoroutine(ShootWithDelay());        
                    }
                }
            }
            
        } 
        
    }
    public void TimeFreeze(){
        spawnerScript = Spawner.GetComponent<SpawnEnemies>();
        Freeze();
    }

    IEnumerator ShootWithDelay()
    {
        for (int i = 0; i < gun.gun_rate; i++)
        {
            // Instantiate the bullet at the shoot point's position and rotation
            GameObject bullet = Instantiate(bulletPrefab, shootPoint.position, shootPoint.rotation);

            // Add velocity to the bullet to make it move forward
            Rigidbody rb = bullet.GetComponent<Rigidbody>();
            rb.velocity = shootPoint.forward * gun.gun_speed;
            //Debug.Log(gm.Current_Ammo[(int)gun.gun_index]);
            //Debug.Log(gun.gun_rate);

            // Destroy the bullet after a few seconds to avoid clutter
            Destroy(bullet, gun.gun_time);

            // Wait for a specified delay before spawning the next bullet
            yield return new WaitForSeconds(0.01f); // Adjust the delay time as needed
        }
    }

    public void Freeze()
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        foreach (GameObject enemy in enemies)
        {
            Rigidbody rb = enemy.GetComponent<Rigidbody>();
            if (rb != null)
            {
                rb.isKinematic = true;
                rb.velocity = Vector3.zero;
            }
        }

        spawnerScript.StopCoroutine(spawnerScript.SpawnEnemiesAtIntervals());
        Spawner.SetActive(false);

        StartCoroutine(UnFreezeAfterDelay(3f)); 
        Debug.Log("Frozen");
    }

    private IEnumerator UnFreezeAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay); // Wait for the specified delay
        UnFreeze(); // Call the UnFreeze method after the delay
    }

    public void UnFreeze(){
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        foreach (GameObject enemy in enemies)
        {
            Rigidbody rb = enemy.GetComponent<Rigidbody>();
            PlayerTracking pt = enemy.GetComponent<PlayerTracking>();

            if (rb != null && pt != null)
            {
                rb.isKinematic = false;
                rb.velocity = pt.direction.normalized * pt.speed;
            }
        }

        // Start the enemy spawner
        Spawner.SetActive(true);
        spawnerScript.StartCoroutine(spawnerScript.SpawnEnemiesAtIntervals());
        Debug.Log("Unfrozen");
    }

    public void HorizontalSlash(){
        GameObject Slash = Instantiate(slashPrefab, shootPoint.position + shootPoint.forward.normalized*2f, shootPoint.rotation);
        Rigidbody rb = Slash.GetComponent<Rigidbody>();
        rb.velocity = shootPoint.forward * 25f;
        Destroy(Slash, 2.5f);
    }
    public void Air_Strike(){
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        int kill_index = Random.Range(0,enemies.Length);
        Vector3 spawnPoint = enemies[kill_index].transform.position;
         Quaternion rotation = Quaternion.Euler(0f, 90f, 0f);
        GameObject Laser = Instantiate(LaserPrefab, spawnPoint, rotation);

        Destroy(Laser, 2.0f);
    }
    public void ShootBomb(){
        GameObject bomb = Instantiate(Bomb, shootPoint.position + shootPoint.forward.normalized*2f, shootPoint.rotation);
        Rigidbody rb = bomb.GetComponent<Rigidbody>();
        rb.velocity = shootPoint.forward * 8f;
        Destroy(bomb, 4f);
    }
}