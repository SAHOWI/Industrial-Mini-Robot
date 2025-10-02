# Master Control Program (MCP): control

## Program Description
xxx

## Build MCP

From within Industrial-Mini-Robot execute 

```bash
cd ./software/c++/control/control
mkdir build
cd build
cmake ..
make
./control
```

For windows:
Open your Visual Studio developer command prompt (e.g. developer Command Prompt for VS 2022)
From within the command pronpt navigate to your repository and execute the follwwiong sequence:

```cmd
cd .\\software\\c++\\control\\control
mkdir build
cd build
cmake -G "Visual Studio 17 2022" ..
cmake --build . --config Release
./control
```







