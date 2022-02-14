
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* p; } ;
typedef TYPE_4__ vout_thread_t ;
struct TYPE_8__ {unsigned int num; unsigned int den; } ;
struct TYPE_9__ {int mode; TYPE_1__ ratio; } ;
struct TYPE_10__ {TYPE_2__ crop; } ;
struct TYPE_12__ {int display_lock; int * display; int window_lock; TYPE_3__ source; int dummy; } ;
typedef TYPE_5__ vout_thread_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int,unsigned int,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5(vout_thread_t *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
    vout_thread_sys_t *VAR_5 = VAR_2->p;
    FUNC_0(!VAR_5->dummy);

    FUNC_1(&VAR_5->window_lock);
    if (VAR_3 != 0 && VAR_4 != 0) {
        VAR_5->source.crop.mode = VAR_1;
        VAR_5->source.crop.ratio.num = VAR_3;
        VAR_5->source.crop.ratio.den = VAR_4;
    } else
        VAR_5->source.crop.mode = VAR_0;

    FUNC_4(VAR_2);

    FUNC_1(&VAR_5->display_lock);
    FUNC_2(&VAR_5->window_lock);

    if (VAR_5->display != ((void*)0))
        FUNC_3(VAR_5->display, VAR_3, VAR_4, 0, 0, 0, 0);
    FUNC_2(&VAR_5->display_lock);
}
