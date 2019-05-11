{"filter":false,"title":"ISBN.c","tooltip":"~/workspace/ISBN/ISBN.c","undoManager":{"mark":8,"position":8,"stack":[[{"start":{"row":0,"column":0},"end":{"row":44,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <cs50.h>","#include <math.h>","int main(void)","{"," printf(\"Enter ISBN number to check: \");"," long long isbn = GetLongLong();",""," // this will return the last digit in the long long"," int tenth = isbn % 10;",""," // this is a check when running code to see what digit is returned"," // printf(\"10th: %d\\n\", tenth);",""," int sum = 0;",""," for(int i = 10; i > 1; i--)"," {"," // cuts last digit off isbn"," isbn = isbn / 10;",""," // this is a check to see if loop is acting on correct values"," // printf(\"%lld\\n\",isbn);",""," // performs the weighted sum calculation"," sum = sum + (i - 1) * (isbn % 10);"," }",""," // another code check"," // printf(\"sum:%d\\n\", sum);",""," // isbn calculation"," int checkTenth = sum % 11;",""," // checking if number is valid"," if (checkTenth == tenth)"," {"," printf(\"YES\\n\");"," }"," else"," {"," printf(\"NO\\n\");"," }","","}"],"id":1}],[{"start":{"row":8,"column":0},"end":{"row":8,"column":52},"action":"remove","lines":[" // this will return the last digit in the long long"],"id":2},{"start":{"row":7,"column":0},"end":{"row":8,"column":0},"action":"remove","lines":["",""]},{"start":{"row":6,"column":32},"end":{"row":7,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":9,"column":0},"end":{"row":11,"column":0},"action":"remove","lines":[" // this is a check when running code to see what digit is returned"," // printf(\"10th: %d\\n\", tenth);",""],"id":3},{"start":{"row":8,"column":0},"end":{"row":9,"column":0},"action":"remove","lines":["",""]},{"start":{"row":7,"column":23},"end":{"row":8,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":12,"column":0},"end":{"row":12,"column":28},"action":"remove","lines":[" // cuts last digit off isbn"],"id":4}],[{"start":{"row":15,"column":0},"end":{"row":16,"column":26},"action":"remove","lines":[" // this is a check to see if loop is acting on correct values"," // printf(\"%lld\\n\",isbn);"],"id":5},{"start":{"row":14,"column":0},"end":{"row":15,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":15,"column":0},"end":{"row":16,"column":41},"action":"remove","lines":[""," // performs the weighted sum calculation"],"id":6},{"start":{"row":14,"column":0},"end":{"row":15,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":17,"column":0},"end":{"row":20,"column":0},"action":"remove","lines":[""," // another code check"," // printf(\"sum:%d\\n\", sum);",""],"id":7}],[{"start":{"row":18,"column":0},"end":{"row":18,"column":20},"action":"remove","lines":[" // isbn calculation"],"id":8},{"start":{"row":17,"column":0},"end":{"row":18,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":20,"column":0},"end":{"row":20,"column":31},"action":"remove","lines":[" // checking if number is valid"],"id":9},{"start":{"row":19,"column":0},"end":{"row":20,"column":0},"action":"remove","lines":["",""]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":19,"column":0},"end":{"row":19,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1549840047196,"hash":"27c76ce4a939d2fe648f307d1035df3a404bf908"}