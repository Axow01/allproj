cat /etc/passwd | sed '/^[[:blank:]]*#/d;s/#.*//' | sed -e "s/:\*:.*//" | rev | sed -n "n;p" | sort -r | tr ' ' ', ' | tr -d '\n'
