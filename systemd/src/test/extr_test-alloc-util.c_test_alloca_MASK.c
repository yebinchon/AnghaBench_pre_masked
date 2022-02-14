
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* FUNC_0 (int,int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int const*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(void) {
        static const uint8_t VAR_0[997] = { };
        char *VAR_1;

        VAR_1 = FUNC_1(17, 512);
        FUNC_2(!((uintptr_t)VAR_1 & 0xff));
        FUNC_4(VAR_1, 17);

        VAR_1 = FUNC_0(997, 1024);
        FUNC_2(!((uintptr_t)VAR_1 & 0x1ff));
        FUNC_2(!FUNC_3(VAR_1, VAR_0, 997));
}
