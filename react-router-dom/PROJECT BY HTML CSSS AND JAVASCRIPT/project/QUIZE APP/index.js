const questions = [
  {
    question: "Which of the following is a client site language?",
    a: "Java",
    b: "C",
    c: "Python",
    d: "JavaScript",
    correct: "d",
  },
  {
    question: "What does HTML stand for?",
    a: "Hypertext Markup Language",
    b: "Cascading Style Sheet",
    c: "Jason Object Notation",
    d: "Helicopters Terminals Motorboats Lamborginis",
    correct: "a",
  },
  {
    question: "What year was JavaScript launched?",
    a: "1996",
    b: "1995",
    c: "1994",
    d: "none of the above",
    correct: "b",
  },
  {
    question: "What does CSS stands for?",
    a: "Hypertext Markup Language",
    b: "Cascading Style Sheet",
    c: "Jason Object Notation",
    d: "Helicopters Terminals Motorboats Lamborginis",
    correct: "b",
  },
];

let index = 0;
const queBox = document.getElementById("queBox");
const option = document.querySelectorAll(".option");
const loadQuestion = () => {
  const data = questions[index];
  queBox.innerText = `${index + 1}) ${data.question}`;
  // console.log(data.question);
  option[0].nextElementSibling.innerText = data.a;
  option[1].nextElementSibling.innerText = data.b;
  option[2].nextElementSibling.innerText = data.c;
  option[3].nextElementSibling.innerText = data.d;
};

const submitQuize = () => {
  const ans = getAnswer();
};

const getAnswer = () => {
  option.forEach((input) => {
    if (input.checked) {
      return input.value;
    }
  });
};
getAnswer();
submitQuize();
loadQuestion();
