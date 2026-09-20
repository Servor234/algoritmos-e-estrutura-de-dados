import java.util.*;

public class Busc{

    public static int buscar(int[] V, int size, int buscado){
        int index=-1;

        for(int i=0;i<size;i++){
            if(V[i]==buscado)
                return i;
        }

        return index;
    }

    public static int buscar2(int[] V, int size, int buscado){
        int esq=0;
        int dir=size-1;
        while(esq<=dir){
            int meio=(esq+dir)/2;
            if(V[meio]==buscado){
                return meio;
            }else if (V[meio]>buscado){
                dir=meio-1;
            }else if(V[meio]<buscado){
                esq=meio+1;
            }
        }

        return -1;
    }
    
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        int size = lei.nextInt();
        int[] arr = new int[size];

        for(int i=0;i<size;i++){
            arr[i]=lei.nextInt();
        }

        int buscado=lei.nextInt();

        System.out.println(buscar(arr,size, buscado));

        System.out.println(buscar2(arr,size, buscado));

        lei.close();
    }
}