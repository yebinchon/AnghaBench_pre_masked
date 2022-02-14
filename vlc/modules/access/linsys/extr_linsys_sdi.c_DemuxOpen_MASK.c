
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {TYPE_3__* p_sys; int pf_control; int pf_demux; int * out; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {unsigned int i_forced_aspect; unsigned int i_aspect; void* psz_telx_lang; void* psz_telx; TYPE_1__* p_audios; int i_id_video; int i_last_state_change; int i_state; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_9__ {int i_group; int i_pair; int i_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (char*,char*,int*,int*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,int *,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 void* FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*,unsigned int*,unsigned int*,char*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11( vlc_object_t *VAR_7 )
{
    demux_t *VAR_8 = (demux_t *)VAR_7;
    demux_sys_t *VAR_9;
    char *VAR_10;

    if (VAR_8->out == ((void*)0))
        return VAR_3;


    VAR_8->pf_demux = VAR_1;
    VAR_8->pf_control = VAR_0;
    VAR_8->p_sys = VAR_9 = FUNC_0( 1, sizeof( demux_sys_t ) );
    if( FUNC_6(!VAR_9 ) )
        return VAR_4;

    VAR_9->i_state = VAR_2;
    VAR_9->i_last_state_change = FUNC_10();


    unsigned int VAR_11, VAR_12;
    if ( !FUNC_9( VAR_8, &VAR_11, &VAR_12,
                               "linsys-hdsdi-aspect-ratio" ) && VAR_12 != 0 )
        VAR_9->i_forced_aspect = VAR_9->i_aspect =
                VAR_11 * VAR_6 / VAR_12;
    else
        VAR_9->i_forced_aspect = 0;


    VAR_9->i_id_video = FUNC_7( VAR_8, "linsys-sdi-id-video" );


    char *VAR_13 = VAR_10 = FUNC_8( VAR_8,
                                                       "linsys-sdi-audio" );
    int VAR_14 = 0;

    while ( VAR_10 != ((void*)0) && *VAR_10 )
    {
        int VAR_15, VAR_16, VAR_17;
        char *VAR_18 = FUNC_4( VAR_10, '=' );
        if ( VAR_18 != ((void*)0) )
        {
            *VAR_18 = '\0';
            VAR_15 = FUNC_5( VAR_10, ((void*)0), 0 );
            VAR_10 = VAR_18 + 1;
        }
        else
            VAR_15 = 0;

        VAR_18 = FUNC_4( VAR_10, ':' );
        if ( VAR_18 != ((void*)0) )
        {
            *VAR_18 = '\0';
            VAR_18++;
        }

        if ( FUNC_3( VAR_10, "%d,%d", &VAR_16, &VAR_17 ) == 2 )
        {
            VAR_9->p_audios[VAR_14].i_group = VAR_16;
            VAR_9->p_audios[VAR_14].i_pair = VAR_17;
            VAR_9->p_audios[VAR_14].i_id = VAR_15;
            VAR_14++;
        }
        else
            FUNC_2( VAR_8, "malformed audio configuration (%s)",
                      VAR_10 );

        VAR_10 = VAR_18;
    }
    FUNC_1( VAR_13 );


    VAR_9->psz_telx = FUNC_8( VAR_8, "linsys-sdi-telx" );

    VAR_9->psz_telx_lang = FUNC_8( VAR_8, "linsys-sdi-telx-lang" );

    return VAR_5;
}
