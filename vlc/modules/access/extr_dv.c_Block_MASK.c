
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int block_t ;
struct TYPE_5__ {int lock; int * p_frame; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static block_t *FUNC_2( stream_t *VAR_0, bool *restrict VAR_1 )
{
    access_sys_t *VAR_2 = VAR_0->p_sys;
    block_t *VAR_3 = ((void*)0);

    FUNC_0( &VAR_2->lock );
    VAR_3 = VAR_2->p_frame;

    VAR_2->p_frame = ((void*)0);
    FUNC_1( &VAR_2->lock );

    (void) VAR_1;
    return VAR_3;
}
