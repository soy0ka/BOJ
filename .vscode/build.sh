#!/bin/zsh

FILE="$1"
EXT="${FILE##*.}"
OUT="${FILE%.*}"

# ✅ 다중 include/lib 경로를 배열로 관리
INCLUDE_PATHS=(
  "/opt/homebrew/include"
  "/usr/local/include"
)

LIB_PATHS=(
  "/opt/homebrew/lib"
  "/usr/local/lib"
)

# ✅ 자동 변환: -I/path -I/path2 ...
INCLUDE_FLAGS=("${(@)INCLUDE_PATHS:#/-I*}")
INCLUDE_FLAGS=("${(@)INCLUDE_FLAGS[@]/#/-I}")

LIB_FLAGS=("${(@)LIB_PATHS:#/-L*}")
LIB_FLAGS=("${(@)LIB_FLAGS[@]/#/-L}")

# ✅ 필요한 라이브러리들
LIBS=(-lfido2 -lcbor -lhidapi -lcrypto -fsanitize=address -Wall)

# ✅ 공통 컴파일 플래그 조합
COMMON_FLAGS=("${INCLUDE_FLAGS[@]}" "${LIB_FLAGS[@]}" "${LIBS[@]}" -fcolor-diagnostics -fansi-escape-codes)

if [[ "$EXT" == "c" ]]; then
  echo "Compiling as C file"
  clang -std=c17 "${COMMON_FLAGS[@]}" "$FILE" -o "$OUT-c"
elif [[ "$EXT" == "cpp" || "$EXT" == "cc" || "$EXT" == "cxx" ]]; then
  echo "Compiling as C++ file"
  clang++ -std=c++23 "${COMMON_FLAGS[@]}" "$FILE" -o "$OUT-cpp"
else
  echo "Unsupported file type: $EXT"
  exit 1
fi
