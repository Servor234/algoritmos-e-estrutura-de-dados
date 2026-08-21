import java.util.Scanner;

public class Is{
    Boolean vowls(String a){
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)!='a' ||a.charAt(i)!='e'||a.charAt(i)!='i'||a.charAt(i)!='o'||a.charAt(i)!='u'){
                return false;
            }
        }
        return true;
    } 
    Boolean Nvowls(String a){
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)=='a' ||a.charAt(i)=='e'||a.charAt(i)=='i'||a.charAt(i)=='o'||a.charAt(i)=='u'){
                return false;
            }
        }
        return true;
    } 

    Boolean intege(String a){
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)=='.' && (a.charAt(i)<(char)48 && a.charAt(i)>(char)57)){
                return false;
            }
        }
        return true;
    }

    Boolean rei(String a){
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)=='.' && (a.charAt(i)>=(char)48 && a.charAt(i)<=(char)57)){
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        lei.close();
    }
}
