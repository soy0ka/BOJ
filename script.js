const fs = require('fs')
const path = require('path')

const baseDir = './'
const maxPadding = 5

const tierMap = [
  "UnRated", "Bronze V", "Bronze IV", "Bronze III", "Bronze II", "Bronze I",
  "Silver V", "Silver IV", "Silver III", "Silver II", "Silver I",
  "Gold V", "Gold IV", "Gold III", "Gold II", "Gold I",
  "Platinum V", "Platinum IV", "Platinum III", "Platinum II", "Platinum I",
  "Diamond V", "Diamond IV", "Diamond III", "Diamond II", "Diamond I",
  "Ruby V", "Ruby IV", "Ruby III", "Ruby II", "Ruby I"
]

const ignoreDirs = [
  '.git', '.github', '.vscode'
]

const entries = fs.readdirSync(baseDir, { withFileTypes: true })

entries.forEach((entry) => {
  if (!entry.isDirectory()) return
  if (tierMap.indexOf(entry.name) !== -1 || ignoreDirs.indexOf(entry.name) !== -1) return

  const oldDirName = entry.name;
  const fullOldPath = path.join(baseDir, oldDirName)
  const readmePath = path.join(fullOldPath, 'README.md')

  if (!fs.existsSync(readmePath)) {
    console.warn(`⚠️  ${oldDirName} - README.md 없음`)
    return;
  }

  const firstLine = fs.readFileSync(readmePath, 'utf8').split('\n')[0]

  // tier number (e.g., tier_small/8.svg)
  const tierMatch = firstLine.match(/tier_small\/(\d+)\.svg/)
  const tierNum = tierMatch ? parseInt(tierMatch[1], 10) : 0
  const tierName = tierMap[tierNum] || 'Unrated'

  // 문제 번호 및 제목
  const probMatch = firstLine.match(/^# (\d+)번: (.+?) -/)
  if (!probMatch) {
    console.warn(`⚠️  ${oldDirName} - 문제 정보 파싱 실패`)
    return;
  }
  const probNum = probMatch[1].padStart(maxPadding, '0')
  const probTitle = probMatch[2];

  const newDirName = `${probNum}_${probTitle}`;
  const newFullPath = path.join(baseDir, tierName, newDirName)

  fs.mkdirSync(path.dirname(newFullPath), { recursive: true })

  console.log(`✅ Moving: ${oldDirName} → ${tierName}/${newDirName}`)
  fs.renameSync(fullOldPath, newFullPath);
});
