import java.util.Scanner;

public class teste_java {
    public static void main (String[] args) {
        Scanner input = new Scanner (System.in);
        int a=0;

        System.out.print("Digite primeiro numero: ");
        a= input.nextInt();

        int b=0;

        System.out.print("Digite outro numero: ");
        b= input.nextInt();

        int soma=a+b;

        System.out.printf("Resultado: %d\n", soma);

        System.out.println("Hello, World!, carros voam as tres da manha");
        System.out.println("bom dia");

        input.close();

    }
}