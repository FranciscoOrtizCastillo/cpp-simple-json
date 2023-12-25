# Simple sample of parse JSON in C++

```bash
touch CMakeLists.txt  

mkdir build
cd build
cmake .. 

make

# Generate a Compilation Database
export CMAKE_EXPORT_COMPILE_COMMANDS=1
cmake --build .

```

## Conan

```bash
pip install conan

conan profile detect --force
conan profile path default
conan install . --output-folder=build --build=missing

cd build

# Linux, macOS
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .

mkdir logs 
./simple-json  --log_dir=./logs

```