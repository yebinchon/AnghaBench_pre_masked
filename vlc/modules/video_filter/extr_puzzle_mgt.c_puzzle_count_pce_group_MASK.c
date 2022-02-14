
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int32_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_7__ {int i_pieces_nbr; } ;
struct TYPE_9__ {TYPE_1__* ps_pieces; int * pi_group_qty; TYPE_2__ s_allocated; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_6__ {size_t i_group_ID; } ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1( filter_t *VAR_0) {
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    FUNC_0 ( VAR_1->pi_group_qty, 0, sizeof( int32_t ) * (VAR_1->s_allocated.i_pieces_nbr) );
    for (uint32_t VAR_2 = 0; VAR_2 < VAR_1->s_allocated.i_pieces_nbr; VAR_2++)
        VAR_1->pi_group_qty[VAR_1->ps_pieces[VAR_2].i_group_ID]++;
}
