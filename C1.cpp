#include <iostream>
#include <string.h>

using namespace std;

void reverse (char a[])
{
    char* ptr=a;
    int n=strlen(a);
    char b[n];
    for(int i=0;i<n;i++)
        b[i]=a[n-i-1];
    strncpy ( ptr, b, n );
    delete b;
}

void delete_char(char a[], char c){
    for(int i=0;i<strlen(a);i++){
        if(a[i]==c)
        {
            for(int j=i;j<strlen(a);j++)
                a[j]=a[j+1];
            i--;
        }
    }
}

void pad_right(char a[], int n){
    if(strlen(a)==n)
        return;
    else{
        for(int i=strlen(a);i<n;i++)
            a[i]=' ';
        a[n]='\0';
    }
}

void pad_left(char a[], int n){
    if(strlen(a)>=n)
        return;
    else
    {
    	int m=strlen(a);
    	for(int i=0;i<n-m;i++)
        {
    		for(int j=i+m;j>=i;j--)
    			a[j]=a[j-1];
			a[0]=' ';
		}
		a[n]='\0';
    }
}

void truncate(char a[], int n)
{
    if(strlen(a)<=n)
        return;
    else
        a[n]='\0';
}

bool is_palindrome(char a[])
{
    int m=strlen(a);
    int count=0;
    for(int i=0;i<m/2;i++){
        if(a[i]!=a[m-i-1])
        {
            return false;
        }
        else
        {
            count ++;
        }
    }
    cout << m << ' ' << count << endl;
    if(count==m)
        return true;
}

void trim_left(char a[])
{
    for(int i=0;i<strlen(a);i++)
    {
        if(*(a+i)!=' ')
            break;
        else
        {
            for(int j=i;j<strlen(a);j++)
                *(a+j)=*(a+j+1);
            i--;
        }
    }
}

void trim_right(char a[])
{
    for(int i=strlen(a)-1;i>=0;i--)
    {
        if(*(a+i)!=' ')
        {
            *(a+i+1)='\0';
            break;
        }
    }
}

int main()
{
    char a[]="oollo";
    char c='l';
    reverse(a);
    cout << a << endl;
    delete_char(a,c);
    cout << a << endl;
    pad_right(a,5);
    cout << a << '*' << endl;
    pad_left(a,10);
    cout << '*' << a << '*' << endl;
    truncate(a,8);
    cout << '*' << a << '*' << endl;
    cout << is_palindrome(a) << endl;
    trim_left(a);
    trim_right(a);
    cout << a ;
}
