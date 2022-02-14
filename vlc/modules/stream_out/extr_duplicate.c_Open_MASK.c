
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {TYPE_2__* p_sys; int pf_control; int pf_send; int pf_del; int pf_add; int p_next; int p_sout; TYPE_3__* p_cfg; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_12__ {int i_nb_streams; char** pp_streams; int i_nb_last_streams; char** pp_last_streams; int i_nb_select; char** ppsz_select; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_13__ {char* psz_value; int psz_name; struct TYPE_13__* p_next; } ;
typedef TYPE_3__ config_chain_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char**,TYPE_1__*) ;
 int FUNC_1 (int,char**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 TYPE_1__* FUNC_6 (int ,char*,int ,TYPE_1__**) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_10( vlc_object_t *VAR_7 )
{
    sout_stream_t *VAR_8 = (sout_stream_t*)VAR_7;
    sout_stream_sys_t *VAR_9;
    config_chain_t *VAR_10;

    FUNC_4( VAR_8, "creating 'duplicate'" );

    VAR_9 = FUNC_3( sizeof( sout_stream_sys_t ) );
    if( !VAR_9 )
        return VAR_5;

    FUNC_1( VAR_9->i_nb_streams, VAR_9->pp_streams );
    FUNC_1( VAR_9->i_nb_last_streams, VAR_9->pp_last_streams );
    FUNC_1( VAR_9->i_nb_select, VAR_9->ppsz_select );

    for( VAR_10 = VAR_8->p_cfg; VAR_10 != ((void*)0); VAR_10 = VAR_10->p_next )
    {
        if( !FUNC_9( VAR_10->psz_name, "dst", FUNC_8( "dst" ) ) )
        {
            sout_stream_t *VAR_11, *VAR_12;

            FUNC_4( VAR_8, " * adding `%s'", VAR_10->psz_value );
            VAR_11 = FUNC_6( VAR_8->p_sout, VAR_10->psz_value,
                VAR_8->p_next, &VAR_12 );

            if( VAR_11 )
            {
                FUNC_0( VAR_9->i_nb_streams, VAR_9->pp_streams, VAR_11 );
                FUNC_0( VAR_9->i_nb_last_streams, VAR_9->pp_last_streams,
                    VAR_12 );
                FUNC_0( VAR_9->i_nb_select, VAR_9->ppsz_select, ((void*)0) );
            }
        }
        else if( !FUNC_9( VAR_10->psz_name, "select", FUNC_8( "select" ) ) )
        {
            char *VAR_13 = VAR_10->psz_value;
            if( VAR_9->i_nb_select > 0 && VAR_13 && *VAR_13 )
            {
                char **VAR_14 = &VAR_9->ppsz_select[VAR_9->i_nb_select - 1];

                if( *VAR_14 )
                {
                    FUNC_5( VAR_8, " * ignore selection `%s' (it already has `%s')",
                             VAR_13, *VAR_14 );
                }
                else
                {
                    FUNC_4( VAR_8, " * apply selection `%s'", VAR_13 );
                    *VAR_14 = FUNC_7( VAR_13 );
                }
            }
        }
        else
        {
            FUNC_5( VAR_8, " * ignore unknown option `%s'", VAR_10->psz_name );
        }
    }

    if( VAR_9->i_nb_streams == 0 )
    {
        FUNC_5( VAR_8, "no destination given" );
        FUNC_2( VAR_9 );

        return VAR_4;
    }

    VAR_8->pf_add = VAR_0;
    VAR_8->pf_del = VAR_2;
    VAR_8->pf_send = VAR_3;
    VAR_8->pf_control = VAR_1;

    VAR_8->p_sys = VAR_9;

    return VAR_6;
}
