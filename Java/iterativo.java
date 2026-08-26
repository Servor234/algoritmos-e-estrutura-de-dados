import java.util.Scanner;

public class iterativo{
    public static void main(String[] args){
        String str="";
        int ma=0;
        Scanner Arq= new Scanner(System.in);

        while(Arq.hasNext()==true){
            str=Arq.nextLine();
            //if()){
                for(int i=0;i<str.length();i++){
                    if(str.charAt(i)>='A' && str.charAt(i)<='Z'){
                        ma++;
                    }
                }
                System.out.printf("%d\n", ma);
                ma=0;
            //}else{
                break;
          //  }
        }

        Arq.close();
    }
}
