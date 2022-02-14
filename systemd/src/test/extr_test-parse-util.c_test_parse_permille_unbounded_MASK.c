
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("1001‰") == 1001);
        FUNC_0(FUNC_1("4000‰") == 4000);
        FUNC_0(FUNC_1("2147483647‰") == 2147483647);
        FUNC_0(FUNC_1("2147483648‰") == -VAR_0);
        FUNC_0(FUNC_1("4294967295‰") == -VAR_0);
        FUNC_0(FUNC_1("4294967296‰") == -VAR_0);

        FUNC_0(FUNC_1("101%") == 1010);
        FUNC_0(FUNC_1("400%") == 4000);
        FUNC_0(FUNC_1("214748364.7%") == 2147483647);
        FUNC_0(FUNC_1("214748364.8%") == -VAR_0);
        FUNC_0(FUNC_1("429496729.5%") == -VAR_0);
        FUNC_0(FUNC_1("429496729.6%") == -VAR_0);
}
