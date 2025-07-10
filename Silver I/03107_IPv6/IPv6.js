/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 3107                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/3107                           #+#        #+#      #+#    */
/*   Solved: 2025/07/08 20:59:35 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
const fs = require("fs")
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt"
const shorten = fs.readFileSync(filePath).toString().trim()
const original= []

if (shorten.includes('::')) {
  const parts = shorten.split('::')
  const leftPart = parts[0].split(':')
  const rightPart = parts[1].split(':')

  for (let i = 0; i < leftPart.length; i++) {
    if (leftPart[i].length < 4) {
      const padLeft = '0'.repeat(4-leftPart[i].length)
      original.push(padLeft + leftPart[i])
    } else {
      original.push(leftPart[i])
    }
  }
  const missingParts = 8 - (leftPart.length + rightPart.length)
  for (let i = 0; i < missingParts; i++) {
    original.push('0000')
  }

    for (let i = 0; i < rightPart.length; i++) {
    if (rightPart[i].length < 4) {
      const padLeft = '0'.repeat(4-rightPart[i].length)
      original.push(padLeft + rightPart[i])
    } else {
      original.push(rightPart[i])
    }
  }
} else {
  const groups = shorten.split(":")

  for (const group of groups) {
    if (group.length < 4) {
      const padLeft = '0'.repeat(4-group.length)
      original.push(padLeft + group)
    } else {
      original.push(group)
    }
  }
}

console.log(original.join(':'))
