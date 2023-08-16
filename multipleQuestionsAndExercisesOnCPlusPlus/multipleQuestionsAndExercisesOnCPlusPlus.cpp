//C++ Exercises: LAB1, LAB2, RECURSIVE FUNCTIONS, ARRAYS, MATRICES, DYNAMIC MEMORY ALLOCATION

//COMPUTER PROGRAMMING LAB 1
//TASK 1 TRANSFORM GRADES:

//#include <iostream>
//#include <string>
//using namespace std;

/*
int main()
{

    unsigned short int grade;
    string letterGrade;
    do{

        cout << "Please enter a grade between 0 and 100: " << endl;
        cin >> grade;

    } while(grade > 100);

    if (grade >= 92)
        letterGrade = "AA";

    else if (grade >= 84)
        letterGrade = "BA";

    else if (grade >= 76)
        letterGrade = "BB";

    else if (grade >= 68)
        letterGrade = "CB";

    else if (grade >= 60)
        letterGrade = "CC";

    else if (grade >= 50)
        letterGrade = "DC";

    else if (grade >= 40)
        letterGrade = "DD";

    else
        letterGrade = "FF";

    cout << "Letter Grade: " << letterGrade << endl;
}


//TASK 2: TRANSFORM N GRADES:

int main()
{
    unsigned short int calculateGrade;
    unsigned short int grade;
    string letterGrade;

    do{

        cout << "Please enter the counter number between 0 and 10: " << endl;
        cin >> calculateGrade;

    } while(calculateGrade > 10);

    for (int i = 0; i < calculateGrade; i++ )
    {
        do{

            cout << "Please enter " << i+1 << ". grade: " << endl;
            cin >> grade;

        } while(grade > 100);

        if (grade >= 92)
            letterGrade = "AA";

        else if (grade >= 84)
            letterGrade = "BA";

        else if (grade >= 76)
            letterGrade = "BB";

        else if (grade >= 68)
            letterGrade = "CB";

        else if (grade >= 60)
            letterGrade = "CC";

        else if (grade >= 50)
            letterGrade = "DC";

        else if (grade >= 40)
            letterGrade = "DD";

        else
            letterGrade = "FF";

        cout << i+1 << ".grade: " << letterGrade << endl;
    }
}*/


// TASK 3: MULTICHOCE VIDEO GAME:

/*int main()
{
    unsigned short int action;

    do{
        cout << "You have three rooms in front of you. What  do you do?" << endl;
        cout << "1. Enter room to  the left" << endl;
        cout << "2. Enter room  in the middle" << endl;
        cout << "3. Enter room to the right" << endl;
        cout << "4. Remain in the current room" << endl;
        cin >> action;

    } while(action > 4);

    if (action == 1)
        cout << "YOU ARE THE FUCK" << endl;

    else if (action == 2)
        cout << "YOU ARE INSANE" << endl;

    else if (action == 3)
        cout << "YOU ARE GAY" << endl;

    else if (action == 4)
        cout << "SHOT THE FUCK UP" << endl;
}*/

/*int main()
{
    unsigned short int action;

    do{
        cout << "You have three rooms in front of you. What  do you do?" << endl;
        cout << "1. Enter room to  the left" << endl;
        cout << "2. Enter room  in the middle" << endl;
        cout << "3. Enter room to the right" << endl;
        cout << "4. Remain in the current room" << endl;
        cout << "Select ones: " << endl;
        cin >> action;

    } while(action > 4);

    switch (action)
    {
        case 1:
            cout << "JEFJE" << endl;
            break
        case 2:

        case 3:

        case 4:

    }
}*/

//TASK4: POWERS OF TWO

/*int main()
{
    unsigned short int calculator;

    do{

        cout << "What powers of two: " << endl;
        cin >> calculator;

    }while(calculator > 30);

    int result = 1;
    cout << result;

    for (int i = 1; i < calculator+1 ; i++)
    {
        result = result * 2;
        cout << ", ";
        cout << result;
    }
}*/

//LAB 2:
//TASK1: Powers of two without:
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned short int powers;

    do{
        cout << "Please enter the power of two [0,30]: " << endl;
        cin >> powers;
    }while(powers > 30);

    int result = 1;
    cout << result;

    for (int i = 1; i <= powers ; i++)
    {
        cout << ", ";
        result = result << 1;
        cout << result;
    }
}*/

/*#include <iostream>
#include <string>
#include <climits>

using namespace std;
int main()
{
    int firstNumber;
    int secondNumber;

    cout << "Please enter first number: " << endl;
    cin >> firstNumber;

    cout << "Please enter second number: " << endl;
    cin >> secondNumber;

    if (firstNumber > INT_MAX - secondNumber && secondNumber > 0)
    {
        cout << "OVERFLOW" <<endl;
    }

    else if (firstNumber < INT_MIN - secondNumber && secondNumber < 0)
    {
        cout << "UNDERFLOW" << endl;
    }

    else
    {
        cout << "There is no UNDERFLOW and OVERFLOW. Total result: " << firstNumber + secondNumber << endl;
    }
}*/
/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned short int firstNumber;
    int mask = 1;

    cout << "Please enter the number: " << endl;
    cin >> firstNumber;

    if (firstNumber & mask == 1)
    {
        cout << firstNumber << " : ODD" << endl; //tek
    }

    else
    {
        cout << firstNumber << " : EVEN" << endl;
    }
}*/

/*#include <iostream>
using namespace std;

int main()
{
    unsigned int firstNumber, secondNumber;

    unsigned int counter = 0;

    cout << "Enter the first number: " << endl;
    cin >> firstNumber;

    cout << "Enter the second number: " << endl;
    cin >> secondNumber;

    unsigned int result = firstNumber ^ secondNumber;

    while (result != 0)
    {
        counter += result&1;
        result >>= 1;
    }

    cout << counter << endl;
}*/

/*#include <iostream>
using namespace std;

int summation(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int main()
{
    int firstNumber, secondNumber;
    int result;

    cout << "Please enter the firstNumber: " << endl;
    cin >> firstNumber;

    cout << "Please enter the second number: " << endl;
    cin >> secondNumber;

    result = summation(firstNumber, secondNumber);
    //int x, y = 5, z = 9;
    //x = summation(y,z);
    //x = summation(y,z);
    cout << "Result: " << result << endl;
}*/

/*#include <iostream>
using namespace std;

void print()
{
    cout << "Print the numbers: " << endl;
}
int main()
{
    print();
    return 0;
}*/

/*#include <iostream>
using namespace std;

int swap(int firstNumber,int secondNumber)
{
    int temp;
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber  =temp;
    return firstNumber, secondNumber;
}

int main()
{
    int firstValue, secondValue, total;
    total = swap(15, 25);
    cout << total << endl;
}*/
//RECURSIVITY FUNCTIONS:
/*#include <iostream>
using namespace std;

unsigned int fact(unsigned int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int product;
    unsigned int userInput;

    do{
        cout << "Please enter the number which is taken its factorial: " << endl;
        cin >> userInput;
    } while(userInput > 10);

    product = fact(userInput);
    cout << product << endl;
}*/
/*#include <iostream>
using namespace std;


void divide(int dividend, int divisor,int &result, int &remainder)
{

 // if divisor is zero, we cannot compute the division!
    if (divisor == 0)
    {
        result = 0; // result gets zero
        remainder = 0; // remainder gets zero
        return; // return immediately
    }
    int i = 0; // counter

 // loop until dividend is smaller than divisor
    while (dividend >= divisor)
    {
        dividend -= divisor; // subtract divisor from dividend
        i++; // increment the counter
    }
    result = i; // the result will be the number of subtractions performed
    remainder = dividend; // the remainder is what�s left in dividend

}

int main(void)
{
    int total;
    total = divide(10,2);
    cout << total  << endl;
}*/

/*#include <iostream>
using namespace std;
int fibonacci(unsigned short int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n >=1 && n <= 2)
    {
        return 1;
    }

    return fibonacci(n-2) + fibonacci(n-1);
}
int main()
{
    unsigned short int fiboNumber;
    int total;
    do{
        cout << "Please enter the fibo number: " << endl;
        cin >> fiboNumber;

    } while(fiboNumber > 46);

    total = fibonacci (fiboNumber);
    cout << fiboNumber << " fibonaccisi: " <<  total << endl;
}*/
/*#include <iostream>
using namespace std;

void divide(int dividend, int divisor)
{
    int result;
    int remainder;
 // if divisor is zero, we cannot compute the division!
    if (divisor == 0)
    {
        result = 0; // result gets zero
        remainder = 0; // remainder gets zero
        return; // return immediately
    }
    int i = 0; // counter

 // loop until dividend is smaller than divisor
    while (dividend >= divisor)
    {
        dividend -= divisor; // subtract divisor from dividend
        i++; // increment the counter
    }
    result = i; // the result will be the number of subtractions performed
    remainder = dividend; // the remainder is what�s left in dividend
}

int main()
{
    cout << divide (15,3) << endl;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int array[size] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        array[i] *= 2;
        cout << i+1 << ". element of array will be multiplied with 2: " <<array[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        if (array[i] % 2 == 1)
        {
            cout << i + 1 << ". element is ODD" << endl;
        }
    }
}*/
/*
#include <iostream>
#include <climits>
UINT
using namespace std;

double avgArray(int arr[], const int n){

  for (int i=0; i<n; i++){
    double sum += arr[i];
  }
  return sum/n;
}

int main(){
  int a[]={3,6,8,4};
  cout << avgArray(a, 4);
  return 0;
}*/
/*
#include <iostream>
using namespace std;

void printArray(int arr[],const int n)
{
    if (n == 0){
        cout << 0 << endl;

    }
    else {
        for (int i=0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int firstArray[5] = {1,2,3,4,5};
    int secondArray[0] = {};
    int thirdArray[3] = {1,2,3};
    printArray(firstArray,5);
    printArray(secondArray,0);
    printArray(thirdArray, 3);
}*/
/*
#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int arr[n] = {1,2,3,4,5};

    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    //cout << endl;
    cout << "M�kemmelsin" << endl;

    return 0;

}*/

/*#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int arr[n] = {3,5,2,7,22};

    double totalResult;
    double result = 0;

    for (int i = 0; i < n; i++)
    {
        result += arr[i];
    }

    totalResult = result / n;
    cout << "Average of the 5 numbers are: " << totalResult << endl;
}*/

/*
#include <iostream>
using namespace std;

double avgArray(int arr[],const int n)
{

    if( n == 0)
        return 0.0;
    double result = 0.0;

    for (int i=0; i<n; i++)
    {
        result += arr[i];
    }
    result /= n;
    return result;

}

int main()
{
    int firstArray[6] = {1,2,3,4,5,6};
    //int secondArray[0] = {};

    cout << "Average: " << avgArray(firstArray,6) << endl;
}*/

/*
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    for (int i =0; i< str.length(); i++)
    {
        if ((str[i] >= 'A') && (str[i]<= 'Z'))
            str[i] += (32);
    }

    int i=0;
    int j=str.length() -1;

    while(i<j)
    {
        if (str[i] != str [j])
            return false;

        i++;
        j--;
    }
    return true;
}


int main()
{
    string kamil = "Ada";
    cout << isPalindrome(kamil)<< endl;
}*/


/*
#include <iostream>
#include <string>

using namespace std;

string keyEncript(string str, int key)
{
    for(int i=0; i<str.length(); i++)
    {
        str[i] += key%128;
    }
    return str;
}

int main()
{
    string bora = "hello";
    int keys = 164;

    cout << keyEncript(bora,keys) << endl;
}*/
/*
#include <iostream>
#include <climits>
#include <string>

using namespace std;

int minmaxArray(int arr[],const int n)
{
    int maximumValue = 0;
    int minimumValue = 0;

    if (n == 0)
        return 0;

    int i = 0;
    int j = n -1;

    while( i < j)
    {
        if (arr[i] > arr[j]){

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            minimumValue = arr[0];
            maximumValue = arr[n-1];
        }

        i++;
        j--;
        //minimumValue = arr[0];
        //maximumValue = arr[n-1];
    }

    minimumValue = arr[0];
    maximumValue = arr[n-1];

    return minimumValue;
}

int main()
{
    const int n = 5;
    int firstArray[n] = {2,5,1,7,22};
    cout << minmaxArray(firstArray, n) << endl;
}

*/
/*
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n = 5;

    int result = 1;
    cout << result;

    for (int i=0; i<n; i++)
    {
        cout << ", ";
        result *= 2;
        cout << result;


    }
}*/
/*
#include <iostream>
#include <climits>
using namespace std;

void minmaxArray(int arr[],const int n, int &minimumValue, int &maximumValue)
{
    minimumValue = INT_MAX;
    maximumValue = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] < minimumValue))
            minimumValue = arr[i];

        else if (arr[i] > maximumValue)
            maximumValue = arr[i];
    }
    /*cout << "Maximum number: " << maximumValue << endl;
    cout << "Minimum number: " << minimumValue << endl;*/

    /*}

    int main()
    {
        const int secondParameter = 5;
        int firstArray[secondParameter] = {7,1,96,2,8};

        int minimumValue = 0;
        int maximumValue = 0;



        minmaxArray(firstArray, secondParameter, minimumValue, maximumValue);

        cout << minimumValue;
        cout << maximumValue;
    }*/
    /*
    #include <iostream>
    #include <string>
    using namespace std;

    bool isPalindrome(string str)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += ('a' - 'A');
        }

        int i = 0;
        int j = str.length() - 1;

        while (i<j)
        {
            if (str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    int main()
    {
        string firstString = "jdkjdk";
        cout << isPalindrome(firstString) << endl;

    }*/
    /*
    #include <iostream>
    #include <string>
    using namespace std;

    string keyEncription(string str, int key)
    {
        for (int i=0; i < str.length() ; i++)
        {
            str[i] += key%128;
        }
        return str;
    }

    int main()
    {
        string firstString = "A";
        int keyvalue  = 148;

        cout << keyEncription(firstString, keyvalue) << endl;
    }*/
    /*
    #include <iostream>
    #include <string>
    using namespace std;


    void printArray(int arr2[],const int nss)
    {
        if (nss == 0)
        {
            cout << "arr = {}" << endl;
        }
        else{
            cout << "arr = {" << arr2[0];
            for (int i =1; i< nss; i++)
                cout << ", " << arr2[i];
            cout << "}" << endl;
        }
    }

    void swapping(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    void reverseArray(int arr[],const int n)
    {
        int i = 0;
        int j = n -1;

        while (i < j)
        {
            swapping(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    int main()
    {
        const int ns = 0;
        int firstArray[ns] = {};
        reverseArray(firstArray,ns);
        printArray(firstArray, ns);
    }*/
    /*
    #include <iostream>
    #include <string>

    using namespace std;

    void swapping(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    void littleToMiddle(int arr[], const int n)
    {

        for (int i=0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++ )
            {
                if ( arr[i] > arr [j])
                    swapping(arr[i],arr[j]);
            }
        }
    }

    void printArray(int arr2[], const int n2,const int k)
    {
        int empty = 0;
        if (n2 == 0)
            cout << empty;
        else
            cout << arr2[k-1] << endl;
    }

    int main()
    {
        const int n3 = 0;
        int firstArray[n3] = {};
        const int k2 = 0;

        littleToMiddle(firstArray,n3);
        printArray(firstArray, n3, k2);
    }*/
    /*
    #include <iostream>
    #include <string>

    void concetenate(char *a, char *b)
    {
        char *c1 = &a[0];
        char *c2 = &b[0];

        while (c1)
        {
            c1++;
        }

        while (c2)
        {
            c2++;
        }

        //return (*c1 + *c2);
    }

    int main()
    {

        string str1 = "Hello";
        string str2 = "World";

        char *first = str1;
        char *second = str2;


        char *a;
        char *b;

        concetenate(*a,*b);

        cout << c1 + c2 << endl;

    }*/


//Dynamic Memory Allocation
/*
#include <iostream>
#include <string>

using namespace std;

int** createMatrix(int rows, int cols)
{
    int** mat = new (nothrow) int* [rows];
    if (mat != nullptr) {
        for (int i = 0; i < rows; i++) {
            mat[i] = new (nothrow) int[cols];
            if (mat[i] == nullptr)
                return nullptr;
        }
    }
    return mat;
}

void populateMatrix(int** mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = 1; // or do other things�
}

void printMatrix(int** mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cout << mat[i][j] << " ";
}

void deleteMatrix(int** mat, int rows)
{
    for (int i = 0; i < rows; i++)
        delete[] mat[i];
    delete[] mat;
    mat = nullptr;
}*/