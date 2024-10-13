// [1477/휴게소 세우기](https://www.acmicpc.net/problem/1477)

const fs = require("fs")
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt"
const input = fs.readFileSync(filePath).toString().trim().split("\n")

const [Now, More, Length] = input[0].split(" ").map((i) => parseInt(i))
const restArea = input[1] ? input[1].split(" ").map((i) => parseInt(i)) : []

restArea.push(0)
restArea.push(Length)
restArea.sort((a, b) => a - b)

let low = 1
let high = parseInt(Length)
let answer = 0

while (low <= high) {
  let mid = Math.floor((low + high) / 2)
  let count = 0
  for (let i = 1; i < restArea.length; i++) {
    const dist = restArea[i] - restArea[i - 1]
    if (dist > mid) {
      count += Math.ceil(dist / mid) - 1
    }
  }
  if (count > More) {
    low = mid + 1
  } else {
    answer = mid
    high = mid - 1
  }
}

console.log(answer)