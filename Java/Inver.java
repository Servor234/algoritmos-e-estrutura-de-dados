import java.util.Scanner;

public class Inver{
    static void recu(int n, String frase){
        if(n==0){
		System.out.printf( "%c\n", frase.charAt(n));
            //imprime a primeira letra da frase no final
        }else{
            System.out.printf( "%c", frase.charAt(n));//imprime as letras de tras para frente recursivamente

            recu(n-1,frase);//realiza a chamada recursiva para ir para o indice anterior
        }
    }

    static boolean FIM(String frase, int n){//metodo para verificar se a string é fim
    	if(n>=3 && frase.charAt(0)=='F' && frase.charAt(1)=='I' && frase.charAt(2)=='M'){
		return false;//caso a frase tenha ao menos 3 letras, ira comparar as letras e verificar se é fim
	}

	return true;
    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        String frase;
        int n1;
	
	while(lei.hasNextLine()!=false){
        //realiza a leitrua
        frase=lei.nextLine();

        //acha o tamanho menos 1 pelo indice do array
        n1=frase.length();
		
	if(FIM(frase, n1)==true){//caso a frase seja fim, não faz a inversão
        //chama a função recursiva
        recu(n1-1, frase);
	}
	}
        //fecha o leitor
        lei.close();
    }
}
        
