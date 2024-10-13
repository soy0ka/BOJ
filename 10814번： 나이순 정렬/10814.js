// [10814/나이순 정렬](https://www.acmicpc.net/problem/10814)

const fs = require("fs")
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt"
const input = fs.readFileSync(filePath).toString().trim().split("\n")

input.shift()
const members = []

for (const member of input) {
  const [age, name] = member.split(" ")
  members.push({ age: parseInt(age), name })
}

members.sort((a, b) => a.age - b.age)

for (const member of members) {
  console.log(`${member.age} ${member.name}`)
}