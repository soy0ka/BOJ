#!/bin/zsh

FILE="$1"
EXT="${FILE##*.}"
OUT="${FILE%.*}"

# 백준 문제 해결을 위한 기본 컴파일 플래그
COMMON_FLAGS=(-g -Wall -fcolor-diagnostics -fansi-escape-codes)

if [[ "$EXT" == "c" ]]; then
  echo "Compiling as C file"
  clang -std=c17 "${COMMON_FLAGS[@]}" "$FILE" -o "$OUT-c"
elif [[ "$EXT" == "cpp" || "$EXT" == "cc" || "$EXT" == "cxx" ]]; then
  echo "Compiling as C++ file"
  clang++ -std=c++17 "${COMMON_FLAGS[@]}" "$FILE" -o "$OUT-cpp"
else
  echo "Unsupported file type: $EXT"
  exit 1
fi
