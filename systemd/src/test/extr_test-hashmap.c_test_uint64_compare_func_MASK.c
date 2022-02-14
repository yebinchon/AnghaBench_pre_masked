
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int const*) ;

__attribute__((used)) static void FUNC_2(void) {
        const uint64_t VAR_0 = 0x100, VAR_1 = 0x101;

        FUNC_0(FUNC_1(&VAR_0, &VAR_0) == 0);
        FUNC_0(FUNC_1(&VAR_0, &VAR_1) == -1);
        FUNC_0(FUNC_1(&VAR_1, &VAR_0) == 1);
}
