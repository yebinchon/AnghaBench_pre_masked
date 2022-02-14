
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int * last_soxr; scalar_t__ i_last_olen; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1( filter_t *VAR_0 )
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    if( VAR_1->last_soxr )
    {
        FUNC_0( VAR_1->last_soxr );
        VAR_1->i_last_olen = 0;
        VAR_1->last_soxr = ((void*)0);
    }
}
