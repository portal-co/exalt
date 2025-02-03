#!/usr/bin/env bash
set -euxo pipefail
git subtree $1 --prefix corkel https://github.com/portal-co/corkel-wautil.git main
