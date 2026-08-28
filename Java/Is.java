import java.util.Scanner;

public class Is{
    public static boolean vogais(String a){//metodo para analisar a string e retornar se é ou não uma frase de vogais
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)!='a' && a.charAt(i)!='e' && a.charAt(i)!='i' && a.charAt(i)!='o' && a.charAt(i)!='u' && a.charAt(i)!='A' && a.charAt(i)!='E' && a.charAt(i)!='I' && a.charAt(i)!='O' && a.charAt(i)!='U'){
                return false;//caso tenha algo diferente de vogal ele para e deixa como falso
            }
        }
        return true;//caso não tenha algo diferente ele retorna verdadeiro para o caso de frases vogais
    } 
    public static boolean Consoantes(String a){//metodo para analisar a string e retornar se é ou não uma frase de consoantes
        for(int i=0;i<a.length();i++){
            if((a.charAt(i)=='a' ||a.charAt(i)=='e'||a.charAt(i)=='i'||a.charAt(i)=='o'||a.charAt(i)=='u') || (a.charAt(i)>'z' || a.charAt(i)<'a') || a.charAt(i)=='A' || a.charAt(i)=='E' || a.charAt(i)=='I' || a.charAt(i)=='O' || a.charAt(i)=='U' || (a.charAt(i)<'A' || a.charAt(i)>'Z')){
                return false;//caso tenha uma vogal ele para e deixa como falso
            }
        }
        return true;//caso não tenha vogal ele retorna verdadeiro para frase de consoantes
    } 

    public static boolean real(String a){//metodo que verifica se é um numero real
        int conta=0, numero=0;
	    for(int i=0;i<a.length();i++){
	        char c=a.charAt(i);
            if(c>='0' && c<='9'){
                numero++;//analisa se existe ao menos 1 numero
            }

            if(c=='.' || c==','){
	    	    conta++;

		        if(conta>1){//contabiliza o numero de pontos e virgulas
		            return false;//adiciona caso tenha a virgula ou o ponto e torna falso caso tenha mais de 1 ponto
		        }

	        }else if((c<'0' || c>'9')){//caso não seja um numero ele retorna falso
               	return false;
            }

        }
        if(numero>=1){
        return true;//caso um numero real retorna verdadeiro
        }else{
            return false;//caso seja feito somente de pontos, retorna falso
        }
    }

    public static boolean inteiro(String a){//metodo que verifica se é um numero inteiro
        for(int i=0;i<a.length();i++){
            if((a.charAt(i)<'0' || a.charAt(i)>'9') || (a.charAt(i) ==',' || a.charAt(i)=='.')){//verifica se não é um numero, se possui algo diferente de ponto ou virgula e se eles repetem alguma vez
                return false;
            }
            

        }
        return true;//caso seja inteiro, retorna verdade
    }

    static boolean FIM(String frase, int n){//metodo para verificar se a frase é fim
    	if(n==3 && frase.charAt(0)=='F' && frase.charAt(1)=='I' && frase.charAt(2)=='M'){
    		return false;//retorna false caso seja fim
	}

	return true;//retorna true para frases com 2 caracteres e que não sejam fim
    }

    static void exibi(String frase){
        if(vogais(frase)==true){//caso retorne a frase como verdadeiro Sim, caso contrario retorna não
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(Consoantes(frase)==true){//retorna sim caso frase de consoantes e não caso o contrario
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(inteiro(frase)==true){//retorna sim caso numero inteiro e não caso o contrario
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(real(frase)==true){//retorna sim caso numero real e não caso o contrario
            System.out.printf("SIM");
        }else{
            System.out.printf("NAO");
        }

        System.out.printf("\n");//separa as linhas de leitura
	
    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        String frase;
        //declara o novo leitor para o sistema
        
	    while(lei.hasNextLine()!=false){//realiza a leitura ate o fim do arquivo
	        frase = lei.nextLine();
            //le a nova frase
	
	        if(FIM(frase, frase.length())!=false && frase.length()!=0){//caso a frase seja fim, para
                exibi(frase);
            }
	    }
        
        lei.close();//fecha o leitor 
    }
}
