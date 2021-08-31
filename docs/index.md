 
<link rel="shortcut icon" type="image/x-icon" href="https://miro.medium.com/max/1280/1*75jvBleoQfAZJc3sgTSPQA.jpeg">
 

## Ace the #placement'22 🎯 

 
- [X] Common Coding Interview Questions  
- [X] Common mySQL Interview Questions  




<hr>
<link rel="shortcut icon" type="image/x-icon" href="https://miro.medium.com/max/1280/1*75jvBleoQfAZJc3sgTSPQA.jpeg">
  

## Common Coding Interview Questions 
 

**Q #1) How can you reverse a string?**
 
```

// Function to reverse a string
void reverse(string str)
{
   for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
}


void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

```

**Q #2) How to calculate the number of vowels and consonants in a string?**

```
for(int i = 0; str[i]!='\0'; i++) 
{
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
         str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' ||
         str[i]=='U')
      {
         vowelCounter++;
      }
      else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
      {
         consonantCounter++;
      }
  }

```

**Q #3) calculate the number of char in a string?**

```
int countChar(string str){

    // create counter for each character
    int count_upper = 0;
    int count_lower = 0;
    int count_special = 0;
    int count_numeric = 0;

    /* transvse through string */
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 65 && str[i] <= 90) {
            count_upper++;
        }
        else if (str[i] >= 97 && str[i] <=122){
            count_lower++;
        }
        else if(str[i] >= 48 && str[i] <=57){
            count_numeric++;
        }
        else {
            count_special++;
        }
    }
    cout <<endl<<"Upper case letters: " << count_upper << endl 
    <<"Lower case letters : "<<count_lower <<endl
    <<"Number : "<< count_numeric << endl
    << "Special characters : "<<count_special;
}

```



**Q #4) Program to Encrypt a String?**
 

```
void ceaser(string s, int key) 
{
    if(key==0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        for(int i=0; i<s.size(); i++){
            
        if(isdigit(s[i]))
            {
                if(s[i]+key<=57)
                {
                    s[i] = s[i] + key;
                }
                else
                {
                   int left = (s[i] + key) - 57;
                    s[i] = 47 + left;
                }   
            }
            else if(s[i]>=65 && s[i]<=90)
            {
                if(s[i]+key<=90)
                {
                    s[i] = s[i] + key;
                }
                else
                {
                    int left = (s[i] + key) - 90;
                    s[i] = 64 + left;
                }  
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                if(s[i]+key<=122)
                {
                    s[i] = s[i] + key;
                }
                else
                {
                    int left = (s[i] + key) - 122;
                    s[i] = 96 + left;
                } 
            }
            
        }
    }
    cout <<"The Encrypted Text is:"<<s;
}


```

**Q #5) Find total ways to reach n’th stair with at-most `m` steps?**

```
int totalWays(int n, int m)
{
    // base case: invalid input
    if (n < 0) {
        return 0;
    }
 
    // base case: 1 way (with no steps)
    if (n == 0) {
        return 1;
    }
 
    int count = 0;
    for (int i = 1; i <= m; i++) {
        count += totalWays(n - i, m);
    }
 
    return count;
}

```



























