// 1

let student1=[{ name:"MNO",marks:897 }];
let student=[
...student1,
{
    name:"ABC",
    marks:90
},
{
    name:"DEF",
    marks:65
},
{
    name:"GHI",
    marks:50
},
{
    name:"JKL",
    marks:68
}];


//Map
student.map((stu)=>{
    console.log(`Name is ${stu.name} and Marks is ${stu.marks}`);
});


//Filter
console.log("Marks above 60 is :");
student.filter((stu)=>{
    if(stu.marks>60)
    {
        console.log(`${stu.marks}`);
    }
});


//Reduce
let result = student.reduce((total, stu)=> total+stu.marks,0 );
console.log("Total =",result);


//Add new student 
console.log(student);


//--------------------------------------------------------------------------------------

// 2

let products = [
{ 
    name: "Milk", 
    price: 60, 
    quantity: 2 
},
{ 
    name: "Butter", 
    price: 550, 
    quantity: 1 
},
{ 
    name: "Cheese", 
    price: 700, 
    quantity: 3 
},
{ 
    name: "Curd", 
    price: 40, 
    quantity: 5 
}];


//Map
products.map((product) => {
  console.log(product.name);
});


//Filter
console.log("Products above 500 is :");
let expensive = products.filter((product) => {
    if(product.price > 500)
    {
        console.log(`${product.name}`);
    }
});


//Reduce
let totalValue = products.reduce((total, product) => total + (product.price * product.quantity), 0);
console.log("Total Cart Value =", totalValue);


//Update product quantity
products.map((product) => {
    if(product.name)
    {
        product.quantity+=1;
    }
});
console.log("Update Product quantity : ")
console.log(products);


//--------------------------------------------------------------------------------------

// 3

let employee = {
    name: "XYZ",
    age: 28,
    position: "Software Developer",
    address: {
        city: "Ahmedabad",
        pincode: 380001
    },
    skills: ["HTML", "CSS", "JavaScript"]
};

console.log(employee.address.city);    
console.log(employee.skills[0]);       

employee.skills = [...employee.skills, "React", "Node.js"];

console.log(employee.skills);

employee.age = 29;
console.log(employee.age); 

let { name, age } = employee;

console.log(name); 
console.log(age); 

console.log(employee);


//--------------------------------------------------------------------------------------

// 4

let a1=[1,2,3,4,5,6,7,8,9,10];
console.log(a1);

let o = a1.filter((d,i)=>d%2!=0)
console.log("Odd number is :",o);

let e = a1.filter((d,i)=>d%2==0)
console.log("Even number is :",e);

let total = a1.reduce((total,data)=>total+data,0);
console.log("Total is :" ,total);

let square=a1.map((data,index)=>data*data);
console.log("Square is :",square);

//--------------------------------------------------------------------------------------

// 5 

let Student = [
    {
        name:"ABC",
        mark:90
    },
    {
        name:"DEF",
        mark:87
    },    
    {
        name:"GHI",
        mark:65
    },    
    {
        name:"JKL",
        mark:54
    },    
    {
        name:"MNO",
        mark:70
    }
];

let res = Student.map(data => {
    if (data.mark > 60) {
        data.result = "Pass";
    } else {
        data.result = "Fail";
    }
    return data;
});
console.log(res);


let passedStudents = Student.filter(
  student => student.result === "Pass"
);
console.log(passedStudents);

let totalMarks = Student.reduce((sum, student) => sum + student.mark,0);
let averageMarks = totalMarks / Student.length;
console.log("Class Average:", averageMarks);
