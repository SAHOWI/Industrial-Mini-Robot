\# C++ Folder structure


```code 
>tree
.

└───control

&nbsp;   ├───control

&nbsp;   ├───doc

&nbsp;   ├───lib

&nbsp;   └───tests

```



Control will contain the main software for the robot arm control board.

The basic idea is, that it acts like a industrial control board, which takes commands from a different Entity (e.g. PLC or control computer) and translates them into movements using invers kinematic algorythms.





