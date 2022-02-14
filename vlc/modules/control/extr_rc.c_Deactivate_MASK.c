
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {int i_socket; int status_lock; struct TYPE_6__* psz_unix_path; int pi_socket_listen; int thread; int player_listener; int player_aout_listener; int playlist; } ;
typedef TYPE_2__ intf_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12( vlc_object_t *VAR_0 )
{
    intf_thread_t *VAR_1 = (intf_thread_t*)VAR_0;
    intf_sys_t *VAR_2 = VAR_1->p_sys;

    vlc_player_t *VAR_3 = FUNC_11(VAR_2->playlist);
    FUNC_7(VAR_3);
    FUNC_10(VAR_3, VAR_2->player_aout_listener);
    FUNC_8(VAR_3, VAR_2->player_listener);
    FUNC_9(VAR_3);

    FUNC_4( VAR_2->thread );
    FUNC_5( VAR_2->thread, ((void*)0) );

    FUNC_2( VAR_2->pi_socket_listen );
    if( VAR_2->i_socket != -1 )
        FUNC_1( VAR_2->i_socket );







    FUNC_6( &VAR_2->status_lock );
    FUNC_0( VAR_2 );
}
