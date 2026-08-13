import java.util.Scanner;

public class Espelho{
    public static void main(String[] args){
        Scanner novo= new Scanner (System.in);
        int a,b, mark=0, quant;

        while(novo.hasNextInt()){
        a=novo.nextInt();

        b=novo.nextInt();
        quant=b-a+1;


        String[] c= new String[quant];

        for(int i=a;i<=b;i++){
            c[mark]=String.valueOf(i);
            System.out.printf("%s", c[mark]);
            mark++;
        }

        for(int i=quant-1;i>=0;i--){
<<<<<<< HEAD
            for(int j=0;j<)
            System.out.printf("%s ", c[i].charAt(j));
=======
            for(int j=c[i].length()-1;j>=0;j--){
                System.out.printf("%s", c[i].charAt(j));
            }
>>>>>>> a10f8f2e25507863c9ddab82c508ca7a2ab25021
        }
        System.out.printf("\n");
        mark=0;
    }
    novo.close();
    }
}
