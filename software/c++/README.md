# C++ Folder structure


```code 
>tree
.
│   README.md
│
└───control
    ├───control
    │   │   CMakeLists.txt
    │   │   main.cpp
    │   │   README.md
    │   │
    │   ├───include
    │   └───src
    │           controller.cpp
    │           controller.h
    │
    ├───doc
    │       README.md
    │
    ├───lib
    │       README.md
    │
    └───tests
            README.md

```



Control will contain the main software for the robot arm control board.
The basic idea is, that it acts like a industrial control board, which takes commands from a different Entity (e.g. PLC or control computer) and translates them into movements using invers kinematic algorythms.





