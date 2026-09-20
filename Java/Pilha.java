import java.util.*;

public class Pilha {
    public static class pilha{
        int[] arr;
        int n;
        
        public pilha(){
            this(6);
        }

        public pilha(int x){
            arr = new int[x];
            n=0;
        }

        public void inser(int x){
            arr[n]=x;
            n++;
        }

        public int remov(){
            int el = arr[n];
            n--;
            return el;
        }

        public void mostrar(){
            for(int i=0;i<n;i++){
                System.out.print(arr[i] + " ");
            }
            System.out.print("\n");
        }

    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);

        lei.close();
    }
    
}
