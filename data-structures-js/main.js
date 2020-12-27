"use strict";


const factorial = (num) => {
    // 5
    if (num < 2) {
        return 1;
    }
    return num * factorial(num-1);
}


const isOperator = (val) => {
    return isNaN(val) || val === "." || val === "=";
}

let result = isOperator(5);


const arr = ['a', 'r', 'y', 'p', 'i', 'n', 's', 'x'];

console.log(arr.sort());