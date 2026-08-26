import java.util.Scanner;

public class cifra{
	
	static String cifra(String frase, int n){
	String a="";

		for(int i=0;i<n;i++){
			a+=(char)(frase.charAt(i)+3);
		}

		return a;
	}

	public static void main(String[] args){
	Scanner lei = new Scanner(System.in);
	//declaração do scanner para leitura de inputs
	
	String cripto,frase2;
	int chave=0;
	
	while(lei.hasNextLine()!=false){
	cripto=lei.nextLine();
	//leitura da frase a ser criptografada

	chave=cripto.length();

	frase2=cifra(cripto,chave);

	//loop para poder percorrer a frase letra por letra
		System.out.printf("%s", frase2);//faz a impressão normalmente


	System.out.printf("\n");//joga o \n para poder quebrar a linha e manter o padrao de entradas
	}
	lei.close();

	}
}
