// [1966/큐](https://www.acmicpc.net/problem/1966)

const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().trim().split("\n");

const testCaseCount = input.shift();

for (let i = 0; i < testCaseCount; i++) {
  const [documentQuantity, targetIndex] = input.shift().split(" ").map(Number);
  const queue = input.shift().split(" ").map(Number);
  const Doucments = []
  for (let i = 0; i < documentQuantity; i++) {
    Doucments.push({
      priority: queue[i],
      isTarget: i === targetIndex
    })
  }

  let count = 0;

  while (true) {
    if (Doucments[0].priority === Math.max(...Doucments.map((v) => v.priority))) {
      count++;
      if (Doucments[0].isTarget) {
        console.log(count);
        break;
      } else {
        Doucments.shift();
      }
    } else {
      Doucments.push(Doucments.shift());
    }
  }
}
