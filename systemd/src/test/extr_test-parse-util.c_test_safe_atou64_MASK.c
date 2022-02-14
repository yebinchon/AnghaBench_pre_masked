
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static void FUNC_2(void) {
        int VAR_2;
        uint64_t VAR_3;

        VAR_2 = FUNC_1("12345", &VAR_3);
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_3 == 12345);

        VAR_2 = FUNC_1("  12345", &VAR_3);
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_3 == 12345);

        VAR_2 = FUNC_1("18446744073709551617", &VAR_3);
        FUNC_0(VAR_2 == -VAR_1);

        VAR_2 = FUNC_1("-1", &VAR_3);
        FUNC_0(VAR_2 == -VAR_1);

        VAR_2 = FUNC_1("  -1", &VAR_3);
        FUNC_0(VAR_2 == -VAR_1);

        VAR_2 = FUNC_1("junk", &VAR_3);
        FUNC_0(VAR_2 == -VAR_0);

        VAR_2 = FUNC_1("123x", &VAR_3);
        FUNC_0(VAR_2 == -VAR_0);

        VAR_2 = FUNC_1("12.3", &VAR_3);
        FUNC_0(VAR_2 == -VAR_0);

        VAR_2 = FUNC_1("", &VAR_3);
        FUNC_0(VAR_2 == -VAR_0);
}
