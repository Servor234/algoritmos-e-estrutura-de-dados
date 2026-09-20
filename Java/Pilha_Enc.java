import java.util.*;

public class Pilha_Enc {
    public static class Celula{
        public int el;
        public Celula prox;

        public Celula(){
            this(0);
        }

        public Celula(int x){
            el = x;
            prox = null;
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

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);

        Pilha pip = new Pilha();

        for(int i=0;i<10;i++){
            pip.push(lei.nextInt());
        }

        System.out.print(pip.somaRec(pip.topo) + " " + pip.maiorRec(pip.topo, pip.topo.el));
        System.out.print("\n");
        pip.mostraI();

        lei.close();
    }
}
