import java.io.*;
import java.lang.*;

public class file02
{
    public static void main(String[] args) {
        try{
            FileWriter w=new FileWriter(".//mano01.txt");
            w.write("hello world");
            w.close();
            System.out.println("string written successful");
            FileReader r=new FileReader(".//mano01.txt");
            int x;
            while((x=r.read())!=-1)
            {
                System.out.print((char)x);
            }   
            // String s1=Character.parseChar(r.read());
            // System.out.println(s1);
        }
        catch(IOException e)
        {
            System.out.println(e.getMessage());
            System.out.println("file not writable");
        }
    }
}