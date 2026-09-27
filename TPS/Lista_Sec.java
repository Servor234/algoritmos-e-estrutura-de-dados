    import java.util.*;
    import java.io.*;



public class Lista_Sec{

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

		public veiculo[] convert(veiculo[] arr, int[] id, int k){//converte o array de ids para um array de veiculos
			veiculo[] v1 = new veiculo[k];

			for(int i=0;i<k;i++){//percorre todos os ids do array
				for(int j=0;j<500;j++){//percorre o arquivo procurando o id
					if(arr[j].getid()==id[i]){//caso ache, procura o proximo
						v1[i]=arr[j];
						break;
					}
				}
			}

			return v1;//retorna o array correto

		}


		public veiculo convertP(veiculo[] arr, int id){//realiza a conversão de apenas 1 veiculo
				for(int j=0;j<500;j++){
					if(arr[j].getid()==id){
						return arr[j];
					}
				}

			return null;

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

	public static class Lista{//classe de lista onde define atributos e metodos para manipular listas
		public veiculo[] arr;
		public int n;//numero de posições acessiveis
		public int tam;//tamanho geral do vetor

		public Lista(){//construtor da classe para impedir erros de referencia
			arr= new veiculo[500];
			n=0;
			tam=500;
		}

		public void convertL(veiculo[] arr3, int[] id, int k){//converte o vetor de ids em um de carros e depois converte para uma lista
			veiculo obj = new veiculo();//um objeto auxiliar para realizar a chamada dos metodos de veiculo

			veiculo[] tmp = obj.convert(arr3,id,k);//vetor temporario que guarda os veiculos

			for(int i=0;i<k;i++){//converte veiculo por veiculo do temporario para o array da lista
				arr[i]=tmp[i];
			}

			n=k;//define o tamanho acessivel para o tamanho do array de ids
		}

		public void inserir(veiculo x,int pos){//metodo que realiza a inserção em uma posição especifica
			if(pos==0){//se a posição for a primeira, chama a de inserir no fim
				inserirInicio(x);
			}else if(pos==n){//caso a posição seja o ultimo acessivel, realiza a inserção no fim
				inserirFim(x);
			}else if(pos<=n && n!=0){//caso posição seja menor igual ao acessivel e acessivel seja diferente de 0
				for(int i=n;i>pos;i--){//desloca todos os veiculos 1 posição para frente e deixa a posição livre para colocar o elemento desejado
					arr[i]=arr[i-1];
				}
				n++;//aumenta o numero de acessiveis
				arr[pos]=x;//insere na posição desejada
			}
		}

		public void inserirInicio(veiculo x){//realiza a inserção no inicio
			if(n<tam){
				for(int i=n;i>0;i--){//realiza o deslocamento da mesma maneira que no metodo inserir em posiçao
					arr[i]=arr[i-1];
				}	
				arr[0]=x;//coloca o veiculo x no inicio do array
				n++;//aumenta o tamanho acessivel
			}
		}

		public void inserirFim(veiculo x){//realiza a inserção no inicio
			if(n<tam){//verifica se n é menor que tamanho
				arr[n]=x;//se for, coloca na ultima posiçao acessivel o veiculo x
				n++;//aumenta a parte acessivel do vetor
			}
		}

		public veiculo removerInicio(){//realiza a remoção no inicio
			if(n>0){//se o tamanho acessivel for maior que 0
				veiculo rest=arr[0];//guarda o primeiro elemento do vetor
				for(int i=0;i<n-1;i++){//"puxa" todos os elementos para tras
					arr[i]=arr[i+1];
				}
				n--;//reduz a parte acessivel
				return rest;//retorna o que foi removido
			}
			return null;
		}

		public veiculo removerFim(){//realiza a remoção no fim
			if(n>0){//caso o tamanho acessivel for maior que 0
				n--;//reduz a acessivel
				return arr[n];//entrega o elemento na posição n, visto que n está na posição que foi recem removida
			}
			return null;
		}

		public veiculo remover(int pos){//metodo de remover na posição desejada
			if(pos==0){//caso esteja no começo, ira realiza remoçao no inicio
				return removerInicio();
			}else if(pos==n-1){//caso seja a ultima posição acessivel
				return removerFim();//ira remover no fim
			}else if(pos<=n && n>0){//caso a parte acessivel seja maior que 0
				veiculo rest=arr[pos];//pega o veiculo da posição para ser retornado depois
				for(int i=pos;i<n-1;i++){//puxa todos os veiculos para tras
					arr[i]=arr[i+1];
				}
				n--;//reduz a parte acessivel
				return rest;//retorna o removido
			}
			return null;
		}

		public int pegarint(String a){//metodo para pegar a string e converter para um inteiro
			int soma=0;
			for(int i=0;i<a.length();i++){//realiza a multiplicação de cada digito ja somado por 10 e soma o proximo 
				soma = soma*10+(a.charAt(i)-'0'); 
			}
			return soma;//retorna o inteiro da string
		}

		public void opera(String[] ops, int j, veiculo[] arr2){//metodo que reune as operações feitas
			String[] remo = new String[j];//vetor que guarda as remoções
			int num=0;//numero de elementos removidos
			veiculo obj = new veiculo();//objeto auxiliar para chamar metodos da classe veiculo
			for(int i=0;i<j;i++){//percorre o vetor de operações
				veiculo tmp = new veiculo();//cria um veiculo temporario auxiliar para as remoçoes
				String[] op = ops[i].split(" ");//quebra a string de operações em j para poder analisar operações e numeros de id

				if(op[0].equals("II")){//compara e realiza a inserção da letra inicial
					inserirInicio(obj.convertP(arr2,pegarint(op[1])));//converte o id passado para o codigo em um veiculo
				}else if(op[0].equals("IF")){//repete o de inserção no inicio
					inserirFim(obj.convertP(arr2,pegarint(op[1])));
				}else if(op[0].equals("I*")){//repete o de inserção no inicio
					inserir(obj.convertP(arr2,pegarint(op[2])),pegarint(op[1]));

				}else if(op[0].equals("RI")){//caso seja uma remoção ira pegar o veiculo retornado, formatar e guardar no vetor de remoções
					tmp=removerInicio();
					remo[num]="(R)";
					remo[num]+=tmp.marca;
					remo[num]+=" ";
					remo[num]+=tmp.modelo;
					num++;	//incremente o numero de removidos
				}else if(op[0].equals("RF")){//repete remover no inicio
					tmp=removerFim();
					remo[num]="(R)";
					remo[num]+=tmp.marca;
					remo[num]+=" ";
					remo[num]+=tmp.modelo;
					num++;
				}else if(op[0].equals("R*")){//repete remover no inicio
					tmp=remover(pegarint(op[1]));
					remo[num]="(R)";
					remo[num]+=tmp.marca;
					remo[num]+=" ";
					remo[num]+=tmp.modelo;
					num++;
				}
			}
			for(int i=0;i<num;i++){//mostra todos os removidos formatados
				System.out.print(remo[i]+"\n");
			}

			for(int i=0;i<n;i++){//mostra a lista no final
				System.out.printf(arr[i].format()+"\n");
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
		Lista lista1 = new Lista();
		int i=0,j=0;
		int[] arr2=new int[502];

		while(i!=-1){//le ate o -1
			i=lei.nextInt();
			if(i!=-1){
				arr2[j]=i;
				j++;
			}
		}

		lista1.convertL(arr,arr2,j);//converte o vetor de ids para uma lista

		
		int ops = lei.nextInt(), aux=0;//le todas as operações
		lei.nextLine();//pula 1 linha de buffer do teclado
		String[] operacoes = new String[ops];//cria um vetor do tamanho das operações que serão realizadas

		while(aux!=ops){//enquanto a variavel auxiliar for diferente de ops, ira ler as operações a serem feitas
			operacoes[aux]=lei.nextLine();
			aux++;
		}
		
		lista1.opera(operacoes, ops, arr);//chama o metodo de operações

		lei.close();
	}
}    

