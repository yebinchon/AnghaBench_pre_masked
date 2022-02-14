
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
typedef int input_item_node_t ;
struct TYPE_9__ {char* psz_path; int i_port; int psz_host; } ;
struct TYPE_8__ {scalar_t__ b_mlst; } ;
struct TYPE_11__ {scalar_t__ tlsmode; TYPE_2__ url; TYPE_1__ features; int * data; int out; } ;
typedef TYPE_4__ access_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char**,char*,char*,int ,int ,char*,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (struct vlc_readdir_helper*,char*,int *,char*,int,int ) ;
 int FUNC_7 (struct vlc_readdir_helper*,int) ;
 int FUNC_8 (struct vlc_readdir_helper*,TYPE_3__*,int *) ;
 char* FUNC_9 (int *) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11 (stream_t *VAR_7, input_item_node_t *VAR_8)
{
    access_sys_t *VAR_9 = VAR_7->p_sys;
    int VAR_10 = VAR_6;

    FUNC_1( VAR_9->data != ((void*)0) );
    FUNC_1( !VAR_9->out );

    struct vlc_readdir_helper VAR_11;
    FUNC_8( &VAR_11, VAR_7, VAR_8 );

    while (VAR_10 == VAR_6)
    {
        char *VAR_12;
        int VAR_13 = VAR_4;

        char *VAR_14 = FUNC_9( VAR_9->data );
        if( VAR_14 == ((void*)0) )
            break;

        if( VAR_9->features.b_mlst )
        {

            if( FUNC_5( VAR_14, "type=dir" ) )
                VAR_13 = VAR_2;
            if( FUNC_5( VAR_14, "type=file" ) )
                VAR_13 = VAR_3;


            VAR_12 = FUNC_4( VAR_14, ' ' );
            if( VAR_12 )
                VAR_12++;
            else
            {
                FUNC_3( VAR_7, "Empty filename in MLST list" );
                FUNC_2( VAR_14 );
                continue;
            }
        }
        else
            VAR_12 = VAR_14;

        char *VAR_15;
        char *VAR_16 = FUNC_10( VAR_12 );
        if( VAR_16 != ((void*)0) &&
            FUNC_0( &VAR_15, "%s://%d:%d%s%s/%s",
                      ( VAR_9->tlsmode == VAR_5 ) ? "ftp" :
                      ( ( VAR_9->tlsmode == VAR_0 ) ? "ftps" : "ftpes" ),
                      VAR_9->url.psz_host, VAR_9->url.i_port,
                      VAR_9->url.psz_path ? "/" : "",
                      VAR_9->url.psz_path ? VAR_9->url.psz_path : "",
                      VAR_16 ) != -1 )
        {
            VAR_10 = FUNC_6( &VAR_11, VAR_15, ((void*)0), VAR_12,
                                                VAR_13, VAR_1 );
            FUNC_2( VAR_15 );
        }
        FUNC_2( VAR_16 );
        FUNC_2( VAR_14 );
    }

    FUNC_7( &VAR_11, VAR_10 == VAR_6 );
    return VAR_10;
}
