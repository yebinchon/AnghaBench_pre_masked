
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {int i_frame_length; int i_frame_size; scalar_t__ syncword; } ;
typedef TYPE_4__ vlc_dts_header_t ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_17__ {scalar_t__ i_format; } ;
struct TYPE_18__ {TYPE_1__ audio; } ;
struct TYPE_21__ {TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_22__ {size_t i_out_offset; TYPE_3__* p_out_buf; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_23__ {int i_buffer; int i_nb_samples; scalar_t__ i_length; int p_buffer; } ;
typedef TYPE_7__ block_t ;
struct TYPE_19__ {size_t i_buffer; int i_length; int * p_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_5__*,char*,int) ;
 scalar_t__ FUNC_1 (int *,size_t,int ,int,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_7__*,int,int) ;

__attribute__((used)) static int FUNC_6( filter_t *VAR_10, block_t *VAR_11 )
{
    uint16_t VAR_12;
    filter_sys_t *VAR_13 = VAR_10->p_sys;


    vlc_dts_header_t VAR_14;
    if( FUNC_2( &VAR_14, VAR_11->p_buffer,
                              VAR_11->i_buffer ) != VAR_9 )
        return VAR_5;
    VAR_11->i_nb_samples = VAR_14.i_frame_length;
    VAR_11->i_buffer = VAR_14.i_frame_size;

    switch( VAR_11->i_nb_samples )
    {
    case 512:
        VAR_12 = VAR_2;
        break;
    case 1024:
        VAR_12 = VAR_3;
        break;
    case 2048:
        VAR_12 = VAR_4;
        break;
    default:
        FUNC_0( VAR_10, "Frame size %d not supported",
                 VAR_11->i_nb_samples );
        return VAR_5;
    }

    if( VAR_14.syncword == VAR_0 ||
        VAR_14.syncword == VAR_1 )
    {
        if( VAR_11->i_buffer > VAR_11->i_nb_samples * 4 )
            return VAR_5;
        if( FUNC_5( VAR_10, VAR_11, VAR_11->i_nb_samples * 4,
                        VAR_11->i_nb_samples ) )
            return VAR_5;

        uint8_t *VAR_15 = &VAR_13->p_out_buf->p_buffer[VAR_13->i_out_offset];
        ssize_t VAR_16 = FUNC_1( VAR_15,
                            VAR_13->p_out_buf->i_buffer - VAR_13->i_out_offset,
                            VAR_11->p_buffer, VAR_11->i_buffer,
                            VAR_10->fmt_out.audio.i_format == VAR_8 );
        if( VAR_16 < 0 )
            return VAR_5;

        VAR_13->i_out_offset += VAR_16;
        VAR_13->p_out_buf->i_length += VAR_11->i_length;
    }
    else
    {
        if( VAR_11->i_buffer + VAR_6 > VAR_11->i_nb_samples * 4 )
            return VAR_5;

        if( FUNC_5( VAR_10, VAR_11, VAR_11->i_nb_samples * 4,
                        VAR_11->i_nb_samples ) )
            return VAR_5;
        FUNC_3( VAR_10, VAR_11 );
    }

    FUNC_4( VAR_10, VAR_12, 8 );
    return VAR_7;
}
