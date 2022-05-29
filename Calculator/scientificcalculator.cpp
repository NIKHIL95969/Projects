#include<bits/stdc++.h>
using namespace std;

void powerfunc(int x, int y){
    int power=1 ;
    for (int n = 0; n < y; ++n)
    {
        power=power*x;
    }
    cout << "Power of above no. is : "<< power <<endl;
}
void divfunc(){
    int n;
    float div;
    cout << "Enter no. of terms you want to divide : " ; cin >> n;
    cout << "Enter the value seperatly by space for division "<< endl;
    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        if (i==0)
        {
            div=n;
        }
        else{
            div = div/n;
        }
        
    }
    cout << "Division of above no. is : " << div << endl;
     
}
void addfunc(){
    int n, add = 0;
    cout << "Enter no. of terms you want to addition : "; cin >> n;
    cout << "Enter the value seperatly by space for addition "<<endl;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        add= add+number;

    }
    cout << "addition of above no. is : "<< add <<endl;
}

void subfunc(){
    int n, sub = 0;
    cout << "Enter no. of terms you want to subtract : "; cin >> n;
    cout << "Enter the value seperatly by space for subtraction "<<endl;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        if(i==0)
            sub=number;
        else
            sub= sub -number;

    }
    cout << "Subtraction of above no. is : "<< sub <<endl;

}
void multifunc(){
    int n, multi= 1;
    cout << "Enter no. of terms you want to multiplay : "; cin >> n;
    cout << "Enter the value seperatly by space for multiplication "<<endl;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        multi= multi*number;

    }
    cout << "Mutiplicatin of above no. is : "<< multi <<endl;
}
void matrixfunc(){

     int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second." << endl;

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            result[i][j]=0;
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                result[i][j] += a[i][k] * b[k][j];
            }

    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << result[i][j];
        if(j == c2-1)
            cout << endl;
    }
}


int main(){
    cout << "_________________"<< "Calculator" <<"_________________ "<< endl;
    cout << " ________________"<< "__________" <<"__________________ "<< endl;
    cout <<"|   "<< "                                         "    <<"|"<<  endl;
    cout <<"|   "<< "1. Multiplication *                      "    <<"|"<<  endl;
    cout <<"|   "<< "2. Subtraction -                         "    <<"|"<<  endl;
    cout <<"|   "<< "3. Addition +                            "    <<"|"<<  endl;
    cout <<"|   "<< "4. Division /                            "    <<"|"<<  endl;
    cout <<"|   "<< "5. Matrix                                "    <<"|"<<  endl;
    cout <<"|   "<< "6. Power x^y                             "    <<"|"<<  endl;
    cout <<"|   "<< "                                         "    <<"|"<< endl;
    cout << "|________________"<< "__________" <<"__________________| "<< endl;
    

    int task;
    cout << endl;
    cout << "Enter the number of the task you want to perform : "; cin >> task;
    // this above line take the input from the user that what task they want to perform
    cout << endl;

    switch (task)
    {
        case 1:{
            multifunc();
        break ;
        }

        case 2: {
            subfunc();
            break ;
        }
        case 3:{
            addfunc();
            break;
        }
        case 4:{
            divfunc();
            break;
        }
        case 5:{
            matrixfunc();
            break;
        }
        case 6:{
            int x, y;
            cout << "Enter the value of x and y : "; cin >> x >> y;
            powerfunc(x,y);
            break;
        }

    }
    return 0;

}