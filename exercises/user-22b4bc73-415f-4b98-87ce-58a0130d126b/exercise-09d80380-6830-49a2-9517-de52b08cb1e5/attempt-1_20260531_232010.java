/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package btvnbuoi4;

/**
 *
 * @author ad
 */
public class Pet {
    private String name;
    private int age;
    private int weight;

    public Pet() {
    }

    public Pet(String name, int age, int weight) {
        this.name = name;
        this.age = age;
        this.weight = weight;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getWeight() {
        return weight;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }
    
    public void speak(){
        System.out.println("Pet is making a sound");
    }
    
    public static void main(String[] args) {
        Dog d1 = new Dog();
        d1.speak(); d1.fetchBall();
        
        Cat c1 = new Cat();
        c1.speak(); c1.chaseMouse();
       
    }
}
