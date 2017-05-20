# 1.log_debug
## Description
If you define DEBUG, LOG or LOG_DATE using -D option of gcc, 
(gcc -D) then LOG_DEBUG will print out an message.
If not, LOG_DEBUG will not print out any messages.

## Define options
 * DEBUG : filename:line:function: message  
  [ex) c_test.h:4:func1: func1 start]
 * LOG : (HH:)filename:line:function: message  
  [ex) (11:49:33) c_test.h:4:func1: func1 start]
 * LOG_DATE : filename:line:function: message 

## Usage
```
gcc -c -D DEBUG 
```
