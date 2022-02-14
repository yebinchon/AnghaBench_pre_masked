
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int fifo; } ;
typedef TYPE_2__ filter_sys_t ;
typedef int block_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static block_t *FUNC_3( filter_t *VAR_0, block_t *VAR_1 )
{
    block_t *VAR_2 = FUNC_0( VAR_1 );
    filter_sys_t *VAR_3 = VAR_0->p_sys;
    if( FUNC_2(VAR_2 != ((void*)0)) )
        FUNC_1( VAR_3->fifo, VAR_2 );
    return VAR_1;
}
