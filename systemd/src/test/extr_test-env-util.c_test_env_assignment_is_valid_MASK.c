
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("a="));
        FUNC_0(FUNC_1("b=głąb kapuściany"));
        FUNC_0(FUNC_1("c=\\007\\009\\011"));
        FUNC_0(FUNC_1("e=printf \"\\x1b]0;<mock-chroot>\\x07<mock-chroot>\""));
        FUNC_0(FUNC_1("f=tab\tcharacter"));
        FUNC_0(FUNC_1("g=new\nline"));

        FUNC_0(!FUNC_1("="));
        FUNC_0(!FUNC_1("a b="));
        FUNC_0(!FUNC_1("a ="));
        FUNC_0(!FUNC_1(" b="));

        FUNC_0(!FUNC_1("a.b="));
        FUNC_0(!FUNC_1("a-b="));
        FUNC_0(!FUNC_1("\007=głąb kapuściany"));
        FUNC_0(!FUNC_1("c\009=\007\009\011"));
        FUNC_0(!FUNC_1("głąb=printf \"\x1b]0;<mock-chroot>\x07<mock-chroot>\""));
}
