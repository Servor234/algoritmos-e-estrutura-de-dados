import java.util.Scanner;

public class cifra{
	public static void main(String[] args){
	Scanner lei = new Scanner(System.in);
	
	String cripto;
	int chave=3;

	cripto=lei.nextLine();

	for(int i=0;i<cripto.length();i++){
		System.out.printf("%c", cripto.charAt(i)+chave);
	}

	System.out.printf("\n");

	}
}
