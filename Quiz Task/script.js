let questions = [
  {
    question: "What does HTML stand for?",
    options: ["Hyper Trainer Marking Language", "Hyper Text Marketing Language", "Hyper Text Markup Language", "High Text Markup Language"],
    answer: "Hyper Text Markup Language",
  },
  {
    question: "Which language is used for styling web pages?",
    options: ["PHP", "CSS", "Java", "Python"],
    answer: "CSS",
  },
  {
    question: "Which of the following is a server-side language?",
    options: ["HTML", "CSS", "Javascript", "PHP"],
    answer: "PHP",
  },
  {
    question: "What does SQL stand for?",
    options: [
      "Structured Query Language",
      "Simple Query List",
      "System Query Language",
      "Server Question Language",
    ],
    answer: "Structured Query Language",
  },
  {
    question: "Which company developed PHP?",
    options: [
      "Microsoft",
      "Google",
      "Zend Technologies",
      "Oracle",
    ],
    answer: "Zend Technologies",
  },
];


let currentQuestions = 0;
let score = 0;

let questionsElement = document.getElementById("question");
let optionsElement = document.getElementById("options");
let resultElement = document.getElementById("result");
let nextButton = document.getElementById("next-btn")


function loadQuestion() {
  let q = questions[currentQuestions];

  questionsElement.innerText = q.question;
  optionsElement.innerHTML = "";
  resultElement.textContent = "";

  q.options.forEach((option) => {
    const button = document.createElement("button");
    button.textContent = option;

    button.onclick = () => selectAnswer(button, option)

    optionsElement.appendChild(button);
  });
}

function handleNextQuestion() {
    currentQuestions++;
  if (currentQuestions < questions.length) {
      loadQuestion()
    }else{
        questionsElement.innerText = "Quiz Finshied";
        optionsElement.innerText = ""
        nextButton.style.disabled = "none";
        resultElement.innerText = "Your Score is " + score + "/" + questions.length;
        
        
    }

}

function selectAnswer(button , selectedOption){
    let correctAnswer = questions[currentQuestions].answer;
    
    const allButton = optionsElement.querySelectorAll("button")

    allButton.forEach(btn =>{
        btn.disabled = true;
        
        if(btn.textContent === correctAnswer){
            btn.classList.add("correct")
        }
    });
    
    
    if(selectedOption === correctAnswer){
        score++
    }else{
        button.classList.add("wrong")
        
    }
    
}
loadQuestion()