cargo install pit-cli
find ./pit -type f -exec pit gen-c {} {}.h ';'