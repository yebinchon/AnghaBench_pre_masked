
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef int filter_sys_t ;
struct TYPE_4__ {int i_pitch; void** p_pixels; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( filter_sys_t *VAR_0, picture_t *VAR_1,
                           uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4,
                           int VAR_5, int VAR_6, bool VAR_7 )
{
    FUNC_0( VAR_0 );
    *( VAR_1->p[0].p_pixels + VAR_1->p[0].i_pitch * VAR_6 + VAR_5 ) = VAR_2;
    if( !VAR_7 )
    {
        *( VAR_1->p[2].p_pixels + VAR_1->p[2].i_pitch
                                     * ( VAR_6 / 2 ) + VAR_5 / 2 ) = VAR_3;
        *( VAR_1->p[1].p_pixels + VAR_1->p[1].i_pitch
                                     * ( VAR_6 / 2 ) + VAR_5 / 2 ) = VAR_4;
    }
}
