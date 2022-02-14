
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_node_t ;
struct TYPE_10__ {int psz_base_url; int file; } ;
typedef TYPE_2__ access_sys_t ;
struct TYPE_11__ {int permissions; } ;
typedef TYPE_3__ LIBSSH2_SFTP_ATTRIBUTES ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char**,char*,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,size_t,TYPE_3__*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (struct vlc_readdir_helper*,char*,int *,char*,int,int ) ;
 int FUNC_8 (struct vlc_readdir_helper*,int) ;
 int FUNC_9 (struct vlc_readdir_helper*,TYPE_1__*,int *) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11 (stream_t *VAR_7, input_item_node_t *VAR_8)
{
    access_sys_t *VAR_9 = VAR_7->p_sys;
    LIBSSH2_SFTP_ATTRIBUTES VAR_10;
    int VAR_11 = VAR_6;
    int VAR_12;





    size_t VAR_13 = 1024;
    char *VAR_14 = FUNC_4( VAR_13 );

    if( !VAR_14 )
        return VAR_5;

    struct vlc_readdir_helper VAR_15;
    FUNC_9( &VAR_15, VAR_7, VAR_8 );

    while( VAR_11 == VAR_6
        && 0 != ( VAR_12 = FUNC_3( VAR_9->file, VAR_14, VAR_13, &VAR_10 ) ) )
    {
        if( VAR_12 < 0 )
        {
            if( VAR_12 == VAR_3 )
            {

                FUNC_5( VAR_7, "skipped too long file name" );
                continue;
            }
            if( VAR_12 == VAR_4 )
            {
                continue;
            }
            FUNC_6( VAR_7, "directory read failed" );
            break;
        }



        char *VAR_16, *VAR_17;

        VAR_17 = FUNC_10( VAR_14 );
        if( VAR_17 == ((void*)0) )
        {
            VAR_11 = VAR_5;
            break;
        }

        if( FUNC_1( &VAR_16, "%d/%s", VAR_9->psz_base_url, VAR_17 ) == -1 )
        {
            FUNC_2( VAR_17 );
            VAR_11 = VAR_5;
            break;
        }
        FUNC_2( VAR_17 );

        int VAR_18 = FUNC_0( VAR_10.permissions ) ? VAR_1 : VAR_2;
        VAR_11 = FUNC_7( &VAR_15, VAR_16, ((void*)0), VAR_14,
                                            VAR_18, VAR_0 );
        FUNC_2( VAR_16 );
    }

    FUNC_8( &VAR_15, VAR_11 == VAR_6 );
    FUNC_2( VAR_14 );
    return VAR_11;
}
