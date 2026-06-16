/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package node;

/**
 *
 * @author ASUS
 */
public class MyList {

    Node head;
    Node tail;

    public void removeLast() {
        if (head == null) {
            return;
        }

        if (head == tail) {
            head = tail = null;
            return;
        }

        Node temp = head;
        Node temp1 = head;

        while (temp != tail) {
            temp1 = temp;
            temp = temp.next;
        }
        temp1.next = null;
        tail = temp1;
    }

    public void remove(int index) {
        if (head == null) {
            return;
        }

        if (index == 0) {
            head = head.next;
            if (head == null) {
                tail = null;
            }
            return;
        }

        Node prev = head;

        for (int i = 0; i < index - 1 && prev.next != null; i++) {
            prev = prev.next;
        }

        if (prev.next == null) {
            return;
        }

        if (prev.next == tail) {
            tail = prev;
        }

        prev.next = prev.next.next;
    }
}
