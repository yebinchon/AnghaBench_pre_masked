
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int i_port; int psz_host; int * psz_path; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_object_t ;
struct TYPE_26__ {char* psz_username; int * psz_password; } ;
typedef TYPE_2__ vlc_credential ;
struct libssh2_knownhost {int dummy; } ;
struct TYPE_27__ {char* psz_location; char* psz_url; int pf_control; int pf_readdir; TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_28__ {int i_socket; char* psz_base_url; int file; int sftp_session; int filesize; int ssh_session; } ;
typedef TYPE_4__ access_sys_t ;
struct TYPE_29__ {int filesize; int permissions; } ;
typedef TYPE_5__ LIBSSH2_SFTP_ATTRIBUTES ;
typedef int LIBSSH2_KNOWNHOSTS ;


 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,char*,char*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (char*) ;
 int VAR_18 ;
 int FUNC_9 (char**,char*,char*,...) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int ,char const*,size_t,int,struct libssh2_knownhost**) ;
 int FUNC_13 (int *,int ,int,char const*,size_t,int,struct libssh2_knownhost**) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int *,char*,int ) ;
 char* FUNC_17 (int ,size_t*,int*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,int ,int ) ;
 int FUNC_20 (int ,char*) ;
 scalar_t__ FUNC_21 (int ,char*,TYPE_5__*) ;
 int FUNC_22 (int ,char*,int,char*,size_t const,int ) ;
 char* FUNC_23 (int ,char*,size_t) ;
 scalar_t__ FUNC_24 (int ,char*,int *) ;
 char* FUNC_25 (size_t const) ;
 int FUNC_26 (TYPE_3__*,char*) ;
 int FUNC_27 (TYPE_3__*,char*,...) ;
 int FUNC_28 (TYPE_3__*,char*,...) ;
 scalar_t__ FUNC_29 (char*,char*) ;
 char* FUNC_30 (char*) ;
 size_t FUNC_31 (char*) ;
 int * FUNC_32 (char*,char*) ;
 int FUNC_33 (TYPE_3__*,char*) ;
 int FUNC_34 (TYPE_1__*) ;
 scalar_t__ FUNC_35 (TYPE_1__*,char*) ;
 int FUNC_36 (TYPE_2__*) ;
 scalar_t__ FUNC_37 (TYPE_2__*,TYPE_3__*,char*,char*,int ,int ,...) ;
 int FUNC_38 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_39 (TYPE_2__*,TYPE_3__*) ;
 TYPE_4__* FUNC_40 (int *,int,int) ;
 char* FUNC_41 (char*,char*) ;
 char* FUNC_42 (int *) ;

__attribute__((used)) static int FUNC_43( vlc_object_t* VAR_19 )
{
    stream_t* VAR_20 = (stream_t*)VAR_19;
    access_sys_t* VAR_21;
    vlc_credential VAR_22;
    char* VAR_23 = ((void*)0);
    char *VAR_24 = ((void*)0);
    char* VAR_25 = ((void*)0);
    int VAR_26;
    vlc_url_t VAR_27;
    size_t VAR_28;
    int VAR_29;
    int VAR_30 = VAR_14;

    if( !VAR_20->psz_location )
        return VAR_14;

    VAR_21 = VAR_20->p_sys = FUNC_40( VAR_19, 1, sizeof( access_sys_t ) );
    if( !VAR_21 ) return VAR_15;

    VAR_21->i_socket = -1;


    if( FUNC_35( &VAR_27, VAR_20->psz_url ) != 0 )
    {
        FUNC_34( &VAR_27 );
        return VAR_14;
    }
    FUNC_38( &VAR_22, &VAR_27 );
    if( VAR_27.psz_path != ((void*)0) )
    {
        VAR_23 = FUNC_42( VAR_27.psz_path );
        if( VAR_23 == ((void*)0) )
            goto error;
    }


    if( FUNC_4( VAR_27.psz_host ) )
    {
        FUNC_27( VAR_20, "Unable to extract host from %s", VAR_20->psz_url );
        goto error;
    }

    if( VAR_27.i_port <= 0 )
        VAR_26 = FUNC_33( VAR_20, "sftp-port" );
    else
        VAR_26 = VAR_27.i_port;


    if( FUNC_7( VAR_20, VAR_27.psz_host, VAR_26 ) != VAR_17 )
        goto error;


    LIBSSH2_KNOWNHOSTS *VAR_31 = FUNC_15( VAR_21->ssh_session );
    if( !VAR_31 )
        goto error;

    VAR_25 = FUNC_10( VAR_16 );
    char *VAR_32;
    if( FUNC_9( &VAR_32, "%s/.ssh/known_hosts", VAR_25 ) != -1 )
    {
        if( FUNC_16( VAR_31, VAR_32,
                                        VAR_3 ) < 0 )
            FUNC_27( VAR_20, "Failure reading known_hosts '%s'", VAR_32 );
        FUNC_11( VAR_32 );
    }

    const char *VAR_33 = FUNC_17( VAR_21->ssh_session, &VAR_28, &VAR_29 );
    struct libssh2_knownhost *VAR_34;
    int VAR_35;

    switch( VAR_29 )
    {
        case 132:
            VAR_35 = VAR_9;
            break;

        case 136:
            VAR_35 = VAR_8;
            break;
        default:
            FUNC_27( VAR_20, "Host uses unrecognized session-key algorithm" );
            FUNC_14( VAR_31 );
            goto error;

    }
    int VAR_36 = FUNC_12( VAR_31, VAR_27.psz_host,
                                         VAR_33, VAR_28,
                                         VAR_10 |
                                         VAR_4 |
                                         VAR_35,
                                         &VAR_34 );


    FUNC_14( VAR_31 );


    switch(VAR_36)
    {
    case 131:
    case 128:
        FUNC_26( VAR_20, "Unable to check the remote host" );
        break;
    case 130:
        FUNC_26( VAR_20, "Succesfuly matched the host" );
        break;
    case 129:
        FUNC_27( VAR_20, "The host does not match !! The remote key changed !!" );
        goto error;
    }

    FUNC_37( &VAR_22, VAR_20, "sftp-user", "sftp-pwd",
                        ((void*)0), ((void*)0) );
    char* VAR_37 = ((void*)0);
    bool VAR_38 = 0;
    do
    {
        if (!VAR_22.psz_username || !VAR_22.psz_username[0])
            continue;

        if( !VAR_24 )
        {
            VAR_24 = FUNC_30( VAR_22.psz_username );
            VAR_37 =
                FUNC_23( VAR_21->ssh_session, VAR_22.psz_username,
                                       FUNC_31( VAR_22.psz_username ) );
        }
        else if( FUNC_29( VAR_24, VAR_22.psz_username ) != 0 )
        {
            FUNC_28( VAR_20, "The username changed, starting a new ssh session" );

            FUNC_6( VAR_20 );
            if( FUNC_7( VAR_20, VAR_27.psz_host, VAR_26 ) != VAR_17 )
                goto error;

            VAR_38 = 0;
            FUNC_11( VAR_24 );
            VAR_24 = FUNC_30( VAR_22.psz_username );
            VAR_37 =
                FUNC_23( VAR_21->ssh_session, VAR_22.psz_username,
                                       FUNC_31( VAR_22.psz_username ) );
        }
        if( !VAR_24 || !VAR_37 )
            goto error;



        if( FUNC_32( VAR_37, "publickey" ) != ((void*)0) && !VAR_38 )
        {


            VAR_38 = 1;
            if( FUNC_1( VAR_20, VAR_22.psz_username ) == VAR_17
             || FUNC_2( VAR_20, VAR_25, VAR_22.psz_username ) == VAR_17 )
                break;
        }

        if( FUNC_32( VAR_37, "password" ) != ((void*)0)
         && VAR_22.psz_password != ((void*)0)
         && FUNC_24( VAR_21->ssh_session,
                                       VAR_22.psz_username,
                                       VAR_22.psz_password ) == 0 )
        {
            FUNC_39( &VAR_22, VAR_20 );
            break;
        }

        FUNC_28( VAR_20, "sftp auth failed for %s", VAR_22.psz_username );
    } while( FUNC_37( &VAR_22, VAR_20, "sftp-user", "sftp-pwd",
                                FUNC_8("SFTP authentication"),
                                FUNC_8("Please enter a valid login and password for "
                                "the sftp connexion to %s"), VAR_27.psz_host ) );


    VAR_21->sftp_session = FUNC_18( VAR_21->ssh_session );

    if( !VAR_21->sftp_session )
    {
        FUNC_27( VAR_20, "Unable to initialize the SFTP session" );
        goto error;
    }


    if( !VAR_23 )
    {
        const size_t VAR_39 = 1024;
        int VAR_40;

        char* VAR_41 = FUNC_25( VAR_39 );
        if( !VAR_41 )
            goto error;

        VAR_40 = FUNC_22( VAR_21->sftp_session, ".", 1,
                                          VAR_41, VAR_39 - 1,
                                          VAR_11 );
        if( VAR_40 <= 0 )
        {
            FUNC_27( VAR_20, "Impossible to get the Home directory" );
            FUNC_11( VAR_41 );
            goto error;
        }
        VAR_41[VAR_40] = '\0';
        VAR_23 = VAR_41;


        char *VAR_42 = FUNC_41( VAR_23, "sftp" );
        if( !VAR_42 )
            goto error;
        if( -1 == FUNC_9( &VAR_21->psz_base_url, "sftp://%s%s", VAR_20->psz_location, VAR_42 + 7 ) )
        {
            FUNC_11( VAR_42 );
            goto error;
        }
        FUNC_11( VAR_42 );
    }


    LIBSSH2_SFTP_ATTRIBUTES VAR_43;
    if( FUNC_21( VAR_21->sftp_session, VAR_23, &VAR_43 ) )
    {
        FUNC_27( VAR_20, "Impossible to get information about the remote path %s", VAR_23 );
        goto error;
    }

    if( !FUNC_5( VAR_43.permissions ))
    {

        VAR_21->file = FUNC_19( VAR_21->sftp_session, VAR_23, VAR_2, 0 );
        VAR_21->filesize = VAR_43.filesize;

        FUNC_0( VAR_12, ((void*)0), VAR_0, VAR_13 );
    }
    else
    {

        VAR_21->file = FUNC_20( VAR_21->sftp_session, VAR_23 );

        VAR_20->pf_readdir = VAR_1;
        VAR_20->pf_control = VAR_18;

        if( !VAR_21->psz_base_url )
        {
            if( FUNC_9( &VAR_21->psz_base_url, "sftp://%s", VAR_20->psz_location ) == -1 )
                goto error;


            size_t VAR_44 = FUNC_31( VAR_21->psz_base_url );
            if( VAR_44 > 0 && VAR_21->psz_base_url[ VAR_44 - 1 ] == '/' )
                VAR_21->psz_base_url[ VAR_44 - 1 ] = 0;
        }
    }

    if( !VAR_21->file )
    {
        FUNC_27( VAR_20, "Unable to open the remote path %s", VAR_23 );
        goto error;
    }

    VAR_30 = VAR_17;

error:
    FUNC_11( VAR_25 );
    FUNC_11( VAR_24 );
    FUNC_11( VAR_23 );
    FUNC_36( &VAR_22 );
    FUNC_34( &VAR_27 );
    if( VAR_30 != VAR_17 ) {
        FUNC_3( VAR_19 );
    }
    return VAR_30;
}
