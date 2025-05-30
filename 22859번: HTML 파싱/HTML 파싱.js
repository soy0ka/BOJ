const fs = require("fs")
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt"
const input = fs.readFileSync(filePath).toString().trim().split("\n")

const result = []

// const paragraphs = input[0].match(/<p>.*?<\/p>/g) || []
// const titles = input[0].match(/<div.*?title="(.*?)".*?>/g) || []
for (const match of input[0].matchAll(/<div[^>]*title="([^"]+)"[^>]*>(.*?)<\/div>|<p>(.*?)<\/p>/gs)) {
  if (match[1]) {
    result.push(`title : ${match[1]}`)
    const inner = match[2]
    const pMatch = inner.match(/<p>(.*?)<\/p>/s)
    if (pMatch) {
      const purified = pMatch[1].replace(/<[^>]+>/g, '').replace(/\s{2,}/g, ' ').trim()
      if (purified) result.push(purified)
    }
  } else if (match[3]) {
    const purified = match[3].replace(/<[^>]+>/g, '').replace(/\s{2,}/g, ' ').trim()
    if (purified) result.push(purified)
  }
}

console.log(result.join('\n'))
