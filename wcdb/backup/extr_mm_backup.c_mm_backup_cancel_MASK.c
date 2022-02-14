
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int canceled; int buf_cond; } ;
typedef TYPE_1__ mm_backup_ctx ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(mm_backup_ctx *VAR_0)
{
    VAR_0->canceled = 1;
    FUNC_1(&VAR_0->buf_cond);
    FUNC_0("Backup operation canceled.");
}
