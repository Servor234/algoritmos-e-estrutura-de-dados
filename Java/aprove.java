import java.util.Scanner;

public class aprove{
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        int nota=0;

        System.out.printf("digite sua nota: ");

        nota=lei.nextInt();

        if(nota>=80){
            System.out.println("Muito bom!");
        }else if(nota>=70 && nota<80){
            System.out.println("Parabens, aprovado");
        }else{
            System.out.println("infelizmente, reprovado");
        }
        lei.close();
    }
}