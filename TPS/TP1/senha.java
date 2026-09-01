import java.util.Scanner;

public class senha{

       static void check(String frase, boolean cond1,boolean cond2,boolean cond3,boolean cond4){
        if(frase.length()>=8){// olha o tamanho da frase, caso contrario fala que é invalido
        for(int i=0;i<frase.length();i++){//analise cada letra da frase
            if(frase.charAt(i)<=90 && frase.charAt(i)>=65){//olha se tem letras maiusculas
                cond1=true;
            }else if(frase.charAt(i)<=122 && frase.charAt(i)>=97){//olha se tem letras minusculas
                cond2=true;
            }else if(frase.charAt(i)<=57 && frase.charAt(i)>=48){//olha se tem numeros
                cond3=true;
            }else{// olha se tem caracteres especiais
                cond4=true;
            }
        }

        if(cond1==true && cond2==true && cond3==true && cond4==true){//retorna se é valido e reinicia as condições
            System.out.printf("SIM");
        }else{
            System.out.printf("NAO\n");//caso contrario retorna não e reinicia as condições
        }

        }else{
            System.out.printf("NAO\n");//retorna não caso menor que 8
        }
    }

    static boolean FIM(String frase, int n){//checa se a frase é fim e retorna sim ou não
        if(n==3 && frase.charAt(0)=='F' && frase.charAt(1)=='I' && frase.charAt(2)=='M'){
            return false;
        }else{
            return true;
        }
    }

    public static void main(String[] args){
        String frase;
        Scanner lei = new Scanner(System.in);
        boolean cond1=false, cond2=false,cond3=false,cond4=false;//inicia as condições de letras maiusculas, minusculas, numeros e caracteres especiais


        while(lei.hasNextLine()!=false){
        frase = lei.nextLine();//le a frase

        if(FIM(frase,frase.length())==false){
            check(frase,cond1,cond2,cond3,cond4);//chamada do metodo que olha se é valido e retorna na saida
        }

        }
        lei.close();//fecha o leitor


    }
}