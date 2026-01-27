// 1

function fibonacci(n) 
{
    let a = 0, b = 1;
    for (let i = 1; i <= n; i++) 
    {
        console.log(a);
        let next = a + b;
        a = b;
        b = next;
    }
}
fibonacci(10);


// 2

function sum(num) 
{
    let sum = 0;
    while (num > 0) 
    {
        let digit = num % 10;  
        sum += digit;          
        num = (num - digit) / 10; 
    }
    return sum;
}
console.log(sum(123));


// 3

function isPalindrome(num) 
{
    let original = num;
    let rev = 0;
    while (num > 0) {
        let digit = num % 10;       
        rev = rev * 10 + digit;   
        num = (num - digit) / 10;   
    }
    if (original === rev) {
        console.log("Palindrome");
    } else {
        console.log("Not Palindrome");
    }
}
isPalindrome(121);  


// 4

let mul=1;
function isfactorial(num)
{
    for(let i=num; i>0; i--)
    {
        mul=mul*i;
    }
}
isfactorial(5);
console.log("Factorial = ",mul);


// 5

function reverseNumber(num) {
    let str = num.toString();
    let rev = "";

    for (let i = str.length - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}
console.log(reverseNumber(986)); 