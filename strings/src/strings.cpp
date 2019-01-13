#include "strings.h"

void swap(char *a,char *b) 
{ 
    if( *a == *b ) 
        return; 
    *a^=*b; 
    *b^=*a; 
    *a^=*b; 
} 

void rev(string& s,int l,int r) 
{ 
    while(l<r) 
        swap(&s[l++],&s[r--]); 
} 

int bsearch (string& s,int l,int r,int key) 
{ 
    int index = -1; 
    while(l<=r) 
    { 
        int mid = l+(r-l)/2; 
        if(s[mid]<=key) 
            r=mid-1; 
        else
        { 
            l=mid+1; 
            if(index = -1 || s[index]<=s[mid]) 
                index = mid; 
        } 
    } 
return index; 
} 

/*

Algorithm:
1) Declare a character stack S.
2) Now traverse the expression string exp.
    a) If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
    b) If the current character is a closing bracket (‘)’ or ‘}’ or ‘]’) then pop from stack 
      and if the popped character is the matching starting bracket then fine else parenthesis 
      are not balanced.
3) After complete traversal, if there is some starting bracket left in stack then “not balanced”

*/

// function to check if paranthesis are balanced
bool areParanthesisBalanced(string expr)
{
    stack<char> s;
    char x;
 
    // Traversing the Expression
    for (int i=0; i<expr.length(); i++)
    {
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }
 
        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
           return false;
 
        switch (expr[i])
        {
        case ')':
 
            // Store the top element in a
            x = s.top();
            s.pop();
            if (x=='{' || x=='[')
                return false;
            break;
 
        case '}':
 
            // Store the top element in b
            x = s.top();
            s.pop();
            if (x=='(' || x=='[')
                return false;
            break;
 
        case ']':
 
            // Store the top element in c
            x = s.top();
            s.pop();
            if (x =='(' || x == '{')
                return false;
            break;
        }
    }
 
    // Check Empty Stack
    return (s.empty());
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}

// Given a number as a char array number[], this function finds the 
// next greater number.  It modifies the same array to store the result 
void findNext(char number[], int n) 
{ 
    int i, j; 
  
    // I) Start from the right most digit and find the first digit that is 
    // smaller than the digit next to it. 
    for (i = n-1; i > 0; i--) 
        if (number[i] > number[i-1]) 
           break; 
  
    // If no such digit is found, then all digits are in descending order 
    // means there cannot be a greater number with same set of digits 
    if (i==0) 
    { 
        cout << "Next number is not possible"; 
        return; 
    } 
  
    // II) Find the smallest digit on right side of (i-1)'th digit that is 
    // greater than number[i-1] 
    int x = number[i-1], smallest = i; 
    for (j = i+1; j < n; j++) 
        if (number[j] > x && number[j] < number[smallest]) 
            smallest = j; 
  
    // III) Swap the above found smallest digit with number[i-1] 
    swap(&number[smallest], &number[i-1]); 
  
    // IV) Sort the digits after (i-1) in ascending order 
    sort(number + i, number + n); 
  
    cout << "Next number with same set of digits is " << number; 
  
    return; 
} 



// Function to reverse a string 
void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 