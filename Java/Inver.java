import java.util.Scanner;

public class Inver{
    static void recu(int n, String frase, String a, int i){
        if(i==n){
            a+=(char)(frase.charAt(i)+3);
		System.out.printf( "%s\n", a);
            //imprime a primeira letra da frase no final
        }else{
            a+=(char)(frase.charAt(i)+3);//imprime as letras de tras para frente recursivamente

            recu(n,frase, a, i+1);//realiza a chamada recursiva para ir para o indice anterior
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
        String frase, frase2="";
        int n1;
	
	while(lei.hasNextLine()!=false){
        //realiza a leitrua
        frase=lei.nextLine();

        //acha o tamanho menos 1 pelo indice do array
        n1=frase.length();
		
	if(FIM(frase, n1)==true){//caso a frase seja fim, não faz a inversão
        //chama a função recursiva
        recu(n1-1, frase, frase2,0);
	}
	}
        //fecha o leitor
        lei.close();
    }
}
        
