import java.util.*;

public class inser{
	public static void main(String[] args){
		Scanner lei = new Scanner(System.in);

		int size = lei.nextInt();
		int[] array = new int[size];

		for(int i=0;i<size;i++){
			array[i]=lei.nextInt();
		}
		
		for(int i=1;i<size;i++){
			int menor=i, tmp=array[menor];
			
			while(menor!=0 && array[menor-1]>array[menor]){
				array[menor]=array[menor-1];
				menor--;
			}

			array[menor]=tmp;
		}

		for(int i=0;i<size;i++)
			System.out.printf("%d ", array[i]);
	}
}
