#!/bin/bash
cat /etc/passwd | sed -n 'p;n' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | cut -d ":" -f1 | tr "/" "," | sed "s/,/, /g" | tr -d '\n' | sed 's/, $/./'
