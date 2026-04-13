/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author AI One
 */
public class SinglyLinklist {

    ListNode head;
    ListNode tail;
    int size;

    public SinglyLinklist() {
        head = tail = null;
        size = 0;
    }

 
    
    
    
    public void addLast(int data){
        ListNode newNode =  new ListNode(data);
        if(tail == null){
            head = tail = newNode;
        }else{
            tail.next = newNode;
            tail = newNode;
        }
        size++;
        
        
    }
    

}
