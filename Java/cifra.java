import java.util.Scanner;

public class cifra{
	public static void main(String[] args){
	Scanner lei = new Scanner(System.in);
	//declaração do scanner para leitura de inputs
	
	String cripto;
	int chave=3;

	cripto=lei.nextLine();
		//leitura da frase a ser criptografada

	for(int i=0;i<cripto.length();i++){//loop para poder percorrer a frase letra por letra
		if((cripto.charAt(i)>=88 && cripto.charAt(i)<= 90)|| (cripto.charAt(i)>=120 && cripto.charAt(i)<=122)){//caso a letra seja z é preciso voltar a partir da letra a
		System.out.printf("%c", cripto.charAt(i)-26+chave);//mostra a partir da letra a
		}else{
			System.out.printf("%c", cripto.charAt(i)+chave);//faz a impressão normalmente
		}
	}

	System.out.printf("\n");//joga o \n para poder quebrar a linha e manter o padrao de entradas

	lei.close();

	}
}
