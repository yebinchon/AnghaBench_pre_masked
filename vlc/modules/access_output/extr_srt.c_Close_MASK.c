
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_4__ {int i_poll_id; int sock; int lock; } ;
typedef TYPE_2__ sout_access_out_sys_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( vlc_object_t * VAR_0 )
{
    sout_access_out_t *VAR_1 = (sout_access_out_t*)VAR_0;
    sout_access_out_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_4( &VAR_2->lock );

    FUNC_3( VAR_2->i_poll_id, VAR_2->sock );
    FUNC_1( VAR_2->sock );
    FUNC_2( VAR_2->i_poll_id );

    FUNC_0();
}
