using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class timelineManager : MonoBehaviour
{
    //6 audio sources
public AudioSource jjOne;
public AudioSource jjTwo;
public AudioSource jjThree;
public AudioSource jjFour;
public AudioSource jjBrick;
public AudioSource jjBrickTwo;
public AudioSource jjSix;
bool timeForJJTwo = false;
bool timeForJJFour = false;
public Button escapeButton;
public Button workButton;
public Button UIBrick;
public GameObject brick;
public RuntimeAnimatorController walkAwayController;
public Text ClosingText;


    void Start()
    {
        jjOne.Play();
    }

    void Update()
    {
        if (jjOne.time >= 65) {
            jjOne.Stop();
            timeForJJTwo = true;
        }

        if (timeForJJTwo) {
            timeForJJTwo = false;
            escapeButton.gameObject.SetActive(true);
            workButton.gameObject.SetActive(true);
            escapeButton.onClick.AddListener(EscapeClicked);
            workButton.onClick.AddListener(WorkClicked);
        }
        
        if (jjTwo.time >= 5) timeForJJFour = true;
        if (jjThree.time >= 4) timeForJJFour = true;

        if (timeForJJFour) {
            timeForJJFour = false;
            jjFour.Play();
        }

        if (jjFour.time >= 2.4) Invoke("PlayBrick", 2.0f);
            

        if (jjBrick.time >= 3) {
            UIBrick.gameObject.SetActive(true);
            UIBrick.onClick.AddListener(BrickClicked);
        }
        if (jjBrickTwo.time >= 1) jjSix.Play();
        if (jjSix.time >= 29) {
            this.GetComponent<Animator>().runtimeAnimatorController = walkAwayController as RuntimeAnimatorController;
            brick.gameObject.SetActive(false);
            Invoke("RollText", 2.0f);
            }
    }

    void EscapeClicked()
     {
         HideButtons();
         jjTwo.Play();
     }
    void WorkClicked()
     {
         HideButtons();
         jjThree.Play();
     }

     void HideButtons(){
        escapeButton.gameObject.SetActive(false);
        workButton.gameObject.SetActive(false);
     }

     void PlayBrick() {
         jjBrick.Play();
     }
    
    void BrickClicked()
     {
         UIBrick.gameObject.SetActive(false);
         brick.gameObject.SetActive(true);
         jjBrickTwo.Play();
     }

     void RollText() {
        ClosingText.gameObject.SetActive(true);
     }
}

