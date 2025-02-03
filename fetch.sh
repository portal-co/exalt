#!/usr/bin/env bash
set -euxo pipefail
cd $(dirname $0)
rustc +nightly -Z unstable-options --target=wasm32-unknown-unknown --print target-spec-json | ./rustc_setup.sh > wasm32-unknown-corkel.json
rustc +nightly -Z unstable-options --target=wasm64-unknown-unknown --print target-spec-json | ./rustc_setup.sh > wasm64-unknown-corkel.json
cat ./wasm32-unknown-corkel.json | sh ./rs_atomics.sh > ./wasm32-unknown-torkel.json
cat ./wasm64-unknown-corkel.json | sh ./rs_atomics.sh > ./wasm64-unknown-torkel.json