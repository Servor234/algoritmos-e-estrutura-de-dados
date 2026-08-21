import java.util.Scanner;

public class Is{
    public static Boolean vowls(String a){
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)!='a' ||a.charAt(i)!='e'||a.charAt(i)!='i'||a.charAt(i)!='o'||a.charAt(i)!='u'){
                return false;
            }
        }
        return true;
    } 
    public static Boolean Nvowls(String a){
        for(int i=0;i<a.length();i++){
            if((a.charAt(i)=='a' ||a.charAt(i)=='e'||a.charAt(i)=='i'||a.charAt(i)=='o'||a.charAt(i)=='u') || (a.charAt(i)<(char)65)){
                return false;
            }
        }
        return true;
    } 

    public static Boolean intege(String a){
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)=='.' || (a.charAt(i)<(char)48 && a.charAt(i)>(char)57)){
                return false;
            }
        }
        return true;
    }

    public static Boolean rei(String a){
        for(int i=0;i<a.length();i++){
            if((a.charAt(i)<(char)48 && a.charAt(i)>(char)57) || (a.charAt(i) != (char)46 || a.charAt(i)!=(char)44)){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        String carlos;

        carlos = lei.nextLine();

        if(vowls(carlos)==true){
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(Nvowls(carlos)==true){
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(intege(carlos)==true){
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        
        if(rei(carlos)==true){
            System.out.printf("SIM ");
        }else{
            System.out.printf("NAO ");
        }

        System.out.printf("\n");

        System.out.println("Carlinhos maia");

        lei.close();
    }
}
