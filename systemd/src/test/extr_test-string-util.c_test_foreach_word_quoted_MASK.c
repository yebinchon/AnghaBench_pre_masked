
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_1("test a b c 'd' e '' '' hhh '' '' \"a b c\"",
              FUNC_0("test",
                        "a",
                        "b",
                        "c",
                        "d",
                        "e",
                        "",
                        "",
                        "hhh",
                        "",
                        "",
                        "a b c"),
              0);

        FUNC_1("test \"xxx",
              FUNC_0("test"),
              1);

        FUNC_1("test\\",
              VAR_0,
              1);
}
