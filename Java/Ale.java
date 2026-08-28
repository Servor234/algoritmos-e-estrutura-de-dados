import java.util.Scanner;
import java.util.Random;

public class Ale{

	static void alea(String frase, Random gera){//metodo que forma a string aleatoria e imprime ela

		char letra1='a', letra2='b';//define as variaveis letras incializadas
	
	letra1=((char)('a'+(Math.abs(gera.nextInt())%26)));//associa letras para cada uma delas
	letra2=((char)('a'+(Math.abs(gera.nextInt())%26)));//a primeira é a letra na frase e a segunda é a sua substituta

	String a="";//cria a string que sera concatenada

	for(int i=0;i<frase.length();i++){
		if(frase.charAt(i)==letra1){
			a+=letra2;//caso seja a letra escolhida ele concatena a letra randomizada
		}else{
			a+=frase.charAt(i);//caso seja outra ele concatena a frase normal
		}
	}		
	System.out.printf("%s\n", a);//mostra a frase nova
	}

	static boolean FIM(String frase, int n){//metodo para verificar se chegou ao fim
		if(n==3 && frase.charAt(0)=='F' && frase.charAt(1)=='I' && frase.charAt(2)=='M'){
			return false;//caso string de tamanho 3 e letras certas ele retorna falso
		}else{
			return true;
		}
	}

	public static void main(String[] args){
	Scanner lei = new Scanner(System.in);
	String frase="";

	Random gera = new Random();
	gera.setSeed(4);//cria um objeto aleatorio e define a seed para travar a randomização

	while(lei.hasNextLine()){//le ate o fim do arquivo
	frase = lei.nextLine();
	
	if(FIM(frase, frase.length())!=false){//impede a saida quando fim
		alea(frase, gera);//chama o metodo
	}

	}
	lei.close();//fecha o leitor
	}
}
