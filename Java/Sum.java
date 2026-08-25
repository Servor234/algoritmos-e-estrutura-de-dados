import java.util.Scanner;

public class Sum{

    static int recu(int n){
        if(n==0){
            return 0;
        }else{
            return recu(n/10) + n%10;
        }
    }

    public static void main(String[] args){
        int n1, soma=0;
        Scanner lei = new Scanner(System.in);

        n1=lei.nextInt();

        soma=recu(n1);

        System.out.printf("%d", soma);

        lei.close();
    }
}