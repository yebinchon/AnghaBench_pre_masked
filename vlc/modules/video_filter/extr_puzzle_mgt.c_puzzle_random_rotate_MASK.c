
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_12__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_10__ {int i_rotate; } ;
struct TYPE_9__ {size_t i_pieces_nbr; } ;
struct TYPE_13__ {TYPE_3__* ps_pieces; TYPE_2__ s_current_param; TYPE_1__ s_allocated; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_11__ {int i_actual_mirror; int i_center_y; int i_center_x; scalar_t__ i_actual_angle; } ;


 int FUNC_0 (TYPE_4__*,size_t) ;
 int FUNC_1 (TYPE_4__*,size_t,unsigned int,int ,int ,int) ;
 int FUNC_2 () ;

void FUNC_3( filter_t *VAR_0)
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    for (uint32_t VAR_2 = 0; VAR_2 < VAR_1->s_allocated.i_pieces_nbr; VAR_2++)
    {
        VAR_1->ps_pieces[VAR_2].i_actual_angle = 0;
        VAR_1->ps_pieces[VAR_2].i_actual_mirror = +1;

        switch ( VAR_1->s_current_param.i_rotate )
        {
          case 1:
                FUNC_1( VAR_0, VAR_2, (( (unsigned) FUNC_2()) % ( 2 ) ) * 2, VAR_1->ps_pieces[VAR_2].i_center_x, VAR_1->ps_pieces[VAR_2].i_center_y, 0 );
            break;
          case 2:
                FUNC_1( VAR_0, VAR_2, (( (unsigned) FUNC_2()) % ( 4 ) ), VAR_1->ps_pieces[VAR_2].i_center_x, VAR_1->ps_pieces[VAR_2].i_center_y, 0 );
            break;
          case 3:
                FUNC_1( VAR_0, VAR_2, (( (unsigned) FUNC_2()) % ( 8 ) ), VAR_1->ps_pieces[VAR_2].i_center_x, VAR_1->ps_pieces[VAR_2].i_center_y, 0 );
            break;
        }
        FUNC_0( VAR_0, VAR_2 );
    }
}
