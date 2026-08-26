import java.util.Scanner;

public class Sum{

    static void recu(int n, int soma){
        if(n==0){
            System.out.printf("%d\n", soma);//retorna 0 por nao ter mais digitos para realizar a divisão
        }else{
            soma+=n%10;
            recu(n/10, soma);//realiza a chamada da divisão e soma com o seu resto para pegar cada digito
        }
    }

    public static void main(String[] args){
        int n1;
        Scanner lei = new Scanner(System.in);

       while((lei.hasNextInt())!=false){//verifica se existe uma proxima linha a ser lida
        n1=lei.nextInt();
	//realiza a leitura para o inteiro a ser somado
        recu(n1, 0);
        //realiza a chamada recursiva e assoscia a variavel de soma
       }
        //fecha o leitor
        lei.close();
    }
}
