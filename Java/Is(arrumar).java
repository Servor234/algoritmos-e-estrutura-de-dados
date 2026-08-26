import java.util.Scanner;

public class Is{
    public static Boolean vowls(String a){//metodo para analisar a string e retornar se é ou não uma frase de vogais
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)!='a' && a.charAt(i)!='e' && a.charAt(i)!='i' && a.charAt(i)!='o' && a.charAt(i)!='u'){
                return false;//caso tenha algo diferente de vogal ele para e deixa como falso
            }
        }
        return true;//caso não tenha algo diferente ele retorna verdadeiro para o caso de frases vogais
    } 
    public static Boolean Nvowls(String a){//metodo para analisar a string e retornar se é ou não uma frase de consoantes
        for(int i=0;i<a.length();i++){
            if((a.charAt(i)=='a' ||a.charAt(i)=='e'||a.charAt(i)=='i'||a.charAt(i)=='o'||a.charAt(i)=='u') || (a.charAt(i)>90)){
                return false;//caso tenha uma vogal ele para e deixa como falso
            }
        }
        return true;//caso não tenha vogal ele retorna verdadeiro para frase de consoantes
    } 

    public static Boolean intege(String a){//metodo que verifica se é um numero inteiro
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)=='.' || a.charAt(i)==',' || (a.charAt(i)<48 || a.charAt(i)>57)){//caso tenha ponto ou virgula, ou não seja um numero ele retorna falso
                return false;
            }
        }
        return true;//caso um numero inteiro retorna verdadeiro
    }

    public static Boolean rei(String a){//metodo que verifica se é um numero real
        int conta=0;
        for(int i=0;i<a.length();i++){
            if((a.charAt(i)<48 || a.charAt(i)>57) || (a.charAt(i) !=46 && a.charAt(i)!=44) && conta<=2){//verifica se não é um numero, se possui algo diferente de ponto ou virgula e se eles repetem alguma vez
                return false;
            }

            if(a.charAt(i)==',' || a.charAt(i)=='.'){//contabiliza o numero de pontos e virgulas
                conta++;//adiciona caso tenha a virgula ou o ponto
            }

        }
        return true;//caso seja real, retorna verdade
    }

    static boolean FIM(String frase, int n){//metodo para verificar se a frase é fim
    	if(n>=3 && frase.charAt(0)=='F' && frase.charAt(1)=='I' && frase.charAt(2)=='M'){
    		return false;//retorna false caso seja fim
	}

	return true;//retorna true para frases com 2 caracteres e que não sejam fim
    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        String frase;
        //declara o novo leitor para o sistema
        
	while(lei.hasNextLine()!=false){//realiza a leitura ate o fim do arquivo
	frase = lei.nextLine();
        //le a nova frase
	
	if(FIM(frase, frase.length())!=false){//caso a frase seja fim, para
        if(vowls(frase)==true){//caso retorne a frase como verdadeiro Sim, caso contrario retorna não
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(Nvowls(frase)==true){//retorna sim caso frase de consoantes e não caso o contrario
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(intege(frase)==true){//retorna sim caso numero inteiro e não caso o contrario
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(rei(frase)==true){//retorna sim caso numero real e não caso o contrario
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        System.out.printf("\n");//separa as linhas de leitura
	}
	}
        lei.close();//fecha o leitor 
    }
}
