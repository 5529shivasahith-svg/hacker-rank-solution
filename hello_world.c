/*
/*
🧠 Objective:
Learn basic concepts of C, including reading input and writing output using standard syntax.

📝 Task:
Print "Hello, World!" on one line, followed by the input string on the next line.

📥 Input Format:
A single line of text.

📤 Output Format:
Two lines:
1. "Hello, World!"
2. The input string

🔍 Sample Input:
Welcome to C programming.

✅ Sample Output:
Hello, World!
Welcome to C programming.

🔗 Problem Link:
https://www.hackerrank.com/challenges/hello-world-c/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    printf("Hello, World!\n");
    printf("%s\n",s);
    return 0;
}
