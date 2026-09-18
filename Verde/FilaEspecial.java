import java.util.*;

public class FilaEspecial{

    public static class Celula{
        public int el;
        public Celula prox;

        Celula(){
            this.el=0;
            this.prox=null;
        }

        Celula(int x){
            this.el=x;
            this.prox=null;
        }
    }

    public static class Pilha{
        public Celula topo;

        public void inserir(int x){
            if(topo==null){
                topo = new Celula(x);
            }else{
            Celula tmp = new Celula(x);
            tmp.prox=topo;
            topo=tmp;
            tmp=null;
            }
        }

        public int remover()throws Exception{
            if(topo!=null){
                int elemento = topo.el;
                Celula tmp = topo;
                topo=topo.prox;
                tmp.prox=null;
                tmp=null;
                return elemento;
            }else{
                throw new Exception("Erro de memoria\n");
            }
            }

    }

    public static class Fila1{
        public Celula primeiro;
        public Celula ultimo;

        Fila1(){
            primeiro = new Celula();
            ultimo = primeiro;
        }

        public void inserir(int x){
            Celula tmp = new Celula (x);

            ultimo.prox=tmp;
            ultimo=ultimo.prox;
            tmp=null;
        }

        public int remover()throws Exception{
            if(primeiro == ultimo){
                throw new Exception ("Erro de memoria");
            }else{
            int elemento = primeiro.prox.el;
            Celula tmp = primeiro;

            primeiro=primeiro.prox;
            tmp.prox=null;
            tmp=null;
            return elemento;
            }
        }
    }

    public static class FilaP{
        public Celula topo;
        public Celula base;

        FilaP(){
            topo=new Celula();
            base=topo;
        }

        public void ordenar(){
            for(Celula i=topo.prox;i!=null;i=i.prox){
                for(Celula j=topo.prox;j.prox!=null;j=j.prox){
                    if(j.el<j.prox.el){
                        int tmp = j.el;
                        j.el = j.prox.el;
                        j.prox.el = tmp;
                    }
                }
            }
        }

        public void inserir(int x){
            Celula tmp = new Celula(x);
            base.prox= tmp;
            base=base.prox;
            ordenar();
            tmp=null;
        }

        public int remover(){
            int elemento = topo.prox.el;
            Celula tmp = topo;
            topo=topo.prox;
            tmp.prox=null;
            tmp=null;
            return elemento;
        }

    }

    public  static void inserir(int x, Pilha p, Fila1 f, FilaP fp){
        p.inserir(x);
        f.inserir(x);
        fp.inserir(x);
    }

    public static void destroy(Pilha p, Fila1 f, FilaP fp, int x){
        for(int i = 0;i<x;i++){
            try{
            p.remover();
            }catch (Exception e){
            } try{
            f.remover();
            }catch (Exception e){
            }
            fp.remover();
        }
    }

    public static void main(String[] args){
        Scanner lei = new Scanner (System.in);

        while(lei.hasNextLine()){
                int casos = lei.nextInt();
                    int cont=0;
                    boolean pilha=true,fila=true,filaP=true;
                        Pilha p = new Pilha(); 
                        Fila1 f = new Fila1(); 
                        FilaP fp = new FilaP();

                while(casos!=0 && lei.hasNextInt()){
                    int op = lei.nextInt();

                    if(op==1){
                        if(!lei.hasNextInt()) break;

                        int num=lei.nextInt();
                        inserir(num, p,f,fp);
                        cont ++;
                    }else{
                        if(!lei.hasNextInt()) break;
                        int num = lei.nextInt();
                        try{
                        if(p.remover()!=num){
                            pilha=false;
                        }
                        }catch (Exception e){
                        }  
                         try{ 
                            if(f.remover()!=num){
                                fila=false;
                            }
                        }catch (Exception e){
                        }
                        if(fp.remover()!=num){
                            filaP=false;
                        }
                        cont--;
                    }
                    casos--;
                }

                    if(pilha==true && (fila==true || filaP==true)){
                        System.out.print("not sure\n");
                    }else if(fila==true && (pilha==true || filaP==true)){
                        System.out.print("not sure\n");
                    }else if(filaP==true && (pilha==true || fila==true)){
                        System.out.print("not sure\n");
                    }else if(pilha==true && fila==false && filaP==false){
                        System.out.print("stack\n");
                    }else if(fila==true && pilha==false && filaP==false){
                        System.out.print("queue\n");
                    }else if(filaP==true && pilha==false && fila==false){
                        System.out.print("priority queue\n");
                    }else{
                        System.out.print("impossible\n");
                    }
                    
                    destroy(p,f,fp,cont);

            }
        lei.close();
        }
    }

