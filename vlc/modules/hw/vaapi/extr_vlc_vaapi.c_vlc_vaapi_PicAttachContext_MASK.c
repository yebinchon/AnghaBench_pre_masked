
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_7__ {int ctx; TYPE_2__* picref; } ;
struct TYPE_9__ {TYPE_1__ ctx; } ;
typedef TYPE_3__ picture_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;

void
FUNC_3(picture_t *VAR_0)
{
    FUNC_0(VAR_0);
    FUNC_1(VAR_0->p_sys != ((void*)0));

    picture_sys_t *VAR_1 = VAR_0->p_sys;
    VAR_1->ctx.picref = VAR_0;
    FUNC_2(VAR_0, &VAR_1->ctx.ctx);
}
