{"changed":true,"filter":false,"title":"credit.c","tooltip":"~/workspace/unit1/credit/credit.c","value":"#include <cs50.h>\n#include <math.h>\n#include <stdio.h>\n\nint main(void)\n{\n    long long cardnumber = 0;\n\n    do\n    {printf(\"Card number? \");\n    cardnumber = GetLongLong();\n    }\n    while (cardnumber < 0);\n\n    int count = 0;\n    long long digits = cardnumber;\n    while (digits > 0)\n    {\n        digits = digits/10;\n        count++;\n    }\n    if ((count != 13) && (count != 15) && (count != 16))\n    {\n        printf(\"INVALID\\n\");\n    }\n    int number[count];\n\n\n    for (int i = 0; i < count; i++)\n    {\n        number[i] = cardnumber % 10;\n        cardnumber = cardnumber / 10;\n    }\n\n    int originalnumber[count];\n    for (int i = 1; i < count; i++)\n    {\n        originalnumber[i] = number[i];\n    }\n\n    for (int i = 1; i < count; i+=2)\n    {\n        number[i] = number[i] * 2;\n    }\n\n    int v = 0;\n    int temp;\n\n    if (count == 13)\n    {\n      for (int i = 0; i < count; i++)\n      {\n        temp = (number[i] % 10) + (number[i]/10 % 10);\n        v = v + temp;\n      }\n      if (originalnumber[12] == 4 && v % 10 == 0)\n      {\n        printf(\"VISA\\n\");\n      }\n      else\n      {\n        printf(\"INVALID\\n\");\n      }\n    }\n    if (count == 15)\n    {\n      for (int i = 0; i < count; i++)\n      {\n        temp = (number[i] % 10) + (number[i]/10 % 10);\n        v = v + temp;\n      }\n      if (originalnumber[14] == 3 && v % 10 == 0 && (originalnumber[13] == 4 || originalnumber[13] == 7))\n      {\n        printf(\"AMEX\\n\");\n      }\n      else\n      {\n        printf(\"INVALID\\n\");\n      }\n    }\n    if (count == 16)\n    {\n      for (int i = 0; i < count; i++)\n      {\n        temp = (number[i] % 10) + (number[i]/10 % 10);\n        v = v + temp;\n      }\n      if (originalnumber[15] == 4 && v % 10 == 0)\n      {\n        printf(\"VISA\\n\");\n      }\n      else if (originalnumber[15] == 5 && v % 10 == 0 && (originalnumber[14] == 1 || originalnumber[14] == 2 || originalnumber[14] == 3 || originalnumber[14] == 4 || originalnumber[14] == 5))\n        {\n            printf(\"MASTERCARD\\n\");\n        }\n      else\n      {\n        printf(\"INVALID\\n\");\n      }\n    }\n\n    return 0;\n}","undoManager":{"mark":7,"position":9,"stack":[[{"start":{"row":0,"column":0},"end":{"row":106,"column":5},"action":"insert","lines":["#include <cs50.h>","#include <math.h>","#include <stdio.h>","","int main(void)","{","    // Declare and initialize a variable and ask for user input.","    long long cardnumber = 0;"," ","    // Ask for credit card number  ","","    do","    {printf(\"What is your card number? \");","    cardnumber = GetLongLong();","    }","    while (cardnumber < 0);","","    // Determine whether it has a valid number of digits","    int count = 0;","    long long digits = cardnumber;","    while (digits > 0)","    {","        digits = digits/10;","        count++;","    }","    if ((count != 13) && (count != 15) && (count != 16))","    {","        printf(\"INVALID\\n\");","    }","    int number[count];","   ","    ","    for (int i = 0; i < count; i++)","    {","        number[i] = cardnumber % 10;","        cardnumber = cardnumber / 10;","    }","    ","    int originalnumber[count];","    for (int i = 1; i < count; i++)","    {","        originalnumber[i] = number[i];","    }","    ","    for (int i = 1; i < count; i+=2)","    {","        number[i] = number[i] * 2;","    }","    ","    int v = 0;","    int temp;","    ","    if (count == 13)","    {","      for (int i = 0; i < count; i++)","      {","        temp = (number[i] % 10) + (number[i]/10 % 10);","        v = v + temp;","      }","      if (originalnumber[12] == 4 && v % 10 == 0)","      {","        printf(\"VISA\\n\");","      }","      else","      {","        printf(\"INVALID\\n\");","      }","    }","    if (count == 15)","    {","      for (int i = 0; i < count; i++)","      {","        temp = (number[i] % 10) + (number[i]/10 % 10);","        v = v + temp;","      }","      if (originalnumber[14] == 3 && v % 10 == 0 && (originalnumber[13] == 4 || originalnumber[13] == 7))","      {","        printf(\"AMEX\\n\");","      }","      else","      {","        printf(\"INVALID\\n\");","      }","    }","    if (count == 16)","    {","      for (int i = 0; i < count; i++)","      {","        temp = (number[i] % 10) + (number[i]/10 % 10);","        v = v + temp;","      }","      if (originalnumber[15] == 4 && v % 10 == 0)","      {","        printf(\"VISA\\n\");","      }","      else if (originalnumber[15] == 5 && v % 10 == 0 && (originalnumber[14] == 1 || originalnumber[14] == 2 || originalnumber[14] == 3 || originalnumber[14] == 4 || originalnumber[14] == 5))","        {","            printf(\"MASTERCARD\\n\");","        }","      else","      {","        printf(\"INVALID\\n\");","      }","    }","  ","    return 0;","}    "],"id":1}],[{"start":{"row":17,"column":0},"end":{"row":17,"column":56},"action":"remove","lines":["    // Determine whether it has a valid number of digits"],"id":2}],[{"start":{"row":6,"column":0},"end":{"row":6,"column":64},"action":"remove","lines":["    // Declare and initialize a variable and ask for user input."],"id":3},{"start":{"row":5,"column":1},"end":{"row":6,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":8,"column":0},"end":{"row":8,"column":35},"action":"remove","lines":["    // Ask for credit card number  "],"id":4},{"start":{"row":7,"column":1},"end":{"row":8,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":7,"column":1},"end":{"row":8,"column":0},"action":"remove","lines":["",""],"id":5},{"start":{"row":7,"column":0},"end":{"row":7,"column":1},"action":"remove","lines":[" "]}],[{"start":{"row":13,"column":0},"end":{"row":14,"column":0},"action":"remove","lines":["",""],"id":6}],[{"start":{"row":9,"column":13},"end":{"row":9,"column":27},"action":"remove","lines":["What is your c"],"id":7},{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"insert","lines":["C"]}],[{"start":{"row":26,"column":0},"end":{"row":26,"column":3},"action":"remove","lines":["   "],"id":8},{"start":{"row":27,"column":0},"end":{"row":27,"column":4},"action":"remove","lines":["    "]},{"start":{"row":33,"column":0},"end":{"row":33,"column":4},"action":"remove","lines":["    "]},{"start":{"row":39,"column":0},"end":{"row":39,"column":4},"action":"remove","lines":["    "]},{"start":{"row":44,"column":0},"end":{"row":44,"column":4},"action":"remove","lines":["    "]},{"start":{"row":47,"column":0},"end":{"row":47,"column":4},"action":"remove","lines":["    "]},{"start":{"row":100,"column":0},"end":{"row":100,"column":2},"action":"remove","lines":["  "]},{"start":{"row":102,"column":1},"end":{"row":102,"column":5},"action":"remove","lines":["    "]}],[{"start":{"row":25,"column":22},"end":{"row":25,"column":23},"action":"insert","lines":["T"],"id":9},{"start":{"row":25,"column":23},"end":{"row":25,"column":24},"action":"insert","lines":["H"]},{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"insert","lines":["H"]},{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"insert","lines":["T"]},{"start":{"row":25,"column":26},"end":{"row":25,"column":27},"action":"insert","lines":["H"]},{"start":{"row":25,"column":27},"end":{"row":25,"column":28},"action":"insert","lines":["T"]}],[{"start":{"row":25,"column":27},"end":{"row":25,"column":28},"action":"remove","lines":["T"],"id":10},{"start":{"row":25,"column":26},"end":{"row":25,"column":27},"action":"remove","lines":["H"]},{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"remove","lines":["T"]},{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"remove","lines":["H"]},{"start":{"row":25,"column":23},"end":{"row":25,"column":24},"action":"remove","lines":["H"]},{"start":{"row":25,"column":22},"end":{"row":25,"column":23},"action":"remove","lines":["T"]}]]},"ace":{"folds":[],"scrolltop":1006,"scrollleft":0,"selection":{"start":{"row":79,"column":5},"end":{"row":79,"column":5},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":70,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1550105968607}