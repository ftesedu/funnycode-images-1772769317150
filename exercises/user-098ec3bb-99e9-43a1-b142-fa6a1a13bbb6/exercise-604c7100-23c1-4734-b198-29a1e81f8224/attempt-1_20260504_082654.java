/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package homework_ftes_nop2;

/**
 *
 * @author Anh Tuan
 */
public class Studen_V2 {

    private int age;
    private double gpa;
    private String name;

    public Studen_V2(int age, double gpa, String name) {
        this.age = age;
        this.gpa = gpa;
        this.name = name;
    }

    @Override
    public String toString() {
        return "Name= " + name + " Age= " + age + " Gpa= " + gpa ;
    }
    
    
}
