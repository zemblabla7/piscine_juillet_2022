#!/bin/bash
cat /etc/passwd | grep -v '#' | sed -n 0~2p | cut -d ':' -f 1 | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/,/_, /g' | sed 's/, $/./'
