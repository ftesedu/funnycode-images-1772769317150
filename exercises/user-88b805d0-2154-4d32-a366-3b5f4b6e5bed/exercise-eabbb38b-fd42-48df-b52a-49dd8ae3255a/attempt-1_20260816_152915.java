
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;


public class Main {

    
    public static void main(String[] args) {
        
        try {
            Scanner we=new Scanner(System.in);
            File file1= new File("student.txt");
            Scanner sc= new Scanner(file1);
            ArrayList<Student> danhSach= new ArrayList();
            double average=0;
            Student maxScore= new Student();
            FileWriter de= new FileWriter("student.txt", true);
            PrintWriter fe=new PrintWriter(de);
            
            fe.println(we.nextLine());
            fe.close();
            
            while (sc.hasNextLine()) {
                String next = sc.nextLine();
                
                String[] arrStr = next.split(" ");
                
                danhSach.add(new Student(arrStr[0], Double.parseDouble(arrStr[1])));
                
            }
            
            
            for(int i=0; i<danhSach.size(); i++){
                
                average+= danhSach.get(i).getScore();
            
            }
            
            for(int i=0; i<danhSach.size(); i++){
                if(maxScore.getScore()<=danhSach.get(i).getScore()){
                    maxScore=danhSach.get(i);
                }
            }
            
            sc.close();
            
            PrintWriter pw=new PrintWriter("ketQua.txt");
            pw.println("Tong so sinh vien: "+ danhSach.size());
            pw.println("Diem trung binh: "+String.format("%.2f", average/danhSach.size()));
            pw.println("Sinh vien diem cao nhat: "+ maxScore.getName()+" ("+maxScore.getScore()+")");
            pw.close();
            
            String search=we.nextLine();
            for (int i=0; i<danhSach.size(); i++) {
                if(search.equals(danhSach.get(i).getName())){
                    System.out.println("Tim duoc sinh vien, diem: "+danhSach.get(i).getScore());
                }
            }
            
        } catch (Exception e) {
            e.printStackTrace();
        }
        
        
        
        
    }
    
}
