//
//  main.cpp
//  matrix2
//
//  Created by Mekoah Myers on 2/28/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    
    //declare variable type int
    int a[3][3],i,j,b[3][3],c[3][3];
    //Input the numbers
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter number :";
            cin>>a[i][j];
        }
    }
    
    cout<<"enter numbers for a second matrix"<<endl;
    
    //Input the numbers
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter number :";
            cin>>b[i][j];
        }
    }
    
    
    
    //display the sum
    cout<<"the sum of the matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //display the diffrence 
    cout<<"the difference of the matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            c[i][j]=a[i][j]-b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }    return 0;
}

