
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {char i_type; scalar_t__ i_length; char i_compression; int i_keyframe; scalar_t__ i_timecode; } ;
typedef TYPE_1__ frame_header_t ;
struct TYPE_15__ {int out; int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_16__ {scalar_t__ i_pcr; scalar_t__ p_es_video; int fh_buffer; scalar_t__ p_es_audio; int idx; int b_index; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_17__ {scalar_t__ i_dts; scalar_t__ i_pts; int p_buffer; } ;
typedef TYPE_4__ block_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_1 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,TYPE_4__*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,char*,char) ;
 scalar_t__ FUNC_8 (int) ;
 TYPE_4__* FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12( demux_t *VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_6->p_sys;
    frame_header_t VAR_8;
    block_t *VAR_9;

    for( ;; )
    {
        if( FUNC_0( VAR_6, &VAR_8 ) )
            return VAR_2;

        if( VAR_8.i_type == 'A' || VAR_8.i_type == 'V' )
            break;



        if( VAR_8.i_type != 'R' && VAR_8.i_length > 0 )
        {
            if( FUNC_10( VAR_6->s, ((void*)0),
                                 VAR_8.i_length ) != VAR_8.i_length )
                return VAR_1;
        }
    }


    if( ( VAR_9 = FUNC_9( VAR_6->s, VAR_8.i_length ) ) == ((void*)0) )
        return VAR_2;

    VAR_9->i_dts = VAR_4 + (int64_t)VAR_8.i_timecode * 1000;
    VAR_9->i_pts = (VAR_8.i_type == 'V') ? VAR_5 : VAR_9->i_dts;


    if( !VAR_8.i_keyframe && !VAR_7->b_index )
        FUNC_3( &VAR_7->idx,
                           VAR_9->i_dts - VAR_4,
                           FUNC_11(VAR_6->s) - VAR_0 );


    if( VAR_7->i_pcr < 0 || VAR_7->i_pcr < VAR_9->i_dts - VAR_4 )
    {
        VAR_7->i_pcr = VAR_9->i_dts - VAR_4;
        FUNC_5( VAR_6->out, VAR_4 + VAR_7->i_pcr );
    }

    if( VAR_8.i_type == 'A' && VAR_7->p_es_audio )
    {
        if( VAR_8.i_compression == '3' )
            FUNC_4( VAR_6->out, VAR_7->p_es_audio, VAR_9 );
        else
        {
            FUNC_7( VAR_6, "unsupported compression %c for audio (upload samples)", VAR_8.i_compression );
            FUNC_2( VAR_9 );
        }
    }
    else if( VAR_8.i_type == 'V' && VAR_7->p_es_video )
    {
        if( VAR_8.i_compression >='0' && VAR_8.i_compression <='3' )
        {

            VAR_9 = FUNC_1( VAR_9, VAR_0, VAR_8.i_length );
            if( FUNC_8(!VAR_9) )
                return VAR_1;
            FUNC_6( VAR_9->p_buffer, VAR_7->fh_buffer, VAR_0 );
        }

        if( VAR_8.i_compression >= '0' )
            FUNC_4( VAR_6->out, VAR_7->p_es_video, VAR_9 );
        else
        {
            FUNC_7( VAR_6, "unsupported compression %c for video (upload samples)", VAR_8.i_compression );
            FUNC_2( VAR_9 );
        }
    }
    else
    {
        FUNC_2( VAR_9 );
    }

    return VAR_3;
}
