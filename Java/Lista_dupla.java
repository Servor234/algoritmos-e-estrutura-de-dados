import java.util.*;

public class Lista_dupla{

    public static class Celula{
        public int el;
        public Celula prox;
        public Celula ant;

        public Celula(){
            this(0);
        }

        public Celula(int x){
            this.el=x;
            this.prox=null;
            this.ant=null;
        }
    }
    
    public static class Lista{
        public Celula primeiro,ultimo;

        public Lista(){
            primeiro = new Celula();
            ultimo=primeiro;
        }

        public void inserirF(int x){
            Celula tmp = new Celula(x);
            ultimo.prox=tmp;
            tmp.ant=ultimo;
            tmp=null;
            ultimo=ultimo.prox;
        }

        public void inserirI(int x){
            Celula tmp = new Celula(x);
            tmp.prox=primeiro.prox;
            tmp.ant=primeiro;
            tmp=null;
            if(ultimo==primeiro){
                ultimo=ultimo.prox;
            }
        }

        public void inserir(int x, int pos){
            if(pos==0){
                inserirI(x);
            }
            Celula i=primeiro;
            int j=pos;
            for(;j!=0;j--, i=i.prox);

            Celula tmp=new Celula (x);
            tmp.prox=i.prox;
            tmp.ant=i;
            i.prox=tmp;
            i=null;
            tmp=null;
        }

        public int removerF(){
            Celula tmp=ultimo;
            int elemento = ultimo.el;
            ultimo=ultimo.ant;
            tmp.ant=null;
            ultimo.prox=null;
            tmp=null;
            return elemento;
        }

        public int removerI(){
            int elemento = primeiro.prox.el;
            Celula tmp = primeiro.prox;
            primeiro.prox=tmp.prox;
            tmp.prox.ant=primeiro;
            tmp.prox=null;
            tmp.ant=null;
            return elemento;
        }

        public int remover(int pos){
            if(primeiro==ultimo){
                return -1;
            }else{
                Celula i = primeiro.prox;
                for(int j=pos;j!=0;i=i.prox, j--);
                int elemento=i.el;
                i.ant.prox=i.prox;
                i.prox.ant=i.ant;

                i.prox=null;
                i.ant=null;
                i=null;

            return elemento;
            }
        }

        public void invert(){
            Celula i=primeiro.prox;
            Celula j=ultimo;
            while(i!=j && j.prox!=i){
                int tmp=i.el;
                i.el=j.el;
                j.el=tmp;
                j=j.ant;
                i=i.prox;
            }
        }

        public void mostra(){
            for(Celula i=primeiro.prox;i!=null;i=i.prox){
                System.out.print(i.el + " ");
            }
        }

        public int tam(){
            int cont=0;

            for(Celula i=primeiro.prox;i!=null;i=i.prox){
                cont++;
            }

            return cont;
        }


    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        Lista nova = new Lista();

        for(int i=0;i<5;i++){
            nova.inserirF(lei.nextInt());
        }

        nova.invert();
    
        nova.mostra();
        System.out.print("\n" + nova.tam());

        lei.close();
    }
}