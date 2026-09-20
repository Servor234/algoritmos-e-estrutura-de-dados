import java.util.*;

public class Fila {
    public static class filaC{
        int prime, ult;
        int[] arr;

        public filaC(){
            this(6);
        }

        public filaC(int x){
            arr = new int[x+1];
            prime=ult=0;
        }

        public void inser(int x){
            if((ult+1)%arr.length!=prime){
            arr[ult]=x;
            ult=(ult+1)%arr.length;
            }
        }

        public int remov(){
            if(prime!=ult){
            int el=arr[prime];
            prime=(prime+1)%arr.length;
            return el;
            }else{
                return -1;
            }
        }

        public void mostr(){
            int i=prime;
            while(i!=ult){
                System.out.print(arr[i] + " ");
                i=(i+1)%arr.length;
            }

            System.out.print("\n");
        }

        public boolean isVazio(){
            if(prime==ult){
                return true;
            }else{
                return false;
            }
        }

        public void mostraRev(){
            for(int i=ult;i+1!=prime;i=(i-1)%arr.length){
                System.out.print(arr[i] + " ");
            }
            System.out.print("\n");
        }

        public void mostraRec(int i){
            if(i!=ult){
                System.out.print(arr[i]+ " ");
                mostraRec((i+1)%arr.length);
            }
        }

        public boolean pesquisa(int buscado){
            for(int i=prime;i!=ult;i=(i+1)%arr.length){
                if(arr[i]==buscado){
                    return true;
                }
            }

            return false;
        }

        public int retornaPos(int pos)throws Exception{
            if(pos>=arr.length || pos<0){
                throw new Exception();
            }

            return arr[pos];
        }

    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        filaC novo = new filaC(7);

        for(int i=0;i<7;i++){
            novo.inser(lei.nextInt());
        }

        novo.mostraRec(novo.prime);

        novo.mostr();

        lei.close();
    }
}
