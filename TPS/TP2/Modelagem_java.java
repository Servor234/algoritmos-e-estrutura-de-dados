import java.util.*;

<<<<<<< HEAD
public class Modelagem_java{
	public static class joia{
		private int a;
		private int b;
=======
public class carro{
	public class data{
		private int dia;
		private int mes;
		private int ano;
>>>>>>> 1a96f200d78a0ca8662891829b78fca77944f3fd

		public data(){
			dia=0;
			mes=0;
			ano=0;
		}

		public void setdia(int a){
			dia=a;
		}

		public void setmes(int a){
			mes=a;
		}

		public void setano(int a){
			ano=a;
		}

		public int getdia(){
			return dia;
		}

		public int getmes(){
			return mes;
		}

		public int getano(){
			return ano;
		}

		public String format(){
			String a="";	
			a+=getdia();
			a+='/';
			a+=getmes();
			a+='/';
			a+=getano();
			return a; 
		}
	}

	public class veiculo{
		private int id;
		private String marca;
		private String modelo;
		private int ano;
		private String cate;
		private String[] combustivel;
		private int cilidro;
		private double cilidrada;
		private String transmi;
		private String tracao;
		private double consumoCid;
		private double consumoEst;
		private double co2;
		private boolean turbo;
		private data dataregis;

		public veiculo(){
			marca=" ";
			modelo=" ";
			ano=0;
			cate=" ";
			combustivel= new String[1];
			cilidro=0;
			cilidrada=0;
			transmi=" ";
			tracao=" ";
			consumoCid=0;
			consumoEst=0;
			co2=0;
			turbo=false;
		}

		public void format(){
			String a="";
		}

	}

	public class leitorCsv{}

	public static void main(String[] args){
		Scanner lei = new Scanner(System.in);

<<<<<<< HEAD
		joia a= new joia(1,3);

		System.out.printf("%s\n", a.nome());
		
		lei.close();
=======
>>>>>>> 1a96f200d78a0ca8662891829b78fca77944f3fd
	}
}
