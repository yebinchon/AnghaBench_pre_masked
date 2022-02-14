
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {scalar_t__ b_frame; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int block_t ;


 int * FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static block_t * FUNC_1( void *VAR_0 )
{
    decoder_t *VAR_1 = VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;
    return VAR_2->b_frame ? FUNC_0( VAR_1 ) : ((void*)0);
}
