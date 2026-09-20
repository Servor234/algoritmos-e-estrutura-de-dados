import java.util.*;

public class Lista {

    public static class lista{
        public int[] vet;
        public int n;
        
        public lista(){
            this(6);
        }

        public lista(int x){
            vet = new int[x];
            n=0;
        }

        public void inseriI(int x){
            for(int i=n;i>0;i--){
                vet[i]=vet[i-1];
            }
                vet[0]=x;
                n++;
        }

        public void inseriF(int x){
            vet[n]=x;
            n++;
        }

        public void inseri(int x, int pos){
            if(pos==0){
                this.inseriI(x);
            }else if(pos==n){
                this.inseriF(x);
            }else{
                for(int i=n;i>pos;i--){
                    vet[i]=vet[i-1];
                }
                n++;
                vet[pos]=x;
            }
        }

        public int removI(){
            int i=0;
            int el = vet[0];
            n--;

            while(i!=n-1){
                vet[i]=vet[i+1];
                i++;
            }
            return el;
        }

        public int removF(){
            int el = vet[n];
            n--;
            return el;
        }

        public int remov(int pos){
            if(pos==0){
                return this.removI();
            }else if(pos==n){
                return this.removF();
            }else{
                int i=pos;
                int el = vet[pos];
                n--;
                while(i!=n){
                    vet[i]=vet[i+1];
                    i++;
                }
                return el;
            }
        }

        public void mostr(){
            for(int i=0;i<n;i++){
                System.out.print(vet[i] + " ");
            }
            System.out.print("\n");
        }

    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);

        lista lista = new lista(6);
        int x1, x2, x3;
        lista.inseriI(1);
        lista.mostr();
        lista.inseriF(7);
        lista.mostr();
        lista.inseriF(9);
        lista.mostr();
        lista.inseriI(3);
        lista.mostr();
        lista.inseri(8, 3);
        lista.mostr();
        lista.inseri(4, 2);

        lista.mostr();

        x1 = lista.removI();
        x2 = lista.removF();
        x3= lista.remov(2);

        System.out.println(x1+", "+ x2 +", "+ x3);
        lista.mostr();

        lei.close();
    }
}
