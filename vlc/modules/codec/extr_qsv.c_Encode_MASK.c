
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_13__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ encoder_t ;
struct TYPE_14__ {scalar_t__ async_depth; int packets; } ;
typedef TYPE_2__ encoder_sys_t ;
typedef int block_t ;
struct TYPE_15__ {struct TYPE_15__* syncp; } ;
typedef TYPE_3__ async_task_t ;
struct TYPE_16__ {scalar_t__ syncp; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_9__* FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static block_t *FUNC_9(encoder_t *VAR_0, picture_t *VAR_1)
{
    encoder_t *VAR_2 = (encoder_t *)VAR_0;
    encoder_sys_t *VAR_3 = VAR_2->p_sys;
    async_task_t *VAR_4;
    block_t *VAR_5 = ((void*)0);

    if (FUNC_7(VAR_1 != ((void*)0)))
    {
        VAR_4 = FUNC_5( VAR_2, VAR_1 );
        if (FUNC_7(VAR_4 != ((void*)0)))
            FUNC_3(&VAR_3->packets, VAR_4);
    }

    if ( FUNC_2(&VAR_3->packets) == (VAR_3->async_depth + 1) ||
         (!VAR_1 && FUNC_2(&VAR_3->packets)))
    {
        FUNC_0(FUNC_4(&VAR_3->packets)->syncp != 0);
        VAR_4 = FUNC_1(&VAR_3->packets);
        VAR_5 = FUNC_8( VAR_2, VAR_4 );
        FUNC_6(VAR_4->syncp);
        FUNC_6(VAR_4);
    }

    return VAR_5;
}
