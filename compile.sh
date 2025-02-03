#!/usr/bin/env bash
set -euxo pipefail
exec $CC -target $ARCH $CFLAGS $(cat $(dirname $0)/core.cflags) "$@"