# 预处理
gcc -E main.c -o main.i

# 编译，编译为汇编，生成同名的.s文件
gcc -S main.c
或
gcc -S main.i

# 汇编，编译为机器码，生成同名的.o文件
gcc -c main.c
或
gcc -c main.s

# 链接，生成exe可执行程序
gcc main.c # 生成 main.out
gcc main.c -o main


# 查看完整的gcc编译过程
gcc main.c -v