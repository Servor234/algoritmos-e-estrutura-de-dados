import java.util.*;

public class Rep {

    public static int ocorr(int[] arr, int size, int buscado){
        int cont=0;
        for(int i=0;i<size;i++){
            if(arr[i]==buscado){
                cont++;
            }
            if(i+1==size){
                return cont;
            }
        }

        return -1;
    }

    public static void seque(int[] arr, int size){
        for(int i=0;i<size-1;i++){
            int min =i;
            for(int j=i+1;j+1<size;j++){
                if(arr[min]>arr[j]){
                    min=j;
                }
            }
            if(min!=i){
                int aux=arr[min];
                arr[min]=arr[i];
                arr[i]=aux;
            }
        }
    }

    public static void inser(int[] arr, int size){
        for(int i=1;i<size;i++){
            int at=arr[i];

            int j=i-1;

            while(j>=0 && arr[j]>at){
                arr[j+1]=arr[j];
                j--;
            }

            arr[j+1]=at;
        }
    }

    public static void buble(int[] arr, int size){
        for(int i=0;i<size;i++){
            int bol=1;
            for(int j=0;j<size-i-1;i++){
                if(arr[j]>arr[j+1]){
                    int tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                    bol=0;
                }
            }
            if(bol==1){
                i=size;
            }
        }
    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        
        int size = lei.nextInt();

        int[] arr = new int[size];

        for(int i=0;i<size;i++){
            arr[i] = lei.nextInt();
        }

        int buscado = lei.nextInt();

        inser(arr,size);
       
       System.out.print(ocorr(arr,size,buscado));

        lei.close();
    }
}
