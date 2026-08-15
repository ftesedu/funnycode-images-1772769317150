
import java.util.ArrayList;


public class Pet {
    private String name;
    private int age;
    private double weight;

    public Pet(String name, int age, double weight) {
        this.name = name;
        this.age = age;
        this.weight = weight;
    }

    public Pet() {
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

    public double getWeight() {
        return weight;
    }

    public void setWeight(float weight) {
        this.weight = weight;
    }
    
    public String speak(){
        return "Pet is making a sound";
        
    }
    
    public static void main(String[] args) {
        ArrayList<Pet> pet = new ArrayList<>();
        Dog num1= new Dog("Bubu", 12, 34.5);
        Cat num2= new Cat("Buba", 15, 37.5);
        
        pet.add(num1);
        pet.add(num2);
       
        
            System.out.println(pet.get(0).speak());
            num1.fetchBall();
            System.out.println(pet.get(1).speak());
            num2.chaseMouse();
        
        
    }
    
    
    
    
}


class Dog extends Pet{

    public Dog(String name, int age, double weight) {
        super(name, age, weight);
    }
    
    @Override
    public String speak(){
        return "Dog is barking";
        
    }
    
    public void fetchBall(){
        System.out.println("Dog is fetching the ball!");
        
    }
    
}



class Cat extends Pet{

    public Cat(String name, int age, double weight) {
        super(name, age, weight);
    }
    
    @Override
    public String speak(){
        return"Cat is meowing";
        
    }
    
    public void chaseMouse(){
        System.out.println("Cat is chasing a mouse!");
    }
    
}