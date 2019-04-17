// accept string from user and display all combinations of that string
// eq-> input=ABC output-> ABC ,ACB,BAC,BCA,CAB,CAB


// we can solve this question either by using iteration or recursion
// for smiplicity we use recursion with iteration

import java.io.*;

class Demo
{

    public static void permute(String str,int left,int rigth)
    {
        if(left==rigth)
        {
            System.out.println(str);
        }
        else
        {
            for(int i=left;i<=rigth;i++)
            {
                str=swap(str,left,i);
                permute(str,left+1,rigth);
                str=swap(str,left,i);
            }
        }// else closed
        
    }// permute closed

        public static String swap(String str,int i,int j)
        {
            char temp;
            char[] arr=str.toCharArray();

            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            return String.valueOf(arr);

        }// swap closed

        public static void main(String arg[])
        {
            String str="ABCD";
            int n=str.length();
            permute(str,0,n-1);
        }
} // class closed
// above prmute function perfrom permutation and swap function perform swapping