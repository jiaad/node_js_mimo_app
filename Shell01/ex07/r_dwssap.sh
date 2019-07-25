cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | grep -oE '^[^:]+' | rev |sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed '${s/$/./;}' |paste -sd, - | sed 's/, */, /g' | tr -d '\n'
