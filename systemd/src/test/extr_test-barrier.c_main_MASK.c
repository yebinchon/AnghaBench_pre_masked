
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;

int FUNC_21(int VAR_4, char *VAR_5[]) {
        int VAR_6;
        FUNC_20(VAR_2);

        if (!FUNC_3())
                return FUNC_2("slow tests are disabled");
        VAR_6 = FUNC_1();
        if (FUNC_0(VAR_6, -VAR_1, -VAR_0))
                return FUNC_2("Cannot detect virtualization");

        if (VAR_6 != VAR_3)
                return FUNC_2("This test requires a baremetal machine");

        FUNC_7();
        FUNC_15();
        FUNC_16();
        FUNC_19();
        FUNC_17();
        FUNC_18();
        FUNC_8();
        FUNC_9();
        FUNC_10();
        FUNC_11();
        FUNC_14();
        FUNC_12();
        FUNC_13();
        FUNC_4();
        FUNC_5();
        FUNC_6();

        return 0;
}
