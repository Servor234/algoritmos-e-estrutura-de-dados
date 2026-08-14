import java.util.Scanner;

public class Empre{
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        float sal=0, emp=0;

        System.out.printf("Seu salario: ");
        sal= lei.nextFloat();

        System.out.printf("Seu emprestimo: ");
        emp= lei.nextFloat();

        if(emp/sal<=0.4){
            System.out.println("Pode pegar");
        }else{
            System.out.println("Não pode");
        }

        lei.close();
    }
}