Example on how to generate new include files:
cat stm8.cfg3 |grep -v '^;'|grep -v '^entry'|grep -v '^area'|grep -v '^\.'|strings|awk '{printf(".equ %s,\t%s\t; %s\n", $1, $2, substr($0, index($0, $3)))}' 

