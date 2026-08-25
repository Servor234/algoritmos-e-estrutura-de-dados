import java.util.Scanner;

public class Sum{

    static int recu(int n){
        if(n==0){
            return 0;//retorna 0 por nao ter mais digitos para realizar a divisão
        }else{
            return recu(n/10) + n%10;//realiza a chamada da divisão e soma com o seu resto para pegar cada digito
        }
    }

    public static void main(String[] args){
        int n1, soma=0;
        Scanner lei = new Scanner(System.in);

        n1=lei.nextInt();
        //realiza a leitura para o inteiro a ser somado
        soma=recu(n1);
        //realiza a chamada recursiva e assoscia a variavel de soma
        System.out.printf("%d", soma);
        //fecha o leitor
        lei.close();
    }
}