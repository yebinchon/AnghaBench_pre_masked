
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_pitch; int * p_pixels; } ;
typedef TYPE_1__ plane_t ;


 int FUNC_0 (int *,int const,int) ;

__attribute__((used)) static inline void FUNC_1(plane_t *VAR_0, int VAR_1, int VAR_2, const uint8_t VAR_3[4], int VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < 4; VAR_5++)
        FUNC_0(&VAR_0[VAR_5].p_pixels[VAR_1 * VAR_0[VAR_5].i_pitch + VAR_2], VAR_3[VAR_5], VAR_4);
}
