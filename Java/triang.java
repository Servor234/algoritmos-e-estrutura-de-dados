import java.util.Scanner;

public class triang{
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);

        int lado1=0,lado2=0,lado3=0;

        System.out.printf("Digite o lado 1: ");

        lado1=lei.nextInt();

        System.out.printf("Digite o lado 2: ");

        lado2=lei.nextInt();

        System.out.printf("Digite o lado 3: ");

        lado3=lei.nextInt();

        if(lado1==lado2 && lado1==lado3){
            System.out.println("Equilatero");
        }else if(lado1==lado2 || lado1==lado3 || lado2==lado3){
            System.out.println("Isoceles");
        }else{
            System.out.println("Escaleno");
        }
        lei.close();
    }
}