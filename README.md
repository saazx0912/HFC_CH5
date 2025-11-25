# HFC_CH5
深入淺出練習 第五章

1. struct fish snappy = {"snappy , "piranha" ,69 ,4};
   struct fish gnasher= snappy;   建立副本

2. ms c++  -o將被移除 改用-link 
   cl t2.c /link /out:full.exe

3.在C語言中所有的指定(assignment)都是複製，要為參考應該使用指標
  struct fish gnasher= snappy;   建立副本

4.  struct t 中   (*t).name  ==  t->name


5.   margarita m = {2.0, 1.0 ,{2}};   ==> 可以編譯
    
     margarita m3 ;
     m3 = {2.0, 1.0 ,{2}};  會認為是陣列，無法編譯 

6.bitfield 儲存自訂數目的位元  , bitfield 應該被宣告為 unsigned int
   
   typedef struct {
      unsigned int low_pass_vdf:1;  這表示該欄位只占用一個位元的儲存空間
      unsigned int filter_coupler:1;
      unsigned int reverb:1;
      unsigned int sequetial:1;
      unsigned int month_no:4;  4位元可以儲存0-15
   } synth;
