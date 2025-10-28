import java.lang.*;
import java.io.*;

public class file04
{
    public static void main(String[] args) {
        try{
            
        BufferedWriter bf=new BufferedWriter(new FileWriter(".//mano02.txt"));
        // bf.write("hello world");
        String s="ranjan";
        char ch[]=s.toCharArray();
        bf.write(ch);
        bf.close();
        System.out.println("written successful");
        try{
        BufferedReader bf2=new BufferedReader(new FileReader(".//mano05.txt"));
        int x;
        while((x=bf2.read())!=-1)
        {
            // System.out.println(char(x));
            System.out.print((char)x);

        }
        }
        catch(IOException e)
        {
            System.out.println("file not readable");
        }
        }
        catch(IOException e)
        {
            // System.out.println(e.getMessage());
        }
    }
}