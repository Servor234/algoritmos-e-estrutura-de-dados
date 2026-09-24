    import java.util.*;
    import java.io.*;

public class Modelagem_java2{
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

		data parseData(String s){
			String[] frases = s.split("-");
			data d1 = new data();
			int soma=0;
			for(int i=0;i<frases[0].length();i++){
				soma+=frases[0].charAt(i)-'0';

				if(i+1<frases[0].length()){
					soma*=10;
				}
			}

			d1.setano(soma);

			soma=0;
			for(int i=0;i<frases[1].length();i++){
				soma+=frases[1].charAt(i)-'0';

				if(i+1<frases[1].length()){
					soma*=10;
				}
			}

			d1.setmes(soma);

			soma=0;
			for(int i=0;i<frases[2].length();i++){
				soma+=frases[2].charAt(i)-'0';

				if(i+1<frases[2].length()){
					soma*=10;
				}
			}

			d1.setdia(soma);

			return d1;
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
			combustivel= new String[2];
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

		public String getcombustivel(int i){
			return this.combustivel[i];
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
			a+=" ## ";
			a+=getmarca();
			a+=" ## ";
			a+= getmodelo();
			a+=" ## ";
			a+= getano();
			a+=" ## ";
			a+=getcate();
			a+=" ## ";
            a+="[";
            if(getcombustivel(1)!=null){
                a+=getcombustivel(0);
                a+=" ## ";
                a+=getcombustivel(1);
                a+="]";
				a+=" ## ";
            }else{
            a+=getcombustivel(0);
            a+="]";
			a+=" ## ";
            }
			a+=getcilidro();
			a+=" ## ";
			a+=getcilidrada();
			a+=" ## ";
			a+=gettransmi();
			a+=" ## ";
			a+=gettracao();
			a+=" ## ";
			a+=getconsumocid();
			a+=" ## ";
			a+=getconsumoest();
			a+=" ## ";
			a+=getco2();
			a+=" ## ";
			a+=getturbo();
			a+=" ## ";
			a+=dataregis.format();
			a+="]";
			return a;
		}


		public veiculo parseveiculo(String s){	
			veiculo v1 = new veiculo();

			String[] t= s.split(",");

			int soma=0;

			for(int i=0;i<t[0].length();i++){
				soma+=t[0].charAt(i)-'0';
				if(i+1!=5){
					soma*=10;
				}
			}

			v1.setid(soma);

			v1.setmarca(t[1]);
			v1.setmodelo(t[2]);

			soma=0;
			for(int i=0;i<t[3].length();i++){
				soma+=t[3].charAt(i)-'0';
				if(i+1!=4){
					soma*=10;
				}
			}
			v1.setano(soma);
			v1.setcate(t[4]);

			boolean tent=false;
			for(int i=0;i<t[5].length();i++){
				if(t[5].charAt(i)==';'){
					tent=true;
					i=t[5].length();
				}
			}

			if(tent==true){
				String[] j = t[5].split(";");
				for(int i=0;i<2;i++){
					v1.setcombustivel(j[i],i);
				}
			}else{
				v1.setcombustivel(t[5],0);
			}

			soma=0;
			for(int i=0;i<t[6].length();i++){
				soma+=t[6].charAt(i)-'0';
				if(i+1!=t[6].length()){
					soma*=10;
				}
			}

			v1.setcilidro(soma);

			double soma1=0;
			for(int i=0;i<t[7].length();i++){
				if(t[7].charAt(i)=='.'){
					i++;
				}

				soma1+=t[7].charAt(i)-'0';
				if(i+1<t[7].length()){
					soma1*=10;
				}
			}

			v1.setcilidrada(soma1/100);

			v1.settransmi(t[8]);
			v1.settracao(t[9]);
			
			soma1=0;

			for(int i=0;i<t[10].length();i++){
				if(t[10].charAt(i)=='.'){
					i++;
				}

				soma1+=t[10].charAt(i)-'0';
				if(i+1>=t[10].length()){
					soma1*=10;
				}
			}

			v1.setconsumocid(soma1/100);

			soma1=0;

			for(int i=0;i<t[11].length();i++){
				if(t[11].charAt(i)=='.'){
					i++;
				}

				soma1+=t[11].charAt(i)-'0';
				if(i+1>=t[11].length()){
					soma1*=10;
				}
			}

			v1.setconsumoest(soma1/100);

			if(t[12].charAt(0)=='0'){
				v1.setco2(0);
			}else{
				soma1=0;

				for(int i=0;i<t[12].length();i++){
					if(t[12].charAt(i)=='.'){
						i++;
					}

					soma1+=t[12].charAt(i)-'0';
					if(i+1>=t[12].length()){
						soma1*=10;
					}
				}
				v1.setco2(soma1/10);
			}

			if(t[13].equals("true")){
				v1.setturbo(true);
			}else{
				v1.setturbo(false);
			}

			v1.dataregis=v1.dataregis.parseData(t[14]);



			return v1;
		}

		public void busca(int a, veiculo[] b){
			for(int i=0;i<500;i++){
				if(b[i].getid()==a){
					System.out.print(b[i].format()+ "\n");
					break;
				}
			}
		}

	}
	public static class leitorCsv{
		public veiculo[] leitordeCsv(String caminhoArquivo){
				veiculo[] v1 = new veiculo[500];
				File arq = new File(caminhoArquivo);
				int i=0;

				try{
				Scanner lei = new Scanner(arq);
				lei.nextLine();
				while(lei.hasNextLine()){
					String frase = lei.nextLine();
					v1[i]=new veiculo();
					v1[i] = v1[i].parseveiculo(frase);
					i++;
				}
				lei.close();
				return v1;

				}catch(FileNotFoundException e){
                    e.printStackTrace();
				}
				return v1;
			} 
	}

	public static void main(String[] args){
		Scanner lei = new Scanner(System.in);
		leitorCsv obj = new leitorCsv();
		veiculo[] arr = obj.leitordeCsv("/tmp/veiculos.csv");
		veiculo obj2 = new veiculo();
		int i=0;

		while(i!=-1){
			i=lei.nextInt();
			if(i!=-1){
				obj2.busca(i,arr);
			}
		}

		lei.close();
	}
}    

