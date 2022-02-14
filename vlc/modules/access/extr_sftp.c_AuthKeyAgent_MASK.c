
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct libssh2_agent_publickey {int comment; } ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int ssh_session; } ;
typedef TYPE_2__ access_sys_t ;
typedef int LIBSSH2_AGENT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,struct libssh2_agent_publickey**,struct libssh2_agent_publickey*) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char const*,struct libssh2_agent_publickey*) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int FUNC_8 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_9( stream_t *VAR_2, const char *VAR_3 )
{
    access_sys_t* VAR_4 = VAR_2->p_sys;
    int VAR_5 = VAR_0;
    LIBSSH2_AGENT *VAR_6 = ((void*)0);
    struct libssh2_agent_publickey *VAR_7 = ((void*)0),
                                   *VAR_8 = ((void*)0);

    if( !VAR_3 || !VAR_3[0] )
        return VAR_5;

    VAR_6 = FUNC_4( VAR_4->ssh_session );

    if( !VAR_6 )
    {
        FUNC_7( VAR_2, "Failed to initialize key agent" );
        goto bailout;
    }
    if( FUNC_0( VAR_6 ) )
    {
        FUNC_7( VAR_2, "Failed to connect key agent" );
        goto bailout;
    }
    if( FUNC_5( VAR_6 ) )
    {
        FUNC_7( VAR_2, "Failed to request identities" );
        goto bailout;
    }

    while( FUNC_3( VAR_6, &VAR_7, VAR_8 ) == 0 )
    {
        FUNC_7( VAR_2, "Using key %s", VAR_7->comment );
        if( FUNC_6( VAR_6, VAR_3, VAR_7 ) == 0 )
        {
            FUNC_8( VAR_2, "Public key agent authentication succeeded" );
            VAR_5 = VAR_1;
            goto bailout;
        }
        FUNC_7( VAR_2, "Public key agent authentication failed" );
        VAR_8 = VAR_7;
    }

bailout:
    if( VAR_6 )
    {
        FUNC_1( VAR_6 );
        FUNC_2( VAR_6 );
    }
    return VAR_5;
}
