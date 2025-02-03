#!/usr/bin/env bash
set -euxo pipefail
R=$(dirname $0)
export O=${O:-$R/build/$ARCH}
mkdir -p $O
./corkel/build.sh