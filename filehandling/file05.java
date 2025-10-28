import java.io.*;

public class file05
{
    public static void main(String[] args) {
        try{
            FileOutputStream f=new FileOutputStream(".//mano05.txt");
            // f.write("hello mano");
            String s="ra";
            byte b[]=s.getBytes();
            f.write(b);
            f.close();
            System.out.println("write successful");
            try{
/*                 FileInputStream f2=new FileInputStream(".//mano05.txt");
                int x=f2.read();
                System.out.println(x);
                System.out.println((char)x);   
                int y=f2.read();
                System.out.println(y);
                System.out.println((char)y);
                int z=f2.read();
                System.out.println(z);
                System.out.println((char)z); */

                FileInputStream f2=new FileInputStream(".//mano05.txt");
                int x;
                while((x=f2.read())!=-1)
                {
                    System.out.print((char)x);
                }
            }
            catch(IOException e)
            {
                System.out.println(e.getMessage());
            }
        }
        catch(IOException e)
        {
            System.out.println(e.getMessage());
        }
    }
}