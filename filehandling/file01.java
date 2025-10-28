import java.util.lang;

class file01
{
    public static void main(String[] args) {
        try{
        Reader r=new Reader("c://users//hp/desktop//examday//allfiles");
        r.write("hello");
        }
        catch(IOException e)
        {
            System.out.println("file not found");
        }
    }
}