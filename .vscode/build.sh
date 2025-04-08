#!/bin/zsh

FILE="$1"
EXT="${FILE##*.}"
OUT="${FILE%.*}"

if [[ "$EXT" == "c" ]]; then
  echo "Compiling as C file"
  clang -std=c17 -fcolor-diagnostics -fansi-escape-codes "$FILE" -o "$OUT-c"
elif [[ "$EXT" == "cpp" || "$EXT" == "cc" || "$EXT" == "cxx" ]]; then
  echo "Compiling as C++ file"
  clang++ -std=c++23 -fcolor-diagnostics -fansi-escape-codes "$FILE" -o "$OUT-cpp"
else
  echo "Unsupported file type: $EXT"
  exit 1
fi
