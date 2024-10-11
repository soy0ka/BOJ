// [31403/$A + B - C$](https://www.acmicpc.net/problem/31403)

const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().trim().split("\n");

A = Number(input[0])
B = Number(input[1])
C = Number(input[2])
console.log(A + B - C)
// A + B - C as Atring
// if A = 32, B = 16, C = 8
// 32+16 -> 3216 - 8 -> 3208
console.log(parseInt(String(A) + String(B)) - C)
