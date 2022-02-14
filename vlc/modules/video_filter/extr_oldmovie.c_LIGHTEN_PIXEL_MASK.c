
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_pixels; } ;
typedef TYPE_1__ plane_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int) ;
 size_t FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(int32_t VAR_0, int32_t VAR_1,
                                int16_t VAR_2, plane_t *VAR_3) {
    FUNC_0( VAR_3->p_pixels[ FUNC_1(VAR_0, VAR_1, VAR_3) ],
        VAR_2, 0xFF );
}
