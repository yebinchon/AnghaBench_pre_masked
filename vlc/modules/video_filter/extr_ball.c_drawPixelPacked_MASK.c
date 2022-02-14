
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_8__ {int i_y_offset; int i_u_offset; int i_v_offset; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_6__ {int i_pitch; int * p_pixels; } ;



__attribute__((used)) static void FUNC_0( filter_sys_t *VAR_0, picture_t *VAR_1,
                           uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4,
                           int VAR_5, int VAR_6, bool VAR_7 )
{
    uint8_t *VAR_8 = VAR_1->p[0].p_pixels
                       + VAR_1->p[0].i_pitch * VAR_6 + VAR_5 * 2;
    *( VAR_8 + VAR_0->i_y_offset ) = VAR_2;
    if( !VAR_7 )
    {
        *( VAR_8 + VAR_0->i_u_offset ) = VAR_3;
        *( VAR_8 + VAR_0->i_v_offset ) = VAR_4;
    }
}
