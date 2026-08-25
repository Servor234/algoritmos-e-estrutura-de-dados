import java.util.Scanner;

public class senha{
    public static void main(String[] args){
        String frase;
        Scanner lei = new Scanner(System.in);
        int cond1=0, cond2=0,cond3=0,cond4=0;//inicia as condições de letras maiusculas, minusculas, numeros e caracteres especiais


        frase = lei.nextLine();//le a frase

        if(frase.length()>=8){// olha o tamanho da frase, caso contrario fala que é invalido
        for(int i=0;i<frase.length();i++){//analise cada letra da frase
            if(frase.charAt(i)<=90 && frase.charAt(i)>=65){//olha se tem letras maiusculas
                cond1=1;
            }else if(frase.charAt(i)<=122 && frase.charAt(i)>=97){//olha se tem letras minusculas
                cond2=1;
            }else if(frase.charAt(i)<=57 && frase.charAt(i)>=48){//olha se tem numeros
                cond3=1;
            }else{// olha se tem caracteres especiais
                cond4=1;
            }
        }

        if(cond1==1 && cond2==1 && cond3==1 && cond4==1){//retorna se é valido e reinicia as condições
            System.out.printf("SIM");
            cond1=0;
            cond2=0;
            cond3=0;
            cond4=0;
        }else{
            System.out.printf("NAO\n");//caso contrario retorna não e reinicia as condições
            cond1=0;
            cond2=0;
            cond3=0;
            cond4=0;
        }

        }else{
            System.out.printf("NAO\n");//retorna não caso menor que 8
        }

        lei.close();//fecha o leitor


    }
}