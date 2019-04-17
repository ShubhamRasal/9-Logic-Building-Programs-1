import java.io.*;

 import java.util.*;

class MatrixC
{
            public static void main(String arg[])    {
                // int arr[][]=new int[][]{{1,1,1,1},{3,4,4,3},{2,8,8,2},{1,3,3,1},{1,3,3,1},{2,8,8,2},{3,4,4,3},{1,1,1,1}};
                // int arr[][]=new int[][]{{3,4,4,3},{2,8,8,2},{1,3,3,1},{1,3,3,1},{2,8,8,2},{3,4,4,3}};
             // int arr[][]=new int[][]{{3,4,4,3},{2,8,8,2},{2,8,8,2},{3,4,4,3}};
             int arr[][]=new int[][]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
                DisplaySpriral(arr);
            }


            public static void DisplaySpriral(int arr[][])
            {
                    int i,top,bottom,left,rigth;
                        top=0;
                        bottom=arr.length-1;
                        left=0;
                        rigth=arr[0].length-1;
                        
                    while(true)
                    {
                            if(left>rigth)
                            {
                                break;
                            }

                            for(i=left;i<=rigth;i++)
                            {
                                System.out.print(arr[top][i]+" ");
                            }
                            top++;
                            if(top>bottom)
                            {
                                break;
                            }
                            System.out.println();
                            for(i=top;i<=bottom;i++)
                            {
                                System.out.print(arr[i][rigth]+" ");
                            }
                                rigth--;
                            if(left>rigth)
                            {
                                break;
                            }
                            System.out.println();
                            for(i=rigth;i>=left;i--)
                            {
                                System.out.print(arr[bottom][i]+" ");
                            }
                            bottom--;
                              
                            if(top>bottom)
                            {
                                break;
                            }
                            System.out.println();
                            for(i=bottom;i>=top;i--)
                            {
                                System.out.print(arr[i][left]+" ");
                            }
                            left++;
                            System.out.println();
                    }// while closed

            }// function closed

}