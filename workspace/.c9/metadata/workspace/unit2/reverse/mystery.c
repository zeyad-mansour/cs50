{"filter":false,"title":"mystery.c","tooltip":"~/workspace/unit2/reverse/mystery.c","undoManager":{"mark":3,"position":3,"stack":[[{"start":{"row":0,"column":0},"end":{"row":30,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <stdlib.h>","","int verify_something(void) {","  return 0;","}","","unsigned char *mystery_function(unsigned short bufsize) {","  unsigned char *tmp_buf;","","  if (bufsize == 0)","    return NULL;","","  tmp_buf = malloc(bufsize);","  if (tmp_buf == NULL)","    return NULL;","","  if (verify_something() == 0) // something bad happened","    return NULL;","","  return tmp_buf;","}","","int main(int argc, char **argv) {","  unsigned char *buf;","","  buf = mystery_function(50);","  if (buf != NULL)","    free(buf);","  return 0;","}"],"id":1}],[{"start":{"row":17,"column":31},"end":{"row":17,"column":56},"action":"remove","lines":["// something bad happened"],"id":2}],[{"start":{"row":17,"column":30},"end":{"row":17,"column":31},"action":"remove","lines":[" "],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":29,"column":11},"action":"remove","lines":["#include <stdio.h>","#include <stdlib.h>","","int verify_something(void) {","  return 0;","}","","unsigned char *mystery_function(unsigned short bufsize) {","  unsigned char *tmp_buf;","","  if (bufsize == 0)","    return NULL;","","  tmp_buf = malloc(bufsize);","  if (tmp_buf == NULL)","    return NULL;","","  if (verify_something() == 0)","    return NULL;","","  return tmp_buf;","}","","int main(int argc, char **argv) {","  unsigned char *buf;","","  buf = mystery_function(50);","  if (buf != NULL)","    free(buf);","  return 0;"],"id":4}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":0,"column":0},"end":{"row":0,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1550365036202,"hash":"07854dbcc50b94eb746bd345b54e39477d5e0894"}