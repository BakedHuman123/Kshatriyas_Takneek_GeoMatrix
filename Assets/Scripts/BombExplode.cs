using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombExplode : MonoBehaviour
{
    public float Enemy_Score=1f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnTriggerEnter(Collider other) {
        if(other.gameObject.CompareTag("Enemy")){
            Vector3 origin = other.gameObject.transform.position;
            Destroy(other.gameObject);
            Destroy(gameObject);
            GameManager.instance.AddScore(Enemy_Score);
            GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
            foreach(GameObject enemy in enemies){
                if((enemy.transform.position - origin).magnitude <= 2.5f){
                    Destroy(enemy);
                    GameManager.instance.AddScore(Enemy_Score);
                }
            }
        }
    }
}
