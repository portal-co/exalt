#!/usr/bin/env bash
set -euxo pipefail

exec $(dirname $0)/corkel/compile.sh $(cat $(dirname $0)/extra.cflags) -isystem $(dirname $0)/corkel/include "$@"