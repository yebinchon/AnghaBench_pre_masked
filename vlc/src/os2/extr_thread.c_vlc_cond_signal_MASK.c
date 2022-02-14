
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hev; int hevAck; int signaled; int waiters; } ;
typedef TYPE_1__ vlc_cond_t ;
typedef int ULONG ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6 (vlc_cond_t *VAR_2)
{
    if (VAR_2->hev == VAR_0)
        FUNC_5 (VAR_2);

    if (!FUNC_3 (&VAR_2->waiters, 0, 0))
    {
        ULONG VAR_3;

        FUNC_4 (&VAR_2->signaled, 1);
        FUNC_0 (VAR_2->hev);

        FUNC_2 (VAR_2->hevAck, VAR_1);
        FUNC_1 (VAR_2->hevAck, &VAR_3);
    }
}
