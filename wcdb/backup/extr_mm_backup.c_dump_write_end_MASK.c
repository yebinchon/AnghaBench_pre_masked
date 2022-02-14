
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_finish; int buf_cond; int buf_lock; scalar_t__ write_error; } ;
typedef TYPE_1__ mm_backup_ctx ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(mm_backup_ctx *VAR_0)
{
    int VAR_1;


    FUNC_2(&VAR_0->buf_lock);
    {
        VAR_0->in_finish = 1;
        if (VAR_0->write_error) {
            FUNC_0("Writing thread reported error.");
            VAR_1 = -1;
        } else
            VAR_1 = 0;
    }
    FUNC_3(&VAR_0->buf_lock);
    FUNC_1(&VAR_0->buf_cond);

    return VAR_1;
}
