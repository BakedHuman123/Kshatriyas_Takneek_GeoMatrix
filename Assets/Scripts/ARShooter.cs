using UnityEngine;

public class ARShooter : MonoBehaviour
{
    public GameObject bulletPrefab;  // The bullet prefab to instantiate
    public Transform shootPoint;     // The point from where the bullet will be fired
    public float bulletSpeed = 20f;  // Speed of the bullet

    

    public void Shoot()
    {
        // Instantiate the bullet at the shoot point's position and rotation
        GameObject bullet = Instantiate(bulletPrefab, shootPoint.position, shootPoint.rotation);
        
        // Add velocity to the bullet to make it move forward
        Rigidbody rb = bullet.GetComponent<Rigidbody>();
        rb.velocity = shootPoint.forward * bulletSpeed;
        
        // Destroy the bullet after a few seconds to avoid clutter
        Destroy(bullet, 5f);
    }
}