using System.Collections;
using UnityEngine;

public class ARShooter : MonoBehaviour
{
    public GameObject bulletPrefab;
    public Transform shootPoint;
    public Gun gun;
    public GunManager gm;
    public void Shoot()
    {
        StartCoroutine(ShootWithDelay());
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
}