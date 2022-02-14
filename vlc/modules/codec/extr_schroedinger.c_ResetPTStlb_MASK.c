
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ encoder_t ;
struct TYPE_7__ {TYPE_1__* pts_tlb; } ;
typedef TYPE_3__ encoder_sys_t ;
struct TYPE_5__ {int b_empty; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( encoder_t *VAR_1 )
{
    encoder_sys_t *VAR_2 = VAR_1->p_sys;
    for( int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
    {
        VAR_2->pts_tlb[VAR_3].b_empty = 1;
    }
}
