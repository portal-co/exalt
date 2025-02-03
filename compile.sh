#!/bin/bash

PLAT=,$PLAT
PI=(${PLAT//,/ -DEXA_})
$CC --target=wasm64 $PI --no-standard-libraries -mbulk-memory -mmultivalue -Xclang -target-abi -Xclang experimental-mv -isystem $(dirname $0)/include -isystem $(dirname $0)/metalang99/include -isystem $(dirname $0)/interface99 -isystem $(dirname $0)/pit $@