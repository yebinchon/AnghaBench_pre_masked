
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int) ;

__attribute__((used)) static void FUNC_7(void) {
        uint16_t VAR_0 = 4711;
        uint32_t VAR_1 = 123456;
        uint64_t VAR_2 = 9876543210;





        FUNC_0(FUNC_1(&VAR_0) == 4711);
        FUNC_0(FUNC_2(&VAR_1) == 123456);
        FUNC_0(FUNC_3(&VAR_2) == 9876543210);

        FUNC_4(&VAR_0, 1);
        FUNC_5(&VAR_1, 2);
        FUNC_6(&VAR_2, 3);

        FUNC_0(VAR_0 == 1);
        FUNC_0(VAR_1 == 2);
        FUNC_0(VAR_2 == 3);
}
