#!/bin/bash
touch test1 test3 test4
mkdir test0 test2
ln test3 test5
ln -s test0 test6
truncate -s 4 test1                                                              
truncate -s 1 test3                                                              
truncate -s 2 test4                                                              
truncate -s 1 test5
chmod 715 test0                                                      
chmod 714 test1                                                                  
chmod 504 test2
chmod 404 test3                                                                  
chmod 641 test4                                                                  
chmod 404 test5 
touch -t 1506012047 test0
touch -t 1506012146 test1
touch -t 1506012245 test2
touch -t 1506012344 test3
touch -t 1506012343 test4
touch -t 1506012344 test5
touch -h -t 1506012220 test6
tar -cf exo2.tar test0 test1 test2 test3 test4 test5 test6
rm -rf test0 test1 test2 test3 test4 test5 test6
