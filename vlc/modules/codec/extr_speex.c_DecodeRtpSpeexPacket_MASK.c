
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_21__ {size_t i_channels; unsigned int i_bytes_per_frame; int i_rate; int i_physical_channels; } ;
struct TYPE_22__ {TYPE_1__ audio; } ;
struct TYPE_23__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_27__ {scalar_t__ buf_size; } ;
struct TYPE_24__ {int rtp_rate; int i_frame_in_packet; TYPE_6__* p_header; int end_date; TYPE_7__ bits; int p_state; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_25__ {scalar_t__ i_pts; scalar_t__ i_buffer; scalar_t__ i_length; scalar_t__ p_buffer; int i_dts; } ;
typedef TYPE_5__ block_t ;
struct TYPE_26__ {int vbr; int frames_per_packet; size_t nb_channels; int frame_size; int rate; } ;
typedef int SpeexMode ;
typedef int SpeexHeader ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 TYPE_5__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_6__*) ;
 TYPE_6__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*,char*,scalar_t__) ;
 int FUNC_13 (int ,TYPE_7__*,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (TYPE_6__*,int,int,int const*) ;
 int * FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int *,int ,unsigned int*) ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_19( decoder_t *VAR_5, block_t *VAR_6 )
{
    decoder_sys_t *VAR_7 = VAR_5->p_sys;
    block_t *VAR_8;
    int VAR_9;
    unsigned int VAR_10;

    if ( !VAR_6 || VAR_6->i_pts == VAR_2 )
        return VAR_1;





    if ( VAR_7->bits.buf_size==0 )
    {
        VAR_7->p_header = FUNC_9(sizeof(SpeexHeader));
        if ( !VAR_7->p_header )
        {
            FUNC_10( VAR_5, "Could not allocate a Speex header.");
            return VAR_1;
        }

        const SpeexMode *VAR_11 = FUNC_17((VAR_7->rtp_rate / 8000) >> 1);

        FUNC_16( VAR_7->p_header,VAR_7->rtp_rate, 1, VAR_11 );
        FUNC_11( &VAR_7->bits );
        VAR_7->p_state = FUNC_15( VAR_11 );
        if ( !VAR_7->p_state )
        {
            FUNC_10( VAR_5, "Could not allocate a Speex decoder." );
            FUNC_8( VAR_7->p_header );
            return VAR_1;
        }





        VAR_7->p_header->vbr = 1;
        VAR_7->p_header->frames_per_packet = 1;

        VAR_5->fmt_out.audio.i_channels = VAR_7->p_header->nb_channels;
        VAR_5->fmt_out.audio.i_physical_channels =
            VAR_4[VAR_7->p_header->nb_channels];
        VAR_5->fmt_out.audio.i_rate = VAR_7->p_header->rate;

        if ( FUNC_18( &VAR_3,
                               VAR_0,
                               &VAR_10 ) )
        {
            FUNC_10( VAR_5, "Could not determine the frame size." );
            FUNC_14( VAR_7->p_state );
            FUNC_8( VAR_7->p_header );
            return VAR_1;
        }
        VAR_5->fmt_out.audio.i_bytes_per_frame = VAR_10;

        FUNC_3(&VAR_7->end_date, VAR_7->p_header->rate, 1);
    }





    if ( !VAR_7->p_header )
    {
        FUNC_10( VAR_5, "There is no valid Speex header found." );
        return VAR_1;
    }

    if ( FUNC_1( &VAR_7->end_date ) == VAR_2 )
        FUNC_4( &VAR_7->end_date, VAR_6->i_dts );





    if( FUNC_7( VAR_5 ) )
        VAR_8 = ((void*)0);
    else
        VAR_8 = FUNC_5( VAR_5,
            VAR_7->p_header->frame_size );
    if ( !VAR_8 || VAR_8->i_buffer == 0 )
    {
        FUNC_10(VAR_5, "Oops: No new buffer was returned!");
        return VAR_1;
    }




    FUNC_12( &VAR_7->bits,
        (char*)VAR_6->p_buffer,
        VAR_6->i_buffer );





    VAR_9 = FUNC_13( VAR_7->p_state, &VAR_7->bits,
            (int16_t*)VAR_8->p_buffer );
    if ( VAR_9 < 0 )
    {
        FUNC_10( VAR_5, "Decoding failed. Perhaps we have a bad stream?" );
        return VAR_1;
    }




    VAR_8->i_pts = FUNC_1( &VAR_7->end_date );
    VAR_8->i_length = FUNC_2( &VAR_7->end_date,
        VAR_7->p_header->frame_size ) - VAR_8->i_pts;


    VAR_7->i_frame_in_packet++;
    FUNC_0( VAR_6 );
    FUNC_6( VAR_5, VAR_8 );
    return VAR_1;
}
