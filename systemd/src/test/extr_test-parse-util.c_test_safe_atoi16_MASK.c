
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static void FUNC_2(void) {
        int VAR_2;
        int16_t VAR_3;

        VAR_2 = FUNC_1("-12345", &VAR_3);
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_3 == -12345);

        VAR_2 = FUNC_1("  -12345", &VAR_3);
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_3 == -12345);

        VAR_2 = FUNC_1("32767", &VAR_3);
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_3 == 32767);

        VAR_2 = FUNC_1("  32767", &VAR_3);
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_3 == 32767);

        VAR_2 = FUNC_1("36536", &VAR_3);
        FUNC_0(VAR_2 == -VAR_1);

        VAR_2 = FUNC_1("-32769", &VAR_3);
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
