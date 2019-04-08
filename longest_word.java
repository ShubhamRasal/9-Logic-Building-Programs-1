// Find longest word in the string without any considering punctuation marks. if two string of same length return first
// input fun&!! time       output- time
// input- life goes on     output- life
import java.io.*;
class Demo
{
        static String longest_Word(String str)
        {
                  String arrs[]=str.split("[^A-Za-z0-9]");
                   int max_length=0;
                  int max_index=0;
            for(int i=0;i<arrs.length;i++)
            {
                if(max_length<arrs[i].length())
                { 
                   //System.out.println(arrs[i]+"length is"+arrs[i].length());
                    max_index=i;
                    max_length=arrs[i].length();
                }
            }
                                    // System.out.print(ret);
        return arrs[max_index];
    }

    public  static void  main(String args[])
     {
            String str_arr[]={"123456789 98765432","fun&!! time","java is simple"};
            for(int i=0;i<str_arr.length;i++)
            {
                System.out.println("The longest word in  "+str_arr[i]+"  is  "+longest_Word(str_arr[i]));
            }
        }
}