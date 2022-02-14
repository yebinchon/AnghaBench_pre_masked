
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_5__ {int lock; scalar_t__ notification; int player_listener; int playlist; } ;
typedef TYPE_2__ intf_sys_t ;
typedef int GError ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int **) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( vlc_object_t *VAR_0 )
{
    intf_thread_t *VAR_1 = ( intf_thread_t* ) VAR_0;
    intf_sys_t *VAR_2 = VAR_1->p_sys;

    vlc_player_t *VAR_3 = FUNC_8(VAR_2->playlist);
    FUNC_5(VAR_3);
    FUNC_6(VAR_3, VAR_2->player_listener);
    FUNC_7(VAR_3);

    if( VAR_2->notification )
    {
        GError *VAR_4 = ((void*)0);
        FUNC_2( VAR_2->notification, &VAR_4 );
        FUNC_1( VAR_2->notification );
    }

    FUNC_4( &VAR_2->lock );
    FUNC_0( VAR_2 );
    FUNC_3();
}
