
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_10__ {int format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_8__ {int original; int display_pool; int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

picture_t *FUNC_5(vout_thread_t *VAR_0)
{
    FUNC_0(!VAR_0->p->dummy);
    picture_t *VAR_1 = FUNC_3(VAR_0->p->display_pool);
    if (FUNC_1(VAR_1 != ((void*)0))) {
        FUNC_2(VAR_1);
        FUNC_4(&VAR_1->format, &VAR_0->p->original);
    }
    return VAR_1;
}
