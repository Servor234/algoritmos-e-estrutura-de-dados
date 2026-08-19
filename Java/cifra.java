import java.util.Scanner;

public class cifra{
	public static void main(String[] args){
	Scanner lei = new Scanner(System.in);
	
	String cripto;
	int chave=3;

	cripto=lei.nextLine();

	for(int i=0;i<cripto.length();i++){
		if(cripto.charAt(i)=='z' || cripto.charAt(i)=='Z'){
		System.out.printf("%c", cripto.charAt(i)-26+chave);
		}else{
			System.out.printf("%c", cripto.charAt(i)+chave);
		}
	}

	System.out.printf("\n");

	lei.close();

	}
}
