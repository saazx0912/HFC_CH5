# HFC_CH5
深入淺出練習 第五章

1. struct fish snappy = {"snappy , "piranha" ,69 ,4};
   struct fish gnasher= snappy;   建立副本

2. ms c++  -o將被移除 改用-link 
   cl t2.c /link /out:full.exe

3.在C語言中所有的指定(assignment)都是複製，要為參考應該使用指標
  struct fish gnasher= snappy;   建立副本