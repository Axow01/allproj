cat /etc/passwd | sed '/^[[:blank:]]*#/d;s/#.*//' | sed -e "s/:\*:.*//" | rev | sed -n "n;p" | sort -r | awk  '{ printf( "%s ", $1 ); } END { printf( "\n" ); }' | tr ' ' ', '
