
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* p; } ;
typedef TYPE_5__ vout_thread_t ;
typedef int picture_t ;
struct TYPE_12__ {int video; } ;
struct TYPE_9__ {TYPE_5__* sys; } ;
struct TYPE_14__ {TYPE_4__ fmt_out; TYPE_1__ owner; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_10__ {int chain_interactive; int lock; } ;
struct TYPE_11__ {TYPE_2__ filter; } ;


 int * FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static picture_t *FUNC_4(filter_t *VAR_0)
{
    vout_thread_t *VAR_1 = VAR_0->owner.sys;

    FUNC_3(&VAR_1->p->filter.lock);
    if (FUNC_1(VAR_1->p->filter.chain_interactive))


        return FUNC_0(VAR_0);

    return FUNC_2(&VAR_0->fmt_out.video);
}
