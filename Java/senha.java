import java.util.Scanner;

public class senha{
    public static void main(String[] args){
        String frase;
        Scanner lei = new Scanner(System.in);
        int cond1=0, cond2=0,cond3=0,cond4=0;


        frase = lei.nextLine();

        if(frase.length()>=8){
        for(int i=0;i<frase.length();i++){
            if(cond1!=1 && frase.charAt(i)<=90 && frase.charAt(i)>=65){
                cond1=1;
            }else if(cond2!=1 && frase.charAt(i)<=122 && frase.charAt(i)>=97){
                cond2=1;
            }else if(cond3!=1 && frase.charAt(i)<=57 && frase.charAt(i)>=48){
                cond3=1;
            }else{
                cond4=1;
            }
        }

        if(cond1==1 && cond2==1 && cond3==1 && cond4==1){
            System.out.printf("SIM");
            cond1=0;
            cond2=0;
            cond3=0;
            cond4=0;
        }else{
            System.out.printf("NAO\n");
            cond1=0;
            cond2=0;
            cond3=0;
            cond4=0;
        }

        }else{
            System.out.printf("NAO\n");
        }

        lei.close();


    }
}