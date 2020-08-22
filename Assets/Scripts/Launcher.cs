using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// ? 2017 TheFlyingKeyboard and released under MIT License
// theflyingkeyboard.net
public class Launcher : MonoBehaviour
{
    public GameObject seed;
    private Rigidbody projectile;
    private Transform projectileSpawnPoint;
    public float projectileVelocity;
    public float timeBetweenShots;
    private float timeBetweenShotsCounter;
    private bool canShoot;
    // Use this for initialization
    void Start()
    {
        projectile = seed.GetComponent<Rigidbody>();
        projectileSpawnPoint = GameObject.Find("Shooter").transform;
        canShoot = false;
        timeBetweenShotsCounter = timeBetweenShots;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0) && canShoot)
        {
            Rigidbody bulletInstance = Instantiate(projectile, projectileSpawnPoint.position, Quaternion.Euler(new Vector3(0, 0, transform.localEulerAngles.z))) as Rigidbody;
            bulletInstance.GetComponent<Rigidbody>().AddForce(projectileSpawnPoint.right * projectileVelocity);
            canShoot = false;
        }
        if (!canShoot)
        {
            timeBetweenShotsCounter -= Time.deltaTime;
            if (timeBetweenShotsCounter <= 0)
            {
                canShoot = true;
                timeBetweenShotsCounter = timeBetweenShots;
            }
        }
    }
}