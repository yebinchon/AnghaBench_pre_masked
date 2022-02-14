
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_port; int psz_host; int member_0; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_object_t ;
struct TYPE_10__ {int pf_control; int pf_block; int psz_url; TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_11__ {int i_poll_id; int sock; int lock; int i_port; int psz_host; } ;
typedef TYPE_3__ stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(vlc_object_t *VAR_5)
{
    stream_t *VAR_6 = (stream_t*)VAR_5;
    stream_sys_t *VAR_7 = ((void*)0);
    vlc_url_t VAR_8 = { 0 };

    VAR_7 = FUNC_11( VAR_5, 1, sizeof( *VAR_7 ) );
    if( FUNC_6( VAR_7 == ((void*)0) ) )
        return VAR_3;

    FUNC_5();

    FUNC_10( &VAR_7->lock );

    VAR_6->p_sys = VAR_7;

    if ( FUNC_8( &VAR_8, VAR_6->psz_url ) == -1 )
    {
        FUNC_0( VAR_6, "Failed to parse input URL (%s)",
            VAR_6->psz_url );
        goto failed;
    }

    VAR_7->psz_host = FUNC_12( VAR_5, VAR_8.psz_host );
    VAR_7->i_port = VAR_8.i_port;

    FUNC_7( &VAR_8 );

    VAR_7->i_poll_id = FUNC_2();
    if ( VAR_7->i_poll_id == -1 )
    {
        FUNC_0( VAR_6, "Failed to create poll id for SRT socket." );
        goto failed;
    }

    if ( !FUNC_4( VAR_6 ) )
    {
        FUNC_0( VAR_6, "Failed to schedule connect");

        goto failed;
    }

    VAR_6->pf_block = VAR_0;
    VAR_6->pf_control = VAR_1;

    return VAR_4;

failed:
    FUNC_9( &VAR_7->lock );

    if ( VAR_7->sock != -1 ) FUNC_1( VAR_7->sock );
    if ( VAR_7->i_poll_id != -1 ) FUNC_3( VAR_7->i_poll_id );

    return VAR_2;
}
