
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int canceled; int zstrm; scalar_t__ fp; int buf_cond; int buf_lock; struct TYPE_4__* tabdesc; int write_thread; } ;
typedef TYPE_1__ mm_backup_ctx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(mm_backup_ctx *VAR_0)
{
    if (!VAR_0->canceled) {
        VAR_0->canceled = 1;
        FUNC_3(&VAR_0->buf_cond);
        FUNC_5(VAR_0->write_thread);
    }

    FUNC_2(VAR_0->tabdesc);
    FUNC_6(&VAR_0->buf_lock);
    FUNC_4(&VAR_0->buf_cond);

    if (VAR_0->fp)
        FUNC_1(VAR_0->fp);
    FUNC_0(&VAR_0->zstrm);
    FUNC_2(VAR_0);
}
