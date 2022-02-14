
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dev_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void) {

        FUNC_2(sizeof(dev_t) == sizeof(uint64_t));

        FUNC_3(FUNC_0(0U));
        FUNC_3(FUNC_1(0U));

        FUNC_3(FUNC_0(1U));
        FUNC_3(FUNC_1(1U));

        FUNC_3(!FUNC_0(-1U));
        FUNC_3(!FUNC_1(-1U));

        FUNC_3(FUNC_0(1U << 10));
        FUNC_3(FUNC_1(1U << 10));

        FUNC_3(FUNC_0((1U << 12) - 1));
        FUNC_3(FUNC_1((1U << 20) - 1));

        FUNC_3(!FUNC_0((1U << 12)));
        FUNC_3(!FUNC_1((1U << 20)));

        FUNC_3(!FUNC_0(1U << 25));
        FUNC_3(!FUNC_1(1U << 25));

        FUNC_3(!FUNC_0(VAR_0));
        FUNC_3(!FUNC_1(VAR_0));

        FUNC_3(!FUNC_0(VAR_1));
        FUNC_3(!FUNC_1(VAR_1));

        FUNC_3(FUNC_0(FUNC_4(0)));
        FUNC_3(FUNC_1(FUNC_5(0)));
}
