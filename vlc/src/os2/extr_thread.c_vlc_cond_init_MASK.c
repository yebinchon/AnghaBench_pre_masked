
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ signaled; scalar_t__ waiters; int hevAck; int hev; } ;
typedef TYPE_1__ vlc_cond_t ;


 scalar_t__ FUNC_0 (int *,int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;

void FUNC_2 (vlc_cond_t *VAR_1)
{
    if (FUNC_0 (((void*)0), &VAR_1->hev, 0, VAR_0) ||
        FUNC_0 (((void*)0), &VAR_1->hevAck, 0, VAR_0))
        FUNC_1();

    VAR_1->waiters = 0;
    VAR_1->signaled = 0;
}
