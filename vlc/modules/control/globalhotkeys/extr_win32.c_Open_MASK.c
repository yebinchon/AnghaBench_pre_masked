
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_7__ {int lock; int wait; int thread; int * hotkeyWindow; } ;
typedef TYPE_2__ intf_sys_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11( vlc_object_t *VAR_5 )
{
    intf_thread_t *VAR_6 = (intf_thread_t *)VAR_5;
    intf_sys_t *VAR_7 = FUNC_1( sizeof (intf_sys_t) );

    if( VAR_7 == ((void*)0) )
        return VAR_2;

    VAR_6->p_sys = VAR_7;
    VAR_7->hotkeyWindow = ((void*)0);
    FUNC_8( &VAR_7->lock );
    FUNC_4( &VAR_7->wait );

    if( FUNC_2( &VAR_7->thread, VAR_1, VAR_6, VAR_4 ) )
    {
        FUNC_7( &VAR_7->lock );
        FUNC_3( &VAR_7->wait );
        FUNC_0( VAR_7 );
        VAR_6->p_sys = ((void*)0);

        return VAR_2;
    }

    FUNC_9( &VAR_7->lock );
    while( VAR_7->hotkeyWindow == ((void*)0) )
        FUNC_5( &VAR_7->wait, &VAR_7->lock );
    if( VAR_7->hotkeyWindow == VAR_0 )
    {
        FUNC_10( &VAR_7->lock );
        FUNC_6( VAR_7->thread, ((void*)0) );
        FUNC_7( &VAR_7->lock );
        FUNC_3( &VAR_7->wait );
        FUNC_0( VAR_7 );
        VAR_6->p_sys = ((void*)0);

        return VAR_2;
    }
    FUNC_10( &VAR_7->lock );

    return VAR_3;
}
