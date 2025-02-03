git subtree add --prefix "$@"
echo >> pull.sh
echo "git subtree \$1 --prefix $@" >> pull.sh