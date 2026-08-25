import java.util.Scanner;

public class Inver{
    static void recu(int n, String frase){
        if(n==0){
            System.out.printf("%c\n", frase.charAt(n));
            //imprime a primeira letra da frase no final
        }else{
            System.out.printf("%c", frase.charAt(n));//impre as letras de tras para frente recursivamente

            recu(n-1,frase);//realiza a chamada recursiva para ir para o indice anterior
        }
    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        String frase;
        int n1;

        //realiza a leitrua
        frase=lei.nextLine();
        //acha o tamanho menos 1 pelo indice do array
        n1=frase.length()-1;

        //chama a função recursiva
        recu(n1, frase);
    
        //fecha o leitor
        lei.close();
    }
}