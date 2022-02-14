
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {scalar_t__ i_last_olen; scalar_t__ last_soxr; } ;
typedef TYPE_2__ filter_sys_t ;
typedef int block_t ;


 int * FUNC_0 (TYPE_1__*,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static block_t *
FUNC_1( filter_t *VAR_0 )
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    if( VAR_1->last_soxr && VAR_1->i_last_olen )
        return FUNC_0( VAR_0, VAR_1->last_soxr, ((void*)0),
                              VAR_1->i_last_olen );
    else
        return ((void*)0);
}
