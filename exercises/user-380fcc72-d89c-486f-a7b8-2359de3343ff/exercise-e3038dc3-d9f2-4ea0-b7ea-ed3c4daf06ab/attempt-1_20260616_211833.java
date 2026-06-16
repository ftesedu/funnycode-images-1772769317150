/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package node;

/**
 *
 * @author ASUS
 */
public class Node {
    Node head;
    Node tail;
    Node next = null;
    int size = 0;
    
    public void addLast(Node newNode){
        if(head == null){
            head = tail = newNode;
            size++;
        }
        tail.next = newNode;
        tail = newNode;
        size++;
    }
}
