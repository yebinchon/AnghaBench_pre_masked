
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("Hello", ""));
        FUNC_0(FUNC_1("Hello", "Hello"));
        FUNC_0(FUNC_1("Hello world", "Hello"));
        FUNC_0(FUNC_1("Hello\tworld", "Hello"));
        FUNC_0(FUNC_1("Hello\nworld", "Hello"));
        FUNC_0(FUNC_1("Hello\rworld", "Hello"));
        FUNC_0(FUNC_1("Hello ", "Hello"));

        FUNC_0(!FUNC_1("Hello", "Hellooo"));
        FUNC_0(!FUNC_1("Hello", "xxxxx"));
        FUNC_0(!FUNC_1("Hellooo", "Hello"));
}
