cat /etc/passwd | grep -v '#' | sed -e "s/:\*:.*//" | rev | sed -n "n;p" | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | sort -r | tr '\n' ' ' | tr -d '\n'
