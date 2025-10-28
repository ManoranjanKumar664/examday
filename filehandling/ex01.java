import java.io.*;

public class ex01
{
    public static void main(String[] args) {
        try{
            int s=4/0;
            throw new IOException("WRONG");
        }
        catch(IOException e)
        {
            System.out.println(e.getMessage());
        }
    }
}