
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_5__ {scalar_t__ i_poll_id; scalar_t__ sock; int b_interrupted; int lock; } ;
typedef TYPE_2__ sout_access_out_sys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
    sout_access_out_t *VAR_2 = VAR_1;
    sout_access_out_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_2( &VAR_3->lock );
    if ( VAR_3->i_poll_id >= 0 && VAR_3->sock != VAR_0 )
    {
        VAR_3->b_interrupted = 1;

        FUNC_0( VAR_2, "Waking up srt_epoll_wait");



        FUNC_1( VAR_3->i_poll_id, VAR_3->sock );
    }
    FUNC_3( &VAR_3->lock );
}
