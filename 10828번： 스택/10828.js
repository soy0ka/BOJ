const fs = require("fs")
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt"
const input = fs.readFileSync(filePath).toString().trim().split("\n")

input.shift()
const stack = []
const push = (stack, x) => {
  stack.push(x)
}

const pop = (stack) => {
  if (stack.length === 0) {
    return -1
  }
  return stack.pop()
}

const size = (stack) => {
  return stack.length
}

const empty = (stack) => {
  return stack.length === 0 ? 1 : 0
}

const top = (stack) => {
  if (stack.length === 0) {
    return -1
  }
  return stack[stack.length - 1]
}

for (const command of input) {
  const [cmd, num] = command.split(" ")
  switch (cmd) {
    case "push":
      push(stack, num)
      break
    case "pop":
      console.log(pop(stack))
      break
    case "size":
      console.log(size(stack))
      break
    case "empty":
      console.log(empty(stack))
      break
    case "top":
      console.log(top(stack))
      break
  }
}