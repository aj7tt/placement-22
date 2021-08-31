## Ace the #placement'22 🎯
 

- [X] [DSA](https://github.com/Aj7t/100daysofDSA)   
- [X] [C++](https://github.com/Aj7t/100daysofDSA)    
- [X] Oops
- [X] Common Coding Interview Questions  


<hr>

## Common Coding Interview Questions 

**Q 1) How can you reverse a string?**
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






































