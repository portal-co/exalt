#!/usr/bin/env bash
set -euxo pipefail
cd $(dirname $0)
cat | jq '.features = "+bulk-memory,+multivalue"' | jq '.["target-cpu"] = "mvp"' | jq '.abi = "experimental-mv"'