#!/usr/bin/env bash
set -euxo pipefail
R=$(dirname $0)
O=${O:-$R/build/$ARCH}
mkdir -p $O
export CFLAGS=${CFLAGS:-}
$R/compile.sh -isystem $R/include -c -o $O/setjmp_core.o $R/setjmp_core_$ARCH.S
$R/compile.sh  -isystem $R/include -c -o $O/setjmp.o $R/setjmp.c
$R/dlmalloc/build.sh