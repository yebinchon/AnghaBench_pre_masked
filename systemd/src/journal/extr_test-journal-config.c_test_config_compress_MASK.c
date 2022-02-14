
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("yes", 1, 111);
        FUNC_0("no", 0, 111);
        FUNC_0("y", 1, 111);
        FUNC_0("n", 0, 111);
        FUNC_0("true", 1, 111);
        FUNC_0("false", 0, 111);
        FUNC_0("t", 1, 111);
        FUNC_0("f", 0, 111);
        FUNC_0("on", 1, 111);
        FUNC_0("off", 0, 111);



        FUNC_0("1", 1, 111);
        FUNC_0("0", 0, 111);


        FUNC_0("1B", 1, 1);
        FUNC_0("1K", 1, 1024);
        FUNC_0("1M", 1, 1024 * 1024);
        FUNC_0("1G", 1, 1024 * 1024 * 1024);


        FUNC_0("-1", 1, 111);
        FUNC_0("blah blah", 1, 111);
        FUNC_0("", 1, (uint64_t)-1);
}
