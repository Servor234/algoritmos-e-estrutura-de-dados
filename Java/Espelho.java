import java.util.Scanner;

public class Espelho{
    public static void main(String[] args){
        Scanner novo= new Scanner (System.in);
        int a,b, mark=0, quant;

        a=novo.nextInt();

        b=novo.nextInt();

        quant=b-a+1;

        String[] c= new String[quant];

        for(int i=a;i<=b;i++){
            c[mark]=String.valueOf(i);
            System.out.printf("%s ", c[mark]);
            mark++;
        }

        for(int i=quant-1;i>=0;i--){
            System.out.printf("%s ", c[i]);
        }

        novo.close();
    }
}