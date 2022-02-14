
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_31__ {int i_samples; int i_channels_conf; int i_channels; int i_rate; } ;
typedef TYPE_4__ mlp_header_t ;
struct TYPE_28__ {int i_frame_length; int i_bytes_per_frame; int i_physical_channels; int i_channels; int i_rate; } ;
struct TYPE_29__ {TYPE_1__ audio; } ;
struct TYPE_32__ {TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_27__ {TYPE_3__* p_block; } ;
struct TYPE_33__ {int i_state; int b_mlp; scalar_t__ i_pts; int b_discontinuity; TYPE_10__ bytestream; TYPE_4__ mlp; int end_date; int i_frame_size; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_34__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ i_length; int i_nb_samples; int * p_buffer; int i_buffer; } ;
typedef TYPE_7__ block_t ;
struct TYPE_30__ {scalar_t__ i_pts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_2 ;






 int FUNC_1 (int *,int*,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 TYPE_7__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_10__*) ;
 TYPE_7__* FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_10__*,int *,int ) ;
 int FUNC_8 (TYPE_10__*,int *,int) ;
 int FUNC_9 (TYPE_10__*,int ,int *,int) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_10__*) ;
 int FUNC_12 (TYPE_10__*,int ) ;
 int FUNC_13 (int *,int ,int) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,scalar_t__) ;
 int FUNC_17 (TYPE_5__*,char*) ;
 int FUNC_18 (TYPE_5__*,char*,int ,int ) ;

__attribute__((used)) static block_t *FUNC_19( decoder_t *VAR_4, block_t **VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;
    uint8_t VAR_7[VAR_2];
    block_t *VAR_8;

    block_t *VAR_9 = VAR_5 ? *VAR_5 : ((void*)0);

    if ( VAR_9 )
    {
        if( VAR_9->i_flags & (VAR_1|VAR_0) )
        {

            block_t *VAR_10 = FUNC_19( VAR_4, ((void*)0) );
            if( VAR_10 )
                return VAR_10;

            FUNC_0( VAR_4 );

            if( VAR_9->i_flags & VAR_0 )
            {
                FUNC_10( VAR_9 );
                return ((void*)0);
            }
        }

        if( VAR_9->i_pts == VAR_3 &&
            FUNC_14( &VAR_6->end_date ) == VAR_3 )
        {

            FUNC_17( VAR_4, "waiting for PTS" );
            FUNC_10( VAR_9 );
            return ((void*)0);
        }

        FUNC_6( &VAR_6->bytestream, VAR_9 );
    }

    for( ;; )
    {
        switch( VAR_6->i_state )
        {
        case 130:
            while( !FUNC_8( &VAR_6->bytestream, VAR_7, VAR_2 ) )
            {
                if( FUNC_1( VAR_7, &VAR_6->b_mlp, &VAR_6->mlp ) > 0 )
                {
                    VAR_6->i_state = 128;
                    break;
                }
                else if( FUNC_2( VAR_7 ) > 0 )
                {
                    VAR_6->i_state = 128;
                    break;
                }
                FUNC_11( &VAR_6->bytestream );
            }
            if( VAR_6->i_state != 128 )
            {
                FUNC_4( &VAR_6->bytestream );


                return ((void*)0);
            }


        case 128:

            VAR_6->i_pts = VAR_6->bytestream.p_block->i_pts;
            if( VAR_6->i_pts != VAR_3 &&
                VAR_6->i_pts != FUNC_14( &VAR_6->end_date ) )
            {
                FUNC_16( &VAR_6->end_date, VAR_6->i_pts );
            }
            VAR_6->i_state = 132;


        case 132:

            if( FUNC_8( &VAR_6->bytestream, VAR_7, VAR_2 ) )
            {

                return ((void*)0);
            }


            VAR_6->i_frame_size = FUNC_2( VAR_7 );
            if( VAR_6->i_frame_size <= 0 )
                VAR_6->i_frame_size = FUNC_1( VAR_7, &VAR_6->b_mlp, &VAR_6->mlp );
            if( VAR_6->i_frame_size <= 0 )
            {
                FUNC_17( VAR_4, "emulated sync word" );
                FUNC_11( &VAR_6->bytestream );
                VAR_6->b_mlp = 0;
                VAR_6->i_state = 130;
                break;
            }
            VAR_6->i_state = 131;


        case 131:

            if( FUNC_9( &VAR_6->bytestream,
                                       VAR_6->i_frame_size, VAR_7, VAR_2 ) )
            {
                if( VAR_9 == ((void*)0) )
                {
                    VAR_6->i_state = 133;
                    break;
                }

                return ((void*)0);
            }

            bool VAR_11 = VAR_6->b_mlp;
            mlp_header_t VAR_12 = VAR_6->mlp;
            if( FUNC_1( VAR_7, &VAR_11, &VAR_12 ) <= 0 && FUNC_2( VAR_7 ) <= 0 )
            {
                FUNC_17( VAR_4, "emulated sync word "
                         "(no sync on following frame)" );
                VAR_6->b_mlp = 0;
                VAR_6->i_state = 130;
                FUNC_11( &VAR_6->bytestream );
                break;
            }
            VAR_6->i_state = 133;
            break;

        case 133:

            if( FUNC_12( &VAR_6->bytestream, VAR_6->i_frame_size ) )
            {

                return ((void*)0);
            }
            VAR_6->i_state = 129;


        case 129:


            VAR_8 = FUNC_3( VAR_6->i_frame_size );
            if( !VAR_8 )
                return ((void*)0);


            FUNC_7( &VAR_6->bytestream,
                            VAR_8->p_buffer, VAR_8->i_buffer );


            if( FUNC_2( VAR_8->p_buffer ) > 0 )
            {
                FUNC_10( VAR_8 );
                VAR_6->i_state = 130;
                break;
            }


            if( VAR_4->fmt_out.audio.i_rate != VAR_6->mlp.i_rate )
            {
                FUNC_18( VAR_4, "MLP channels: %d samplerate: %d",
                          VAR_6->mlp.i_channels, VAR_6->mlp.i_rate );

                if( VAR_6->mlp.i_rate > 0 )
                    FUNC_13( &VAR_6->end_date, VAR_6->mlp.i_rate, 1 );
            }

            VAR_4->fmt_out.audio.i_rate = VAR_6->mlp.i_rate;
            VAR_4->fmt_out.audio.i_channels = VAR_6->mlp.i_channels;
            VAR_4->fmt_out.audio.i_physical_channels = VAR_6->mlp.i_channels_conf;
            VAR_4->fmt_out.audio.i_bytes_per_frame = VAR_6->i_frame_size;
            VAR_4->fmt_out.audio.i_frame_length = VAR_6->mlp.i_samples;

            VAR_8->i_pts = VAR_8->i_dts = FUNC_14( &VAR_6->end_date );
            VAR_8->i_nb_samples = VAR_6->mlp.i_samples;

            VAR_8->i_length =
                FUNC_15( &VAR_6->end_date, VAR_6->mlp.i_samples ) - VAR_8->i_pts;


            if( VAR_6->i_pts == VAR_6->bytestream.p_block->i_pts )
                VAR_6->i_pts = VAR_6->bytestream.p_block->i_pts = VAR_3;

            if( VAR_6->b_discontinuity )
            {
                VAR_8->i_flags |= VAR_1;
                VAR_6->b_discontinuity = 0;
            }


            if( VAR_5 )
                *VAR_5 = FUNC_5( &VAR_6->bytestream );

            VAR_6->i_state = 130;

            return VAR_8;
        }
    }

    return ((void*)0);
}
