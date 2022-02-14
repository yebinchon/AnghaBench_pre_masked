
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*) ;

__attribute__((used)) static void FUNC_7(void) {
        int VAR_2, VAR_3, VAR_4, VAR_5;

        VAR_5 = FUNC_4();
        if (VAR_5 == -VAR_0) {
                FUNC_6(VAR_5, "Skipping cg hierarchy tests: %m");
                return;
        }
        FUNC_1(VAR_5 >= 0);

        VAR_2 = FUNC_2();
        FUNC_1(FUNC_0(VAR_2, 0, 1));

        VAR_3 = FUNC_3();
        FUNC_1(FUNC_0(VAR_3, 0, 1));

        VAR_4 = FUNC_5(VAR_1);
        FUNC_1(FUNC_0(VAR_4, 0, 1));

        if (VAR_2) {
                FUNC_1(VAR_4);
                FUNC_1(!VAR_3);

        } else if (VAR_3) {
                FUNC_1(VAR_4);
                FUNC_1(!VAR_2);

        } else
                FUNC_1(!VAR_4);
}
