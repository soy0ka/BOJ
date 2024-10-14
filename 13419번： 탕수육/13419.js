const fs = require('fs')
const filePath = process.platform === 'linux' ? '/dev/stdin' : './input.txt'
const input = fs.readFileSync(filePath).toString().trim().split('\n')

input.shift()
// const T = parseInt(input.shift())

/**
 * @param {string} string
 * @return {number[]}
*/
const failureFunction = (string) => {
  const length = string.length
  const failure = new Array(length).fill(0)
  let j = 0
  for (let i = 1; i < length; i++) {
    while (j > 0 && string[i] !== string[j]) {
      j = failure[j - 1]
    }
    if (string[i] === string[j]) {
      failure[i] = ++j
    }
  }
  return failure
}

/**
  * @param {string} string
  * @param {number} order
  * @return {void}
*/
const tangchorou = (string, order) => {
  string = string.repeat(10)
  if (order === 2) {
    string = string.slice(1)
  } 

  let tangstring = ''
  for (i = 0; i < string.length; i+=2) {
    tangstring += string[i]
  }
  const failure = failureFunction(tangstring.repeat(10))
  const repeat = tangstring.length - failure[tangstring.length - 1]
  
  console.log(tangstring.slice(0, repeat))
}


for(const value of input) {
  tangchorou(value, 1)
  tangchorou(value, 2)
}

