cd $(dirname $0)
git clone https://github.com/hirrolot/metalang99.git
git clone https://github.com/hirrolot/interface99.git
export CFG=wasm64-${PLAT//,/-}
mkdir -p ./build/$CFG
sh ./dlmalloc/build.sh
bash ./compile.sh -c -o ./build/$CFG/string.o ./string.c
bash ./compile.sh -c -o ./build/$CFG/file.o ./file.c
bash ./compile.sh -c -o ./build/$CFG/handle.o ./handle.c
bash ./compile.sh -c -o ./build/$CFG/polyfill.o ./polyfill.s
