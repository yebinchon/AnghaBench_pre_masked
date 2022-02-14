
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_mutex_t ;
struct TYPE_3__ {scalar_t__ hev; int hevAck; int waiters; int signaled; } ;
typedef TYPE_1__ vlc_cond_t ;
typedef scalar_t__ ULONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10 (vlc_cond_t *VAR_4, vlc_mutex_t *VAR_5,
                                 ULONG VAR_6)
{
    ULONG VAR_7;
    ULONG VAR_8;

    FUNC_5(VAR_4->hev != VAR_3);

    do
    {
        FUNC_9();

        FUNC_4 (&VAR_4->waiters);

        FUNC_8 (VAR_5);

        do
        {
            VAR_8 = FUNC_6( VAR_4->hev, VAR_6 );
            if (VAR_8 == VAR_2)
                FUNC_1 (VAR_4->hev, &VAR_7);
        } while (VAR_8 == VAR_2 &&
                 FUNC_2 (&VAR_4->signaled, 0, 1) == 0);

        FUNC_3 (&VAR_4->waiters);

        FUNC_0 (VAR_4->hevAck);

        FUNC_7 (VAR_5);
    } while( VAR_8 == VAR_0 );

    return VAR_8 ? VAR_1 : 0;
}
