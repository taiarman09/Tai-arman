let question = document.getElementById("question")
let a = document.getElementById("a")
let b = document.getElementById("b")
let c = document.getElementById("c")
let d = document.getElementById("d")
let pre = document.getElementById("pre")
let next = document.getElementById("next")
let skip = document.getElementById("skip")
let count = 0


let quiz = [
    {
        question: "What is the capital of India?",
        a: "Mumbai",
        b: "Delhi",
        c: "Kolkata",
        d: "Chennai",
        correct: "b"
    },
    {
        question: "Which animal is known as the King of the Jungle?",
        a: "Tiger",
        b: "Elephant",
        c: "Lion",
        d: "Dog",
        correct: "c"
    },
    {
        question: "How many days are there in a week?",
        a: "5",
        b: "6",
        c: "7",
        d: "8",
        correct: "c"
    },
    {
        question: "What color is the sky on a clear day?",
        a: "Green",
        b: "Blue",
        c: "Red",
        d: "Yellow",
        correct: "b"
    }
]


function show() {
    question.innerText = quiz[count].question
    a.innerText = quiz[count].a
    b.innerText = quiz[count].b
    c.innerText = quiz[count].c
    d.innerText = quiz[count].d

    document.querySelectorAll(".list li").forEach(li => {
        li.classList.remove("correct", "wrong")
    })
}





next.addEventListener("click", () => {
    if (count < quiz.length - 1) {
        count++
        show()
    }
})


skip.addEventListener("click", () => {
    if (count < quiz.length - 1) {
        count++
        show()
    }
})

pre.addEventListener("click", () => {
    if (count > 0) {
        count--
        show()
    }
})



let options = document.querySelectorAll(".list li")

options.forEach(option => {
    option.addEventListener("click", () => {

        // pehle sab reset
        options.forEach(opt => {
            opt.classList.remove("correct", "wrong")
        })

        let selected = option.id
        let correct = quiz[count].correct

        if (selected === correct) {
            option.classList.add("correct")
        } else {
            option.classList.add("wrong")
            document.getElementById(correct).classList.add("correct")
        }
    })
})



