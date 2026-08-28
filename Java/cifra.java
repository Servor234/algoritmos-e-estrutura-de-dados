import java.util.Scanner;

public class cifra{
	
	static void cifra3(String frase, int n){
	String a="";

		for(int i=0;i<n;i++){//loop que realiza a concatenação em uma nova string criptografada
			a+=(char)(frase.charAt(i)+3);
		}

		System.out.printf("%s\n", a);//faz a impressão normalmente
	}

	static boolean FIM(String frase1, int n){//checa se a frase é fim e retorna true ou false caso seja
		if(n==3 && frase1.charAt(0)=='F' && frase1.charAt(1)=='I' && frase1.charAt(2)=='M'){
			return false;
		}else{
			return true;
		}
	}

	public static void main(String[] args){
	Scanner lei = new Scanner(System.in);
	//declaração do scanner para leitura de inputs
	
	String cripto;
	int chave=0;
	
	while(lei.hasNextLine()!=false){
	cripto=lei.nextLine();
	//leitura da frase a ser criptografada
	chave=cripto.length();

	if(FIM(cripto,chave)==true){

	cifra3(cripto,chave);
	//chamada do metodo para mostrar a string invertida
	}
	}
	lei.close();

	}
}
