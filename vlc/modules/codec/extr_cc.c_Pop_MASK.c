
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_7__ {scalar_t__ i_queue; scalar_t__ i_reorder_depth; TYPE_3__* p_queue; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_8__ {struct TYPE_8__* p_next; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static block_t *FUNC_0( decoder_t *VAR_1, bool VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    block_t *VAR_4;

     if( VAR_3->i_queue == 0 )
         return ((void*)0);

     if( !VAR_2 && VAR_3->i_queue < VAR_0 )
     {
        if( VAR_3->i_queue < VAR_3->i_reorder_depth || VAR_3->i_reorder_depth == 0 )
            return ((void*)0);
     }


     VAR_4 = VAR_3->p_queue;
     VAR_3->p_queue = VAR_4->p_next;
     VAR_4->p_next = ((void*)0);
     VAR_3->i_queue--;

    return VAR_4;
}
