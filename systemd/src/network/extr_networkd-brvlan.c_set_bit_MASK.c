
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(unsigned VAR_1, uint32_t *VAR_2) {
        if (VAR_1 < VAR_0)
                VAR_2[VAR_1 / 32] |= (FUNC_0(1) << (VAR_1 % 32));
}
