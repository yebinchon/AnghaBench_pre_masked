
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("777", 0777);
        FUNC_0("644", 0644);

        FUNC_0("-777", 0);
        FUNC_0("999", 0);
        FUNC_0("garbage", 0);
        FUNC_0("777garbage", 0);
        FUNC_0("777 garbage", 0);
}
