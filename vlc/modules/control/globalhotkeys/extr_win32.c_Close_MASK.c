
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_5__ {int wait; int lock; int thread; int * hotkeyWindow; } ;
typedef TYPE_2__ intf_sys_t ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( vlc_object_t *VAR_1 )
{
    intf_thread_t *VAR_2 = (intf_thread_t *)VAR_1;
    intf_sys_t *VAR_3 = VAR_2->p_sys;


    FUNC_5( &VAR_3->lock );
    if( VAR_3->hotkeyWindow != ((void*)0) )
        FUNC_0( VAR_3->hotkeyWindow, VAR_0, 0, 0 );
    FUNC_6( &VAR_3->lock );

    FUNC_3( VAR_3->thread, ((void*)0) );
    FUNC_4( &VAR_3->lock );
    FUNC_2( &VAR_3->wait );
    FUNC_1( VAR_3 );
}
