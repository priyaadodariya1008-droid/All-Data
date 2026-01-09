//1

// let temperature = Number(prompt("Enter the temperature:"));
// if(temperature >= 30)
// {
//     console.log("Temperature is : ",temperature);
// }
// else
// {
//     alert("The weather is pleasant")
// }
 
// --------------------------------------------------------

//2

// let uname = prompt("Enter your username :");
// let pass = prompt("Enter your password :");

// if(uname!="" && pass!="")
// {
//     console.log("Login Successful !");
// }
// else
// {
//     console.log("Login Fail !");
// }

// --------------------------------------------------------

//3

// let marks = prompt("Enter your mark :");

// if (marks >= 80 && marks <= 100) {
//     alert("Grade A");
// } 
// else if (marks >= 60 && marks < 80) {
//     alert("Grade B");
// } 
// else if (marks >= 40 && marks < 60) {
//     alert("Grade C");
// } 
// else if (marks >= 0 && marks < 40) {
//     alert("Fail");
// } 
// else {
//     alert("Invalid marks");
// }

// --------------------------------------------------------

//4

// let num1 = Number(prompt("Enter number 1 :"));
// let num2 = Number(prompt("Enter number 2 :"));

// if(num1 > num2)
// {
//     console.log("Number1 is larger");
// }
// else if(num1 < num2)
// {
//     console.log("Number 2 is larger");
// }
// else
// {
//     console.log("Both number is equal");
// }

// --------------------------------------------------------

//5

// let num = Number(prompt("Enter number between 1 to 7 :"));

// switch(num){
//     case 1:
//         alert("Monday");
//         break;

//     case 2:
//         alert("Tuesday");
//         break;
    
//     case 3:
//         alert("Wednesday");
//         break;

//     case 4:
//         alert("Thursday");
//         break;

//     case 5:
//         alert("Friday");
//         break;

//     case 6:
//         alert("Saturday");
//         break;

//     case 7:
//         alert("Sunday");
//         break;

//     default:
//         alert("Enter number between 1 to 7");
//         break;
// }

// --------------------------------------------------------

//6

// let balance = 5000;
// let withdraw = Number(prompt("Enter withdrawal amount:"));

// if (withdraw <= balance && withdraw > 0) 
// {
//     alert("Withdrawal successful!");
// } 
// else 
// {
//     alert("Insufficient balance!");
// }

// --------------------------------------------------------

//7

// let bill = Number(prompt("Enter total bill amount:"));
// let discount = 0;

// if (bill >= 5000) 
// {
//     discount = bill * 0.20;
// } 
// else if (bill >= 3000) 
// {
//     discount = bill * 0.15;
// } 
// else if (bill >= 1000) 
// {
//     discount = bill * 0.10;
// } 
// else 
// {
//     discount = 0;
// }

// let finalAmount = bill - discount;
// alert("Final Payable Amount: ₹" + finalAmount);

// --------------------------------------------------------

//8

// let units = Number(prompt("Enter units consumed:"));
// let bill = 0;

// if (units <= 100) {
//     bill = units * 5;
// } 
// else if (units <= 200) {
//     bill = (100 * 5) + ((units - 100) * 7);
// } 
// else {
//     bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
// }
// alert("Total Electricity Bill: ₹" + bill);

// --------------------------------------------------------

//9

// let distance = Number(prompt("Enter distance travelled (in km):"));
// let fare = 0;

// if (distance <= 5) {
//     fare = distance * 10;
// } 
// else if (distance <= 15) {
//     fare = (5 * 10) + ((distance - 5) * 8);
// } 
// else {
//     fare = (5 * 10) + (10 * 8) + ((distance - 15) * 5);
// }
// alert("Total Fare: ₹" + fare);

// --------------------------------------------------------

//10

let choice = prompt("Menu:\n1. Pizza\n2. Burger\n3. Sandwich\n\nEnter your choice (1-3):");

switch (choice) {
    case "1":
        alert("You selected Pizza\nPrice: ₹250");
        break;

    case "2":
        alert("You selected Burger\nPrice: ₹150");
        break;

    case "3":
        alert("You selected Sandwich\nPrice: ₹100");
        break;

    default:
        alert("Invalid choice");
}