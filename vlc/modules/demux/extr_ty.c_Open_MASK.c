
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_14__ {void* i_group; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_13__ {int force; } ;
struct TYPE_15__ {int out; int s; TYPE_4__* p_sys; int pf_control; int pf_demux; TYPE_1__ obj; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_16__ {int b_first_chunk; int b_have_master; scalar_t__ audio_type; int xds; int cc; int ** p_cc; void* p_video; void* p_audio; int b_seekable; scalar_t__ l_ac3_pkt_size; scalar_t__ i_Pts_Offset; scalar_t__ i_Pes_Length; int tivo_series; int tivo_type; int i_stream_size; void* lastVideoPTS; void* lastAudioPTS; } ;
typedef TYPE_4__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (int const*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 void* FUNC_5 (int ,TYPE_2__*) ;
 TYPE_4__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_15(vlc_object_t *VAR_19)
{
    demux_t *VAR_20 = (demux_t *)VAR_19;
    demux_sys_t *VAR_21;
    es_format_t VAR_22;
    const uint8_t *VAR_23;
    int VAR_24;



    if( FUNC_14( VAR_20->s, &VAR_23, 12 ) < 12 )
        return VAR_15;

    if ( FUNC_0(VAR_23) != VAR_7 ||
         FUNC_0(&VAR_23[4]) != 0x02 ||
         FUNC_0(&VAR_23[8]) != VAR_1 )
    {
        if( !VAR_20->obj.force &&
            !FUNC_3( VAR_20, ".ty" ) &&
            !FUNC_3( VAR_20, ".ty+" ) )
            return VAR_15;
        FUNC_9( VAR_20, "this does not look like a TY file, "
                           "continuing anyway..." );
    }


    FUNC_8( VAR_20, "valid TY stream detected" );

    VAR_21 = FUNC_6(sizeof(demux_sys_t));
    if( FUNC_12(VAR_21 == ((void*)0)) )
        return VAR_16;


    VAR_20->pf_demux = VAR_3;
    VAR_20->pf_control = VAR_2;


    VAR_20->p_sys = VAR_21;
    FUNC_7(VAR_21, 0, sizeof(demux_sys_t));


    VAR_21->b_first_chunk = 1;
    VAR_21->b_have_master = (FUNC_0(VAR_23) == VAR_7);
    VAR_21->lastAudioPTS = VAR_18;
    VAR_21->lastVideoPTS = VAR_18;
    VAR_21->i_stream_size = FUNC_11(VAR_20->s);
    VAR_21->tivo_type = VAR_9;
    VAR_21->audio_type = VAR_6;
    VAR_21->tivo_series = VAR_8;
    VAR_21->i_Pes_Length = 0;
    VAR_21->i_Pts_Offset = 0;
    VAR_21->l_ac3_pkt_size = 0;


    FUNC_13( VAR_20->s, VAR_4, &VAR_21->b_seekable );

    if (FUNC_10(VAR_20) != VAR_17) {

        return VAR_15;
    }

    if (!VAR_21->b_have_master)
      FUNC_9(VAR_20, "No master chunk found; seeking will be limited.");


    if (VAR_21->audio_type == VAR_5) {
        FUNC_4( &VAR_22, VAR_0, VAR_13 );
    } else {
        FUNC_4( &VAR_22, VAR_0, VAR_12 );
    }
    VAR_22.i_group = VAR_10;
    VAR_21->p_audio = FUNC_5( VAR_20->out, &VAR_22 );


    FUNC_4( &VAR_22, VAR_11, VAR_14 );
    VAR_22.i_group = VAR_10;
    VAR_21->p_video = FUNC_5( VAR_20->out, &VAR_22 );


    for( VAR_24 = 0; VAR_24 < 4; VAR_24++ )
        VAR_21->p_cc[VAR_24] = ((void*)0);
    FUNC_2( &VAR_21->cc );

    FUNC_1( &VAR_21->xds );

    return VAR_17;
}
