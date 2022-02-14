
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p; } ;
typedef TYPE_2__ spu_t ;
struct TYPE_7__ {int thread; } ;
struct TYPE_9__ {TYPE_1__ prerender; } ;
typedef TYPE_3__ spu_private_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(spu_t *VAR_0)
{
    spu_private_t *VAR_1 = VAR_0->p;

    FUNC_1(VAR_1->prerender.thread);
    FUNC_2(VAR_1->prerender.thread, ((void*)0));

    FUNC_0(VAR_0);
    FUNC_3(VAR_0);
}
