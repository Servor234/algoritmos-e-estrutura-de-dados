import java.util.*;

public class seque{
	public static void main(String[] args){
		Scanner lei = new Scanner(System.in);
		int size;

		size = lei.nextInt();		

		int[] array = new int[size];

		for(int i=0;i<size;i++){
			array[i] = lei.nextInt();
		}

		for(int i=0;i<size-1;i++){
			int j=i+1, menor=i;

			while(j<size){
				if(array[j]<array[menor]){
					menor=j;
				}
				j++;
			}

			int tmp=array[i];
			array[i]=array[menor];
			array[menor]=tmp;
		}

		for(int i=0;i<size;i++){
			System.out.printf("%d ", array[i]);
		}
		lei.close();
	}
}
