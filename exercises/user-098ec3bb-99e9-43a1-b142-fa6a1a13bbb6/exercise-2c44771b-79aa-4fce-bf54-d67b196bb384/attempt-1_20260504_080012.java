/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package homework_ftes_nop2;

/**
 *
 * @author Anh Tuan
 */

public class Main {
  
    public static void main(String[] args) {
        Student std1 = new Student("Tran Anh Tuan", 20, 9.8);
        Student std2 = new Student("Tran Van D", 20, 5.5);
        
        System.out.println(std1.displayInfo());
        System.out.println(std2.displayInfo());
        
    }
    
}
