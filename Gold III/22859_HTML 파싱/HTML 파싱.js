const fs = require("fs")
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt"
const input = fs.readFileSync(filePath).toString().trim()

const result = []

const divRegex = /<div[^>]*?title="(.*?)"[^>]*?>(.*?)<\/div>/gs
const pRegex = /<p>(.*?)<\/p>/gs

let divMatch
while ((divMatch = divRegex.exec(input)) !== null) {
  const title = divMatch[1]
  const innerHtml = divMatch[2]

  if (title) {
    result.push(`title : ${title}`)
  }

  let pMatch
  while ((pMatch = pRegex.exec(innerHtml)) !== null) {
    const rawText = pMatch[1]
    const purified = rawText
      .replace(/<[^>]+>/g, '')
      .replace(/\s+/g, ' ')
    if (purified) result.push(purified)
  }
}

console.log(result.join("\n"))
