
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_action_id_t ;
struct TYPE_7__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_6__ {int config; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,char**) ;
 scalar_t__ FUNC_2 (char**) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8( intf_thread_t *VAR_0 )
{
    for( ;; )
    {
        char *VAR_1, *VAR_2;
        if( FUNC_2( &VAR_1 ) )
            return;

        if( VAR_1 == ((void*)0) )
            return;

        while( (FUNC_1( VAR_0->p_sys->config, VAR_1, &VAR_2 ) == 0)
                && (VAR_2 != ((void*)0)) )
        {
            if( !FUNC_4( "key-", VAR_2, 4 ) )
            {
                vlc_action_id_t VAR_3 = FUNC_6( VAR_2 );
                if( VAR_3 )
                    FUNC_5( FUNC_7(VAR_0), "key-action", VAR_3 );
                else
                    FUNC_3( VAR_0, "Unknown hotkey '%s'", VAR_2 );
            }
            else
            {
                FUNC_3( VAR_0, "this doesn't appear to be a valid keycombo "
                                 "lirc sent us. Please look at the "
                                 "doc/lirc/example.lirc file in VLC" );
                break;
            }
        }
        FUNC_0( VAR_1 );
    }
}
