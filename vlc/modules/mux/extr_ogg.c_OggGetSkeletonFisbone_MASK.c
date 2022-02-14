
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {int i_nb_inputs; TYPE_2__** pp_inputs; } ;
typedef TYPE_7__ sout_mux_t ;
struct TYPE_20__ {TYPE_6__* p_fmt; scalar_t__ p_sys; } ;
typedef TYPE_8__ sout_input_t ;
struct TYPE_15__ {int i_frame_rate; int i_frame_rate_base; } ;
struct TYPE_16__ {int i_codec; TYPE_3__ video; int i_cat; } ;
struct TYPE_21__ {unsigned int i_serial_no; TYPE_4__ fmt; } ;
typedef TYPE_9__ ogg_stream_t ;
struct TYPE_17__ {int i_rate; } ;
struct TYPE_18__ {scalar_t__ i_priority; int i_cat; int const i_codec; int i_extra; scalar_t__ p_extra; TYPE_5__ audio; } ;
struct TYPE_14__ {TYPE_1__* p_fmt; } ;
struct TYPE_13__ {int i_cat; int i_priority; } ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char**,char*,char const*) ;
 int * FUNC_4 (long,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (TYPE_7__*,char*,int ,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int) ;
 unsigned int FUNC_10 (scalar_t__,int ,int const) ;

__attribute__((used)) static void FUNC_11( uint8_t **VAR_6, long *VAR_7,
                                   sout_input_t *VAR_8, sout_mux_t *VAR_9 )
{
    uint8_t *VAR_10;
    uint8_t *VAR_11;
    const char *VAR_12 = ((void*)0);
    ogg_stream_t *VAR_13 = (ogg_stream_t *) VAR_8->p_sys;
    struct
    {
        char *psz_content_type;
        char *psz_role;
        long int i_size;
        unsigned int i_count;
    } VAR_14 = { ((void*)0), ((void*)0), 0, 0 };
    *VAR_7 = 0;

    switch( VAR_13->fmt.i_codec )
    {
        case 129:
            VAR_12 = "audio/vorbis";
            break;
        case 130:
            VAR_12 = "video/theora";
            break;
        case 134:
            VAR_12 = "video/daala";
            break;
        case 131:
            VAR_12 = "audio/speex";
            break;
        case 133:
            VAR_12 = "audio/flac";
            break;
        case 135:
            VAR_12 = "text/cmml";
            break;
        case 132:
            VAR_12 = "application/kate";
            break;
        case 128:
            VAR_12 = "video/x-vp8";
            break;
        default:
            VAR_12 = "application/octet-stream";
            FUNC_7( VAR_9, "Unknown fourcc for stream %s, setting Content-Type to %s",
                  FUNC_9( VAR_13->fmt.i_cat, VAR_13->fmt.i_codec ),
                  VAR_12 );
    }


    if ( FUNC_3( &VAR_14.psz_content_type, "Content-Type: %s\r\n", VAR_12 ) != -1 )
    {
        VAR_14.i_size += FUNC_8( VAR_14.psz_content_type );
        VAR_14.i_count++;
    }


    if ( VAR_8->p_fmt->i_priority > VAR_1 )
    {
        int VAR_15 = VAR_0;
        for ( int VAR_16=0; VAR_16< VAR_9->i_nb_inputs; VAR_16++ )
        {
            if ( VAR_9->pp_inputs[VAR_16]->p_fmt->i_cat != VAR_8->p_fmt->i_cat ) continue;
            VAR_15 = FUNC_2( VAR_9->pp_inputs[VAR_16]->p_fmt->i_priority, VAR_15 );
        }

        VAR_12 = ((void*)0);
        if ( VAR_8->p_fmt->i_cat == 137 || VAR_8->p_fmt->i_cat == 136 )
        {
            if ( VAR_8->p_fmt->i_priority == VAR_15 && VAR_15 >= VAR_2 )
                VAR_12 = ( VAR_8->p_fmt->i_cat == 136 ) ?
                            "video/main" : "audio/main";
            else
                VAR_12 = ( VAR_8->p_fmt->i_cat == 136 ) ?
                            "video/alternate" : "audio/alternate";
        }
        else if ( VAR_8->p_fmt->i_cat == VAR_5 )
        {
            VAR_12 = ( VAR_8->p_fmt->i_codec == 132 ) ?
                        "text/karaoke" : "text/subtitle";
        }

        if ( VAR_12 && FUNC_3( &VAR_14.psz_role, "Role: %s\r\n", VAR_12 ) != -1 )
        {
            VAR_14.i_size += FUNC_8( VAR_14.psz_role );
            VAR_14.i_count++;
        }
    }

    *VAR_6 = FUNC_4( VAR_4 + VAR_14.i_size, sizeof(uint8_t) );
    if ( !*VAR_6 ) return;
    VAR_11 = *VAR_6;

    FUNC_6( VAR_11, "fisbone", 8 );
    FUNC_0( &VAR_11[8], VAR_3 );
    FUNC_0( &VAR_11[12], VAR_13->i_serial_no );
    FUNC_0( &VAR_11[16], VAR_14.i_count );


    switch ( VAR_8->p_fmt->i_cat )
    {
        case 136:
            FUNC_1( &(*VAR_6)[20], VAR_13->fmt.video.i_frame_rate );
            FUNC_1( &(*VAR_6)[28], VAR_13->fmt.video.i_frame_rate_base );
        break;
        case 137:
            FUNC_1( &(*VAR_6)[20], VAR_8->p_fmt->audio.i_rate );
            FUNC_1( &(*VAR_6)[28], 1 );
        break;
        default:
            FUNC_1( &(*VAR_6)[20], 1000 );
            FUNC_1( &(*VAR_6)[28], 1 );
    }


    if ( VAR_8->p_fmt->p_extra )
        FUNC_0( &(*VAR_6)[44],
                FUNC_10( VAR_8->p_fmt->p_extra,
                                          VAR_8->p_fmt->i_extra,
                                          VAR_8->p_fmt->i_codec ) );

    if ( VAR_14.i_size > 0 )
    {
        VAR_10 = *VAR_6 + VAR_4;
        FUNC_6( VAR_10, VAR_14.psz_content_type, FUNC_8( VAR_14.psz_content_type ) );
        VAR_10 += FUNC_8( VAR_14.psz_content_type );
        if ( VAR_14.psz_role )
            FUNC_6( VAR_10, VAR_14.psz_role, FUNC_8( VAR_14.psz_role ) );
    }
    *VAR_7 = VAR_4 + VAR_14.i_size;

    FUNC_5( VAR_14.psz_content_type );
    FUNC_5( VAR_14.psz_role );
}
