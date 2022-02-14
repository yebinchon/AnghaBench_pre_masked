
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {char* psz_realm; char* psz_username; char* psz_password; } ;
typedef TYPE_1__ vlc_credential ;
struct TYPE_17__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_18__ {char* netbios_name; int p_session; int url; } ;
typedef TYPE_3__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,char const*,char const*,char const*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_2__*,char*,char*,int ,int ,...) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_12( stream_t *VAR_6 )
{
    int VAR_7 = VAR_4;
    access_sys_t *VAR_8 = VAR_6->p_sys;
    vlc_credential VAR_9;
    char *VAR_10;
    const char *VAR_11, *VAR_12, *VAR_13;
    bool VAR_14 = 0;

    FUNC_10( &VAR_9, &VAR_8->url );
    VAR_10 = FUNC_6( VAR_6, "smb-domain" );
    VAR_9.psz_realm = VAR_10 ? VAR_10 : ((void*)0);

    FUNC_9( &VAR_9, VAR_6, "smb-user", "smb-pwd",
                        ((void*)0), ((void*)0) );

    if( !VAR_9.psz_username )
    {
        VAR_11 = "Guest";
        VAR_12 = "";
        VAR_14 = 1;
    }
    else
    {
        VAR_11 = VAR_9.psz_username;
        VAR_12 = VAR_9.psz_password;
    }
    VAR_13 = VAR_9.psz_realm ? VAR_9.psz_realm : VAR_8->netbios_name;


    int VAR_15 = FUNC_4( VAR_6, VAR_11, VAR_12, VAR_13 );
    if( VAR_15 == VAR_1 )
        goto error;

    if( VAR_15 == VAR_0 )
    {
        if (FUNC_7(VAR_6, "smb-dialog-failed") != 0)
        {


            goto error;
        }
        while( VAR_15 == VAR_0
            && FUNC_9( &VAR_9, VAR_6, "smb-user", "smb-pwd",
                                   VAR_2,
                                   VAR_3, VAR_8->netbios_name ) )
        {
            VAR_14 = 0;
            VAR_11 = VAR_9.psz_username;
            VAR_12 = VAR_9.psz_password;
            VAR_13 = VAR_9.psz_realm ? VAR_9.psz_realm
                                              : VAR_8->netbios_name;
            VAR_15 = FUNC_4( VAR_6, VAR_11, VAR_12, VAR_13 );
        }

        if( VAR_15 != 0 )
        {
            FUNC_2( VAR_6, "Unable to login" );
            goto error;
        }
    }
    FUNC_0( VAR_15 == 0 );

    if( FUNC_5( VAR_8->p_session ) == 1 )
    {
        FUNC_3( VAR_6, "Login failure but you were logged in as a Guest");
        VAR_14 = 1;
    }

    FUNC_3( VAR_6, "Creds: username = '%s', domain = '%s'",
             VAR_11, VAR_13 );
    if( !VAR_14 )
        FUNC_11( &VAR_9, VAR_6 );

    VAR_7 = VAR_5;
error:
    FUNC_8( &VAR_9 );
    FUNC_1( VAR_10 );
    return VAR_7;
}
