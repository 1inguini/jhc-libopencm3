#!/bin/sh
 
host="reset halt"
user="flash write_image erase a.out"
pass="reset"
 
( echo ${host}
sleep 0.5
echo ${user}
sleep 0.5
echo ${pass}
sleep 0.5 ) | telnet localhost 4444

# sleep 0.5

# telnet localhost 4444
