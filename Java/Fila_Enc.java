import java.util.*;

public class Fila_Enc {
    public static class Celula{
        public int el;
        public Celula prox;

        public Celula(){
            this(0);
        }

        public Celula(int x){
            el=x;
            prox=null;
        }
    }
        public static class Pilha{
        public Celula topo;

        public Pilha(){
            topo=null;
        }

        public void push(int x){
            Celula tmp = new Celula(x);
            tmp.prox=topo;
            topo=tmp;
            tmp=null;
        }

        public int pop()throws Exception{
            if(topo.prox==null){
                throw new Exception("");
            }
            int elemento = topo.el;
            Celula tmp = topo;
            topo=topo.prox;
            tmp.prox=null;
            tmp=null;
            return elemento;
        }

        public void mostra(){
            for(Celula i=topo;i!=null;i=i.prox){
                System.out.print(i.el + " ");
            }
            System.out.print("\n");
        }

        public int somaRec(Celula a){
            if(a.prox==null){
                return a.el;
            }else{
                return a.el+somaRec(a.prox);
            }
        }

        public int maior(){
            int maior=topo.el;
            for(Celula i=topo;i!=null;i=i.prox){
                if(maior<i.el){
                    maior=i.el;
                }
            }
            return maior;
        }

        public int maiorRec(Celula a, int maior){
            if(a==null){
                return maior;
            }else{
                if(maior<a.el){
                    maior=a.el;
                }
                return maiorRec(a.prox, maior);
            }
        }

        public void mostraI(){
            Celula j;
            for(Celula i=null;i!=topo;i=j){
                j=topo;
                for(;j.prox!=i;j=j.prox);
                System.out.print(j.el + " ");
            }
        }

    }

    public static class Fila{
        public Celula primeiro;
        public Celula ultimo;

        public Fila(){
            primeiro= new Celula();
            ultimo = primeiro;
        }

        public void inserir(int x){
            Celula tmp = new Celula(x);
            ultimo.prox=tmp;
            ultimo=ultimo.prox;
            tmp=null;
        }

        public int remover(){
            Celula tmp=primeiro;
            int elemento = primeiro.prox.el;
            primeiro=primeiro.prox;
            tmp.prox=null;
            tmp=null;
            return elemento;
        }

        public void mostrar(){
            for(Celula i=primeiro.prox;i!=null;i=i.prox){
                System.out.print(i.el + " ");
            }
            System.out.print("\n");
        }

        public int maior(){
            int maior=primeiro.prox.el;
            for(Celula i=primeiro.prox.prox;i!=null;i=i.prox){
                if(maior<i.el){
                    maior=i.el;
                }
            }
            return maior;
        }

        public int elAt(int pos){
            int j=0;
            for(Celula i = primeiro.prox;i!=ultimo && j!=pos;i=i.prox, j++){
                if(j+1==pos){
                    return i.prox.el;
                }
            }
            return -1;
        }

        public void invert(){
            Celula j=primeiro;
            Celula last =null;
            for(Celula k=primeiro.prox;k.prox!=last;k=k.prox){
                j=k;
                for(;j.prox!=last;j=j.prox);
                last=j;
                
                int tmp=j.el;
                j.el=k.el;
                k.el=tmp;
            }
        }
    }
 public static Celula toFila(Celula topo){
            Fila f2 = new Fila();
            Celula j=topo;
            for(Celula i=null; i!=topo;i=j){
                j=topo;
                for(;j.prox!=i;j=j.prox);
                f2.inserir(j.el);
            }
            return f2.primeiro;
        }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        Celula f1 = null;
        Pilha P1=new Pilha();

        for(int i=0;i<5;i++){
            P1.push(lei.nextInt());
        }

        f1=toFila(P1.topo);

        for(Celula i=f1.prox;i!=null;i=i.prox){
            System.out.print(i.el + " ");
        }

       // f1.invert();

        //f1.mostrar();

        lei.close();
    }
}
