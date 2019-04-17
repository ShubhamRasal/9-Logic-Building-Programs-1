import java.io.*;



class Stringx
{
 
            public static void main(String arg[]){

            String str1="this is java what is java";
            String str2="is";

            int iret=0;
            int count=0;

            for(int i=0;i<str1.length();i++)
            {

                iret=str1.indexOf(str2,i);
                if(iret!=-1)
                {
                    i=iret;
                    count++;
                
                }else{
                    break;
                }


            }
            System.out.println(count);

            }

}
