    import java.util.*;
    import java.io.*;



public class Pilha_enc{

	public static class data{
		private int dia;
		private int mes;
		private int ano;

		public data(){
			dia=0;
			mes=0;
			ano=0;
		}

		/*
		 ========================
		 CONJUNTO DE GETs E SETs
		 ========================
		 */

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

		/*
		 ============================
		 FIM DO CONJUNTO DE GET E SET
		 ============================
		 */

		public String format(){//formata a data para uma string
			String a="";
			if(getdia()<10){//caso a parte analisada seja menor que 10, ele guarda 0 a mais
			a+="0";
			}	
			a+=getdia();
			a+='/';
			if(getmes()<10){//repete o if do get dia
			a+="0";
			}
			a+=getmes();
			a+='/';
			a+=getano();
			return a; 
		}

		data parseData(String s){//metodo de converter as strings para variaveis
			String[] frases = s.split("-");//quebra a string
			data d1 = new data();
			int soma=0;
			for(int i=0;i<frases[0].length();i++){
				soma+=frases[0].charAt(i)-'0';

				if(i+1<frases[0].length()){
					soma*=10;
				}
			}//faz a leitura da frase e converte para inteiros

			d1.setano(soma);//guarda em ano

			soma=0;
			for(int i=0;i<frases[1].length();i++){//faz a leitura e conversão da frase para inteiros
				soma+=frases[1].charAt(i)-'0';

				if(i+1<frases[1].length()){
					soma*=10;
				}
			}

			d1.setmes(soma);//guarda em mes

			soma=0;
			for(int i=0;i<frases[2].length();i++){//faz a leitura e conversão da frase para inteiros
				soma+=frases[2].charAt(i)-'0';

				if(i+1<frases[2].length()){
					soma*=10;
				}
			}

			d1.setdia(soma);//guarda em dia

			return d1;//retorna o que foi criado
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

		public veiculo(){//construtor da classe
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

		/*
		 *=====================================================
		 *
		 *CONJUNTO DE METODOS GET E SET
		 *
		 *=====================================================
		 */
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

		/*
		 * =============================
		 *
		 * FIM DO CONJUNTO DE METODOS GET E SET
		 *
		 * =============================
		 */

		public String format(){//metodo de formatação com contatenação de string
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
            if(getcombustivel(1)!=null){//caso tenha somente 1 combustivel, faz so a concatenação de 1 combustivel, caso contrario os dois
                a+=getcombustivel(0);
                a+=",";
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
			a+=" ## ";//uso de format para colocar um 0 no final de numeros double
			a+=String.format(Locale.US,"%.2f", getconsumocid());
			a+=" ## ";
			a+=String.format(Locale.US, "%.2f", getconsumoest());
			a+=" ## ";
			a+=String.format(Locale.US,"%.1f", getco2());
			a+=" ## ";
			a+=getturbo();
			a+=" ## ";
			a+=dataregis.format();
			a+="]";
			return a;
		}


		public veiculo parseveiculo(String s){//metodo para pegar os numeros do arquivo e passar para a variavel
			veiculo v1 = new veiculo();

			String[] t= s.split(",");

			int soma=0;

			for(int i=0;i<t[0].length();i++){//uso de metodo para pegar os digitos da string e transformar em int
				soma+=t[0].charAt(i)-'0';
				if(i+1!=t[0].length()){//caso se chege no ultimo, para a multiplicação e entrega o numero desejado
					soma*=10;
				}
			}

			v1.setid(soma);

			v1.setmarca(t[1]);//guarda os nomes em suas variaveis
			v1.setmodelo(t[2]);

			soma=0;
			for(int i=0;i<t[3].length();i++){//repete o metodo de conseguir os digitos
				soma+=t[3].charAt(i)-'0';
				if(i+1!=t[3].length()){
					soma*=10;
				}
			}
			v1.setano(soma);
			v1.setcate(t[4]);//guarda o nome em sua variavel

			boolean tent=false;//verifica se existe um ; na parte da string para saber se tem 2 combustiveis
			for(int i=0;i<t[5].length();i++){
				if(t[5].charAt(i)==';'){
					tent=true;//caso ache troca o booleano para true
					i=t[5].length();
				}
			}

			if(tent==true){//caso tenha o ; ele entra para pegar as 2 frases
				String[] j = t[5].split(";");
				for(int i=0;i<2;i++){
					v1.setcombustivel(j[i],i);
				}
			}else{//guarda o combustivel caso tenha somente 1
				v1.setcombustivel(t[5],0);
			}

			soma=0;
			for(int i=0;i<t[6].length();i++){//faz a leitura dos cilindros e entrega como int
				soma+=t[6].charAt(i)-'0';
				if(i+1!=t[6].length()){
					soma*=10;
				}
			}

			v1.setcilidro(soma);

			double soma1=0;//faz a leitura levando em conta de ser um double
			for(int i=0;i<t[7].length();i++){
				if(t[7].charAt(i)=='.'){//pula caso o caracter seja . que demarca casas decimais
					i++;
				}

				soma1+=t[7].charAt(i)-'0';
				if(i+1<t[7].length()){
					soma1*=10;
				}
			}

			v1.setcilidrada(soma1/10);//divide para manter a formatação ideal

			v1.settransmi(t[8]);//coloca as frases em suas variaveis
			v1.settracao(t[9]);
			
			soma1=0;

			for(int i=0;i<t[10].length();i++){//repete o metodo de cilindrada para a leitura de doubles
				if(t[10].charAt(i)=='.'){
					i++;
				}

				soma1+=t[10].charAt(i)-'0';
				if(i+1<t[10].length()){
					soma1*=10;
				}
			}

			v1.setconsumocid(soma1/100);//divide por 100 para manter a formatação

			soma1=0;

			for(int i=0;i<t[11].length();i++){//repete o metodo de cilindrada para a leitura de doubles
				if(t[11].charAt(i)=='.'){
					i++;
				}

				soma1+=t[11].charAt(i)-'0';
				if(i+1<t[11].length()){
					soma1*=10;
				}
			}

			v1.setconsumoest(soma1/100);//divide por 100 para manter a formatação

			if(t[12].charAt(0)=='0'){//faz uma separação de caso para lidar com 0 emissões
				v1.setco2(0);
			}else{
				soma1=0;

				for(int i=0;i<t[12].length();i++){//repete o metodo de cilindrada
					if(t[12].charAt(i)=='.'){
						i++;
					}

					soma1+=t[12].charAt(i)-'0';
					if(i+1<t[12].length()){
						soma1*=10;
					}
				}
				v1.setco2(soma1/10);//divide por 10 para manter a formatação
			}

			if(t[13].equals("true")){//guarda o booleano dependendo do seu retorno
				v1.setturbo(true);
			}else{
				v1.setturbo(false);
			}

			v1.dataregis=v1.dataregis.parseData(t[14]);//chama o metodo de data para a formatação

			return v1;//retorna o veiculo feito
		}

		public veiculo[] convert(veiculo[] arr, int[] id, int k){//metodo de conversão de ids para um array de veiculos
			veiculo[] v1 = new veiculo[k];

			for(int i=0;i<k;i++){//faz a leitura do array de id e procura no array de veiculos o id correspondente, caso ache, guarda no novo array
				for(int j=0;j<500;j++){
					if(arr[j].getid()==id[i]){
						v1[i]=arr[j];
						break;
					}
				}
			}

			return v1;//retorna o array de veiculos correspondente aos ids

		}


		public veiculo convertP(veiculo[] arr, int id){//metodo de conversão de um id para o veiculo desejado
				for(int j=0;j<500;j++){
					if(arr[j].getid()==id){
						return arr[j];
					}
				}

			return null;//caso não ache, retorna null

		}

		public void busca(veiculo[] v1,int a){//busca o carro pelo id e caso ache, retorna todos os seus dados
			for(int i=0;i<500;i++){
				if(v1[i]!=null && v1[i].getid()==a){
					System.out.print(v1[i].format()+ "\n");
					break;
				}
			}
		}

	}

	public static class Celulas{//classe das celulas que serão usadas para a pilha
		public veiculo el;
		public Celulas prox;

		public Celulas(){//construtor da celula sem o veiculo
			prox=null;
		}

		public Celulas(veiculo x){//construtor da celula com o veiculo
			el=x;
			prox=null;
		}
	}

	public static class pilha{
		public Celulas topo;

		public pilha(){
			topo=new Celulas();//cria a celula cabeça do topo da pilha
		}

		public void convertL(veiculo[] arr3, int[] id, int k){//convert os ids para veiculos e insere na pilha
			veiculo obj = new veiculo();

			veiculo[] tmp = obj.convert(arr3,id,k);

			for(int i=0;i<k;i++){
				inserir(tmp[i]);
			}
		}

		public void inserir(veiculo x){//insere a celula nova com o elemento desejado no topo da pilha
			Celulas tmp = new Celulas(x);//cria uma nova celula com o veiculo desejado e coloca no topo da pilha
			tmp.prox=topo;
			topo=tmp;
			tmp=null;
		}

		public veiculo remover(){//remove a celula do topo da pilha e retorna o veiculo que estava nela
			veiculo tmp = topo.el;
			Celulas aux=topo;
			topo=topo.prox;
			aux.prox=null;
			aux=null;
			return tmp;
		}

		public int pegarint(String a){//metodo de pegar os numeros da string e converter para int onde este será a id
			int soma=0;
			for(int i=0;i<a.length();i++){
				soma = soma*10+(a.charAt(i)-'0'); 
			}
			return soma;//retorna o numero convertido
		}

		public void opera(String[] ops, int j, veiculo[] arr2){//metodo de operar as inserções e remoções da pilha
			String[] remo = new String[j];//cria um array de string para guardar os removidos
			int num=0;//guarda o numero de removidos
			veiculo obj = new veiculo();//cria um veiculo para chamar os metodos de conversão
			
			for(int i=0;i<j;i++){
				veiculo tmp = new veiculo();//cria um veiculo temporario para guardar o removido
				String[] op = ops[i].split(" ");//quebra a string para saber se é inserção ou remoção e o id do veiculo no caso de inserção

				if(op[0].equals("I")){//caso seja uma inserção, chama o metodo de conversão e insere na pilha
					inserir(obj.convertP(arr2,pegarint(op[1])));//usa a conversão parcial para pegar o id do veiculo e entregar o veiculo para a conversão
				}else if(op[0].equals("R")){//caso seja uma remoção, chama o metodo de remoção e guarda no array de removidos já formatado
					tmp=remover();//tmp guarda a string do veiculo removido
					remo[num]="(R)";
					remo[num]+=tmp.marca;
					remo[num]+=" ";
					remo[num]+=tmp.modelo;
					num++;//incrementa o numero de removidos
				}
			}
		
			for(int i=0;i<num;i++){//mostra os removidos formatados
				System.out.print(remo[i]+"\n");
			}

			for(Celulas i=topo;i.prox!=null;i=i.prox){//mostra a pilha formatada, do topo para a base
				System.out.printf(i.el.format()+"\n");
			}
			
		}
	}
	public static class leitorCsv{
		public veiculo[] leitordeCsv(String caminhoArquivo){
				veiculo[] v1 = new veiculo[500];//abre o arquivo e cria um novo array de veiculos
				File arq = new File(caminhoArquivo);
				int i=0;

				try{//tenta ler o arquivo
				Scanner lei = new Scanner(arq);//le o arquivo
				lei.nextLine();//pula a primeira linha do arquivo que é o indice
				while(lei.hasNextLine()){//le enquanto a linhas
					String frase = lei.nextLine();//le a linha do arquivo
					v1[i]=new veiculo();
					v1[i] = v1[i].parseveiculo(frase);//formata o vetor
					i++;//guarda em cada casa do vetor
				}
				lei.close();//fecha o scanner
				return v1;//retorna o vetor

				}catch(FileNotFoundException e){//caso não ache ou de erro, fecha o arquivo
                    e.printStackTrace();
				}
				return v1;//fecha ao retornar o que foi feito
			} 
	}



	public static void main(String[] args){
		Scanner lei = new Scanner(System.in);//abre a leitura do teclado
		leitorCsv obj = new leitorCsv();//cria o leitor do arquivo
		veiculo[] arr = obj.leitordeCsv("/tmp/veiculos.csv");//le o arquivo e guarda no banco de dados
		veiculo obj2 = new veiculo();//chama o metodo de busca com base no array 1
		pilha lista= new pilha();
		int i=0,j=0;
		int[] arr2=new int[502];

		while(i!=-1){//le ate o -1
			i=lei.nextInt();
			if(i!=-1){
				arr2[j]=i;
				j++;
			}
		}

		lista.convertL(arr,arr2,j);//converte os ids para veiculos e insere na pilha

		
		int ops = lei.nextInt(), aux=0;//le a quantidade de operações que serão feitas
		lei.nextLine();
		String[] operacoes = new String[ops];//cria um array de string para guardar as operações

		while(aux!=ops){//le as operações e guarda no array de string
			operacoes[aux]=lei.nextLine();
			aux++;
		}
		
		lista.opera(operacoes, ops, arr);//começa a analisar as operações e mostrar o que foi pedido

		lei.close();
	}
}    

