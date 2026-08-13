
import java.util.Scanner;

public class Calculadora{
    public static void main(){
        Scanner scanner = new Scanner(System.in);

        int op=0;
        float som=0, a=0,b=0;

        System.out.print("escolha a operacao:\n 1-soma\n 2-sub\n 3-div\n 4-mult\n");
        op=scanner.nextInt();
        
        System.out.print("Digite 1 numer: ");
        a=scanner.nextInt();

        System.out.print("digite outro: ");
        b=scanner.nextInt();

        if(op==1){
            som=a+b;

            System.out.printf("Sua soma: %.2f\n", som);
        }else if(op==2){
            if(a>b){
                som=a-b;
            }else{
                som=b-a;
            }

            System.out.printf("Sua sub: %.2f\n", som);
        }else if(op==3){
            if(b!=0){
                som=a/b;
                System.out.printf("Sua div: %f\n", som);
            }else{
                som=0;
                System.out.printf("Divisão por 0 não suportada\n");
            }
        }else if(op==4){
            som=a*b;

            System.out.printf("Sua mult: %.2f\n", som);
        }else{
            System.out.printf("Escolha a operação\n");
        }

        scanner.close();

    }
}