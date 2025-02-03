cd $(dirname $0)
bash ../compile.sh -isystem $(pwd)/include -c -o ../build/$CFG/dlmalloc.o ./src/dlmalloc.c