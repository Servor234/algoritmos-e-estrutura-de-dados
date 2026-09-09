import java.util.*;

public class teste{
	public static class joia{
		private int a;
		private int b;

		public joia(int a1, int a2){
			this.a=a1;
			this.b=a2;
		}

		public int geta(){
			return a;
		}

		public int getb(){
			return b;
		}

		public String nome(){
			String g= geta() + "/" + getb();
			return g;
		}
	}

	public static void main(String[] args){
		Scanner lei = new Scanner(System.in);

		joia a= new joia(1,3);

		System.out.printf("%s\n", a.nome());
	}
}
