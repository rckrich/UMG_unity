using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using TMPro;

public class Dialogue_Manager_Tiny : MonoBehaviour
{
    //public Text nameText;
    public TextMeshProUGUI dialogueText;
    //public Text dialogueText;



    //public Animator animator;

    public UnityEvent OnStartTalking;
    public UnityEvent OnFinishTalking;
    public UnityEvent OnFinishDialogue;

    GameObject PanelToOpenAtEndOfTalking;


    private Queue<string> sentences;

    void Start()
    {
        sentences = new Queue<string>();
    }


    public void StartDialogue(Dialogue dialogue)
    {

        if (dialogue.PanelToOpenAtEndOfTalking != null)
        {
            PanelToOpenAtEndOfTalking = dialogue.PanelToOpenAtEndOfTalking;
        }
        else
        {
            PanelToOpenAtEndOfTalking = null;
        }

        //animator.SetBool("IsOpen", true);

        //Debug.Log("Startting conversation with " + dialogue.name);
        //nameText.text = dialogue.name;

        sentences.Clear();

        foreach (string sentence in dialogue.sentences)
        {
            sentences.Enqueue(sentence);
        }

        DisplayNextSentence();
    }


    public void DisplayNextSentence()
    {
        
        if (sentences.Count == 0)
        {
            EndDialogue();
            return;
        }

        string sentence = sentences.Dequeue();
        //string sentence = I2.Loc.LocalizationManager.GetTranslation(sentences.Dequeue());

        StopAllCoroutines();
        StartCoroutine(TypeSentence(sentence));
    }

    IEnumerator TypeSentence(string sentence)
    {
        if (OnStartTalking != null)
        {
            OnStartTalking.Invoke();
        }

        dialogueText.text = "";

        foreach (char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
            //yield return null;
            yield return new WaitForSeconds(0.03f);
        }

        if (OnFinishTalking != null)
        {
            OnFinishTalking.Invoke();
        }
    }

    void EndDialogue()  //Es Cuando se terminan tods los dialogos
    {
        //Debug.Log("End of conversation");

        if (OnFinishTalking != null)
        {
            OnFinishTalking.Invoke();
        }

        //animator.SetBool("IsOpen", false);

        if (OnFinishDialogue != null)
        {
            OnFinishDialogue.Invoke();
            if (PanelToOpenAtEndOfTalking != null)
            {
                //PanelToOpenAtEndOfTalking.SetActive(true);
                StartCoroutine(PanelToOpenAtEndOfTalking_Routine());
            }
        }
    }

    IEnumerator PanelToOpenAtEndOfTalking_Routine()
    {
        yield return new WaitForSeconds(0.9f);
        PanelToOpenAtEndOfTalking.SetActive(true);
    }


    public void Reset_DialogueText_Size()
    {
        dialogueText.text = "";
        dialogueText.GetComponent<RectTransform>().sizeDelta = new Vector2(dialogueText.GetComponent<RectTransform>().sizeDelta.x, 12.95f);
    }



}
