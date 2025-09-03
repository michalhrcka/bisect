gcc -o main main.c || { echo "compile failed"; exit 125; }

OUT=$(./main 10)
if [ "$OUT" -eq 55 ]; then
  echo "GOOD (output $OUT)"
  exit 0
else
  echo "BAD (output $OUT)"
  exit 1
fi
