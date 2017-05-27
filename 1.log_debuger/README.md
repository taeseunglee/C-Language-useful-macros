# 1.log_debug
## Description
If you define DEBUG using -D option of gcc, 
(gcc -D DEBUG) then LOG_DEBUG will print out an message.
If not, LOG_DEBUG will not print out any messages.

## Define options
 * DEBUG : filename:line:function: message  
  [ex) c_test.h:4:func1: func1 start]

## Usage
```
gcc -D DEBUG c_test.c & ./a.out
gcc -D DEBUG c_test.c -o c_test & ./c_test
```
