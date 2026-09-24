import java.util.*;

public class Lista_enc {
    public static class Celula{
        public int elemento;
        public Celula prox;

        public Celula(){
            this(0);
        }

        public Celula(int x){
            elemento=x;
            prox=null;
        }
    }

    public static class Lista{
        public Celula primeiro;
        public Celula ultimo;

        public Lista(){
            primeiro = new Celula();
            ultimo=primeiro;
        }

        public void inserir(int x, int pos){
            if(pos==0){
                inserirI(x);
            }else{
                int j=pos;
                Celula tmp = new Celula(x);
                for(Celula i=primeiro;i!=null && j!=0; i=i.prox,j--){
                    if(j-1==0){
                        i=i.prox;
                        tmp.prox=i.prox;
                        i.prox=tmp;
                    }
                }
                tmp=null;
            }
        }

        public void inserirF(int x){
            Celula tmp = new Celula(x);
            ultimo.prox=tmp;
            ultimo=ultimo.prox;
            tmp=null;
        }
        public void inserirI(int x){
            Celula tmp = new Celula(x);
            tmp.prox=primeiro.prox;
            primeiro.prox=tmp;
            if(primeiro==ultimo){
                ultimo=primeiro.prox;
            }
            tmp=null;
        }

        public int removerI()throws Exception{
            if(primeiro==ultimo){
                throw new Exception("");
            }else{
                int elemento=primeiro.prox.elemento;
                Celula tmp = primeiro;
                primeiro=primeiro.prox;
                tmp.prox=null;
                tmp=null;
                return elemento;
            }
        }

        public int removerF()throws Exception{
            if(primeiro==ultimo){
                throw new Exception();
            }else{
                Celula j=primeiro.prox;
                while(j.prox!=ultimo){
                    j=j.prox;
                }
                int elemento = ultimo.elemento;
                ultimo = j;
                ultimo.prox=null;
                j=null;
                return elemento;
            }
        }

        public int remover(int pos)throws Exception{
            if(primeiro==ultimo){
                throw new Exception();
            }else{
                int j=pos;
                int elemento=0;
                for(Celula i=primeiro;i!=null && j!=0;i=i.prox, j--){
                    if(j-1==0){
                        elemento = i.prox.prox.elemento;
                        Celula tmp = i.prox;
                        i.prox.prox = i.prox.prox.prox;
                        tmp.prox=null;
                        tmp=null;
                    }
                }
                return elemento;
            }
        }

        public void invert(){
            for(Celula i=primeiro.prox, k=null;i.prox!=k;i=i.prox){
                Celula j=i;
                for(;j.prox!=k;j=j.prox);
                k=j;
                int tmp = i.elemento;
                i.elemento=j.elemento;
                j.elemento = tmp;
            }
        }

        public void mostrar(){
            for(Celula i=primeiro.prox;i!=null;i=i.prox){
                System.out.print(i.elemento + " ");
            }
            System.out.println();
        }
    }
    

    public static void main(String[] args){
        Scanner lei = new Scanner (System.in);
        Lista l1 = new Lista();

        for(int i=0;i<5;i++){
            l1.inserirF(lei.nextInt());
        }

        l1.invert();

        l1.mostrar();

        lei.close();
    }

}
