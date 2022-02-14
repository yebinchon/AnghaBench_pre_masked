
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
struct TYPE_8__ {int left; int right; int top; int bottom; } ;
struct TYPE_9__ {TYPE_1__ border; int mode; } ;
struct TYPE_10__ {TYPE_2__ crop; } ;
struct TYPE_12__ {int display_lock; int * display; int window_lock; TYPE_3__ source; int dummy; } ;
typedef TYPE_5__ vout_thread_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int,int,int,int) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5(vout_thread_t *VAR_1,
                           int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    vout_thread_sys_t *VAR_6 = VAR_1->p;
    FUNC_0(!VAR_6->dummy);

    if (VAR_2 < 0)
        VAR_2 = 0;
    if (VAR_3 < 0)
        VAR_3 = 0;
    if (VAR_4 < 0)
        VAR_4 = 0;
    if (VAR_5 < 0)
        VAR_5 = 0;

    FUNC_1(&VAR_6->window_lock);
    VAR_6->source.crop.mode = VAR_0;
    VAR_6->source.crop.border.left = VAR_2;
    VAR_6->source.crop.border.right = VAR_4;
    VAR_6->source.crop.border.top = VAR_3;
    VAR_6->source.crop.border.bottom = VAR_5;

    FUNC_4(VAR_1);

    FUNC_1(&VAR_6->display_lock);
    FUNC_2(&VAR_6->window_lock);

    if (VAR_6->display != ((void*)0))
        FUNC_3(VAR_6->display, 0, 0,
                            VAR_2, VAR_3, -VAR_4, -VAR_5);
    FUNC_2(&VAR_6->display_lock);
}
