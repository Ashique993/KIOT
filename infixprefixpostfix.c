Top ()[]{}
1st ^
2nd * /
3rd + -

infix: a+b
postfix: ab+
prefix: +ab

Infix Input: a+b*c-(d/e)+f 
Step        Data       Stack          Output
1           a                         a
2           +          +              a
3           b          +              ab
4           *          +*             ab
5           c          +*             abc
6           -          -              abc*+
7           (          -(             abc*+
8           d          -(             abc*+d
9           /          -(/            abc*+d
10          e          -(/            abc*+de
11          )          -              abc*+de/
12          +          +              abc*+de/-
13          f          +              abc*+de/-f
14          Postfix Final Ans:        abc*+de/-f+
Input: a+b*c-(d/e)+f 
Rev Ip: f+(e/d)-c*b+a
Step        Data       Stack          Output
1           f                         f
2           +          +              f
3           (          +(             f
4           e          +(             fe
5           /          +(/            fe
6           d          +(/            fed
7           )          +              fed/
8           -          -              fed/+
9           c          -              fed/+c
10          *          -*             fed/+c
11          b          -*             fed/+cb
12          +          +              fed/+cb*-
13          a          +              fed/+cb*-a
14         Final Ans:                 fed/+cb*-a+
15 Rev Final Ans :                    +a-*bc+/def


Postfix Ans:        abc*+de/-f+
Step       Data       Stack        Output
1          a          a
2          b          ab
3          c          abc
4          *          





















