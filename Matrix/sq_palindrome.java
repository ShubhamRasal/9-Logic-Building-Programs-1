import java.io.*;
import java.util.*;

class Matrix
{
            public static void main(String arg[])    {
                // int arr[][]=new int[][]{{1,1,1,1},{3,4,4,3},{2,8,8,2},{1,3,3,1},{1,3,3,1},{2,8,8,2},{3,4,4,3},{1,1,1,1}};
                // int arr[][]=new int[][]{{3,4,4,3},{2,8,8,2},{1,3,3,1},{1,3,3,1},{2,8,8,2},{3,4,4,3}};
              int arr[][]=new int[][]{{3,4,4,3},{2,8,8,2},{2,8,8,2},{3,4,4,3}};
             /*Scanner scr=new Scanner(System.in);
                for(int i=0;i<2;i++)
                {
                    for(int j=0;j<4;j++)
                    {
                        arr[i][j]=scr.nextInt();
                    }
                }*/
                        Matrix mobj=new Matrix();
                        System.out.println(mobj.sq_palindrome(arr));
                
                    }//main closed



                boolean sq_palindrome(int arr[][])
                {
                    int i=0,j=arr[0].length-1; // here i and j represents columns
                    int l=0,k=arr.length-1; //  k and l represents rows
                    int rows=arr.length-1;
                    int flag=1;
                    int c=0; // counter for iteration
                    for(;(i<=j)&&(flag==1);i++,j--)
                    {    
                        for(;k>=l;k--,l++)
                        { 
                            c++;
                            // System.out.println(i+" "+j+" "+k+" "+l); // for how loops works
                                if((arr[l][i]!=arr[k][i])||(arr[l][i]!=arr[l][j]) ||   
                                (arr[k][i]!=arr[k][j])||(arr[k][j]!=arr[k][i]))
                                {
                                    flag=0;
                                    break;
                                }
                            }
                        l=0;
                        k=rows;
                    }

                    System.out.println(c);  // complexity
                    if(flag==1)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }

                }//function closed

            }





