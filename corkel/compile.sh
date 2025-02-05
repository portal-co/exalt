#!/usr/bin/env bash
set -euxo pipefail
if [ "${THREADS:=}" == "enabled" ]; then
CFLAGS="${CFLAGS:-} -matomics"
fi
exec $CC -target $ARCH-freestanding $(cat $(dirname $0)/core.cflags) $CFLAGS  "$@"