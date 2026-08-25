import java.util.Scanner;

public class Inver{
    static void recu(int n, String frase){
        if(n==0){
            System.out.printf("%c", frase.charAt(n));
        }else{
            System.out.printf("%c", frase.charAt(n));

            recu(n-1,frase);
        }
    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        String frase;
        int n1;

        frase=lei.nextLine();

        n1=frase.length()-1;

        recu(n1, frase);
    
        lei.close();
    }
}