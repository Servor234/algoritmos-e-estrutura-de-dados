import java.util.Scanner;
import java.util.Random;

public class Ale{	
	public static void main(String[] args){
	Scanner lei = new Scanner(System.in);
	String frase="";

	Random gera = new Random();
	gera.setSeed(4);

	frase = lei.nextLine();
	while(!(frase.equals("FIM"))){
	char letra1='a', letra2='b';

	letra1=((char)('a'+(Math.abs(gera.nextInt())%26)));
	letra2=((char)('a'+(Math.abs(gera.nextInt())%26)));

	for(int i=0;i<frase.length();i++){
		if(frase.charAt(i)==letra1){
		System.out.printf("%c", letra2);
		}else{
		System.out.printf("%c", frase.charAt(i));
		}
	}		
	System.out.printf("\n");

	frase = lei.nextLine();
	}
	lei.close();	
	}
}
