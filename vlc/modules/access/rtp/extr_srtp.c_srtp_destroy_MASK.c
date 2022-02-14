
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rtp; int rtcp; } ;
typedef TYPE_1__ srtp_session_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3 (srtp_session_t *VAR_0)
{
    FUNC_0 (VAR_0 != ((void*)0));

    FUNC_2 (&VAR_0->rtcp);
    FUNC_2 (&VAR_0->rtp);
    FUNC_1 (VAR_0);
}
