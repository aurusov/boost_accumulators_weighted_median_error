##Debug mode vs Release mode##
**2.49747** vs **2.44749**

##System info##
```bash
drobus@drobus-VirtualBox:~$ cat /etc/issue
Ubuntu 13.10 \n \l

drobus@drobus-VirtualBox:~$ g++ --version
g++ (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1
Copyright (C) 2013 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

##Debug mode##
```bash
drobus@drobus-VirtualBox:~/1/boost_accumulators_weighted_median_error/build$ cmake -DCMAKE_BUILD_TYPE=Debug ..
-- Boost version: 1.55.0
-- Configuring done
-- Generating done
-- Build files have been written to: /home/drobus/1/boost_accumulators_weighted_median_error/build
drobus@drobus-VirtualBox:~/1/boost_accumulators_weighted_median_error/build$ make
[100%] Building CXX object CMakeFiles/test.dir/src/main.cpp.o
Linking CXX executable test
[100%] Built target test
drobus@drobus-VirtualBox:~/1/boost_accumulators_weighted_median_error/build$ ./test
2.49747
```

##Release mode##
```bash
drobus@drobus-VirtualBox:~/1/boost_accumulators_weighted_median_error/build$ cmake -DCMAKE_BUILD_TYPE=Release ..
-- Boost version: 1.55.0
-- Configuring done
-- Generating done
-- Build files have been written to: /home/drobus/1/boost_accumulators_weighted_median_error/build
drobus@drobus-VirtualBox:~/1/boost_accumulators_weighted_median_error/build$ make
[100%] Building CXX object CMakeFiles/test.dir/src/main.cpp.o
Linking CXX executable test
[100%] Built target test
drobus@drobus-VirtualBox:~/1/boost_accumulators_weighted_median_error/build$ ./test
2.44749
```
