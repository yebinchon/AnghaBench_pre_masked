
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int pf_control; int pf_write; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_8__ {int i_poll_id; int sock; int lock; } ;
typedef TYPE_2__ sout_access_out_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (int *,int,int) ;

__attribute__((used)) static int FUNC_12( vlc_object_t *VAR_7 )
{
    sout_access_out_t *VAR_8 = (sout_access_out_t*)VAR_7;
    sout_access_out_sys_t *VAR_9 = ((void*)0);

    if (FUNC_8 ( VAR_8, "dst-port", VAR_4 )
     || FUNC_8 ( VAR_8, "src-port", VAR_4 )
     || FUNC_8 ( VAR_8, "dst-addr", VAR_5 )
     || FUNC_8 ( VAR_8, "src-addr", VAR_5 ) )
    {
         FUNC_0( VAR_8, "Valid network information is required." );
        return VAR_2;
    }

    VAR_9 = FUNC_11( VAR_7, 1, sizeof( *VAR_9 ) );
    if( FUNC_7( VAR_9 == ((void*)0) ) )
        return VAR_2;

    FUNC_6();

    FUNC_10( &VAR_9->lock );

    VAR_8->p_sys = VAR_9;

    VAR_9->i_poll_id = FUNC_2();
    if ( VAR_9->i_poll_id == -1 )
    {
        FUNC_0( VAR_8, "Failed to create poll id for SRT socket (reason: %s)",
                 FUNC_4() );

        goto failed;
    }

    if ( !FUNC_5( VAR_8 ) )
    {
        FUNC_0( VAR_8, "Failed to schedule connect");

        goto failed;
    }

    VAR_8->pf_write = VAR_6;
    VAR_8->pf_control = VAR_0;

    return VAR_3;

failed:
    FUNC_9( &VAR_9->lock );

    if ( VAR_9->sock != -1 ) FUNC_1( VAR_9->sock );
    if ( VAR_9->i_poll_id != -1 ) FUNC_3( VAR_9->i_poll_id );

    return VAR_1;
}
