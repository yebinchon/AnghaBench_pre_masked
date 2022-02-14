
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static void FUNC_2(void) {
        int VAR_2;
        pid_t VAR_3;

        VAR_2 = FUNC_1("100", &VAR_3);
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_3 == 100);

        VAR_2 = FUNC_1("0x7FFFFFFF", &VAR_3);
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_3 == 2147483647);

        VAR_3 = 65;
        VAR_2 = FUNC_1("0", &VAR_3);
        FUNC_0(VAR_2 == -VAR_1);
        FUNC_0(VAR_3 == 65);

        VAR_3 = 65;
        VAR_2 = FUNC_1("-100", &VAR_3);
        FUNC_0(VAR_2 == -VAR_1);
        FUNC_0(VAR_3 == 65);

        VAR_3 = 65;
        VAR_2 = FUNC_1("0xFFFFFFFFFFFFFFFFF", &VAR_3);
        FUNC_0(VAR_2 == -VAR_1);
        FUNC_0(VAR_3 == 65);

        VAR_2 = FUNC_1("junk", &VAR_3);
        FUNC_0(VAR_2 == -VAR_0);

        VAR_2 = FUNC_1("", &VAR_3);
        FUNC_0(VAR_2 == -VAR_0);
}
