import java.util.*;

public class Modelagem_java{
	public static class data{
		private int dia;
		private int mes;
		private int ano;

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

	public static class veiculo{
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
			dataregis = new data();
		}

		public int getid(){
			return this.id;
		}

		public String getmarca(){
			return this.marca;
		}

		public String getmodelo(){
			return this.modelo;
		}

		public int getano(){
			return this.ano;
		}

		public String getcate(){
			return this.cate;
		}

		public String getcombustivel(){
			return this.combustivel[0];
		}

		public int getcilidro(){
			return cilidro;
		}

		public double getcilidrada(){
			return cilidrada;
		}

		public String gettransmi(){
			return transmi;
		}

		public String gettracao(){
			return tracao;
		}

		public double getconsumocid(){
			return consumoCid;
		}

		public double getconsumoest(){
			return consumoEst;
		}

		public double getco2(){
			return co2;
		}

		public boolean getturbo(){
			return turbo;
		}

		public void setid(int x){
			this.id=x;
		}

		public void setmarca(String x){
			this.marca=x;
		}

		public void setmodelo(String x){
			this.modelo=x;
		}

		public void setano(int x){
			this.ano=x;
		}

		public void setcate(String x){
			this.cate=x;
		}

		public void setcombustivel(String x, int i){
			this.combustivel[i]=x;
		}

		public void setcilidro(int x){
			this.cilidro=x;
		}

		public void setcilidrada(double x){
			this.cilidrada=x;
		}

		public void settransmi(String x){
			this.transmi=x;
		}

		public void settracao(String x){
			this.tracao=x;
		}

		public void setconsumocid(double x){
			this.consumoCid=x;
		}

		public void setconsumoest(double x){
			this.consumoEst=x;
		}

		public void setco2(double x){
			this.co2=x;
		}

		public void setturbo(boolean x){
			this.turbo=x;
		}

		public String format(){
			String a="";
			a+="[";
			a+=getid();
			a+="##";
			a+=getmarca();
			a+="##";
			a+= getmodelo();
			a+="##";
			a+= getano();
			a+="##";
			a+= getano();
			a+="##";
			a+=getcate();
			a+="##";
			a+=getcombustivel();
			a+="##";
			a+=getcilidro();
			a+="##";
			a+=getcilidrada();
			a+="##";
			a+=gettransmi();
			a+="##";
			a+=gettracao();
			a+="##";
			a+=getconsumocid();
			a+="##";
			a+=getconsumoest();
			a+="##";
			a+=getco2();
			a+="##";
			a+=getturbo();
			a+="##";
			a+=dataregis.format();
			a+="]";
			return a;
		}

		public int lin(veiculo[] a, int size, int buscado){
			for(int i=0;i<size;i++){
				if(a[i].getid()==buscado){
					return i;
				}
			}
			return -1;
		}

		public int maior(String a, String b){
			int i=0;
			while(a.charAt(i)!='\0' && a.charAt(i)!='\0'){
				if(a.charAt(i)>b.charAt(i)){
					return 1;
				}

				if(a.charAt(i)<b.charAt(i)){
					return 0;
				}

				i++;
			}

			if(a.charAt(i)!='\0'){
				return 1;
			}else{
				return 0;
			}
		}

		public void inser(veiculo[] a,int size){
			for(int i=0;i<size;i++){
				String tmp = a[i].getmarca();

				int j=i+1;

				while(j>=0 && maior(a[j].getmarca(), tmp)==1){
					a[j+1].setmarca(a[j].getmarca());
					j--;
				}

				a[j+1].setmarca(tmp);
			}
		}

	}

	public class leitorCsv{}

	public static void main(String[] args){
		Scanner lei = new Scanner(System.in);

		lei.close();
	}
}