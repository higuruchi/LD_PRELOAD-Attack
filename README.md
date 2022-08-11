# LD_PRELOAD-Attack

## 概要

LD_PRELOAD攻撃の実験用アプリケーション

rootでしかアクセスできない`important_file`の中身を読み取る

```bash
$ ll ./important_file
-rw-------  1 root      root         30 Aug 11 08:42 important_file
```

## 実験方法

```
$ make attack
gcc -shared -fPIC unrandom.c -o unrandom.so
gcc -o random_num random_num.c
sudo chmod 600 ./important_file
sudo chown root:root ./important_file
sudo LD_PRELOAD=./unrandom.so ./random_num
This is importnat information
16838
This is importnat information
2147456639
This is importnat information
10113
This is importnat information
2147468396
This is importnat information
2147481932
This is importnat information
2147456508
This is importnat information
2147473891
This is importnat information
2147458300
This is importnat information
2147467093
This is importnat information
4086
```
