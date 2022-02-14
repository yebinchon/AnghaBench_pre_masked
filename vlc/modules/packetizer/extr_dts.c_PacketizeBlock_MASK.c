
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_31__ {int i_frame_size; int i_substream_header_size; int syncword; int i_frame_length; int i_rate; } ;
typedef TYPE_3__ vlc_dts_header_t ;
typedef int uint8_t ;
struct TYPE_30__ {void* i_profile; } ;
struct TYPE_32__ {TYPE_2__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_28__ {TYPE_1__* p_block; } ;
struct TYPE_33__ {int i_state; scalar_t__ i_pts; int i_input_size; int i_next_offset; int b_discontinuity; TYPE_10__ bytestream; TYPE_3__ second; TYPE_3__ first; int end_date; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_34__ {int i_flags; scalar_t__ i_pts; int i_buffer; int p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_29__ {scalar_t__ i_pts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (TYPE_4__*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_10__*) ;
 TYPE_6__* FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_10__*,int ,int ) ;
 int FUNC_7 (TYPE_10__*,int *,int) ;
 int FUNC_8 (TYPE_10__*,int,int *,int) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_10__*) ;
 int FUNC_11 (TYPE_10__*,int) ;
 int FUNC_12 (TYPE_10__*,int) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (TYPE_4__*,char*) ;
 int FUNC_16 (TYPE_4__*,char*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (TYPE_3__*,int *,int) ;

__attribute__((used)) static block_t *FUNC_19( decoder_t *VAR_10, block_t **VAR_11 )
{
    decoder_sys_t *VAR_12 = VAR_10->p_sys;
    uint8_t VAR_13[VAR_7];
    block_t *VAR_14;

    block_t *VAR_15 = VAR_11 ? *VAR_11 : ((void*)0);

    if( VAR_15 )
    {
        if ( VAR_15->i_flags & (VAR_1|VAR_0) ) {

            block_t *VAR_16 = FUNC_19( VAR_10, ((void*)0) );
            if(VAR_16)
                return VAR_16;

            FUNC_1( VAR_10 );

            if ( VAR_15->i_flags & VAR_0 ) {
                FUNC_9( VAR_15 );
                return ((void*)0);
            }
        }

        if ( VAR_15->i_pts == VAR_9 &&
             FUNC_13( &VAR_12->end_date ) == VAR_9 ) {

            FUNC_9( VAR_15 );
            return ((void*)0);
        }

        FUNC_5( &VAR_12->bytestream, VAR_15 );
    }

    while( 1 )
    {
        switch( VAR_12->i_state )
        {
        case 131:
            while( FUNC_7( &VAR_12->bytestream, VAR_13, 6 )
                   == VAR_8 )
            {
                if( FUNC_17( VAR_13, 6 ) )
                {
                    VAR_12->i_state = 129;
                    break;
                }
                FUNC_10( &VAR_12->bytestream );
            }
            if( VAR_12->i_state != 129 )
            {
                FUNC_3( &VAR_12->bytestream );


                return ((void*)0);
            }


        case 129:

            VAR_12->i_pts = VAR_12->bytestream.p_block->i_pts;
            if( VAR_12->i_pts != VAR_9 &&
                VAR_12->i_pts != FUNC_13( &VAR_12->end_date ) )
            {
                FUNC_14( &VAR_12->end_date, VAR_12->i_pts );
            }
            VAR_12->i_state = 134;


        case 134:

            if( FUNC_7( &VAR_12->bytestream, VAR_13,
                                 VAR_7 ) != VAR_8 )
            {

                return ((void*)0);
            }


            if( FUNC_18( &VAR_12->first, VAR_13,
                                      VAR_7 ) != VAR_8 )
            {
                FUNC_15( VAR_10, "emulated sync word" );
                FUNC_10( &VAR_12->bytestream );
                VAR_12->i_state = 131;
                break;
            }

            if( VAR_12->first.syncword == VAR_2 )
                VAR_12->i_state = 128;
            else
                VAR_12->i_state = 133;
            VAR_12->i_input_size = VAR_12->i_next_offset = VAR_12->first.i_frame_size;
            break;

        case 128:

            if( FUNC_8( &VAR_12->bytestream,
                                       VAR_12->first.i_substream_header_size,
                                       VAR_13,
                                       VAR_7 ) != VAR_8 )
            {

                return ((void*)0);
            }

            vlc_dts_header_t VAR_17;
            if( FUNC_18( &VAR_17, VAR_13,
                                      VAR_7 ) != VAR_8 )
            {
                FUNC_15( VAR_10, "emulated substream sync word, can't find extension" );
                FUNC_10( &VAR_12->bytestream );
                VAR_12->i_state = 131;
                break;
            }

            if( VAR_17.syncword == VAR_3 )
            {






                VAR_10->fmt_out.i_profile = VAR_5;
                VAR_12->first.i_rate = VAR_17.i_rate;
                VAR_12->first.i_frame_length = VAR_17.i_frame_length;
                VAR_12->i_state = 133;
                break;
            }

            FUNC_16( VAR_10, "substream without the paired core stream, skip it" );
            VAR_12->i_state = 131;
            VAR_10->fmt_out.i_profile = VAR_4;
            if( FUNC_11( &VAR_12->bytestream,
                                 VAR_12->first.i_frame_size ) != VAR_8 )
                return ((void*)0);
            break;

        case 133:

            while( VAR_12->i_state == 133 )
            {
                if( FUNC_8( &VAR_12->bytestream,
                                           VAR_12->i_next_offset, VAR_13,
                                           VAR_7 )
                                           != VAR_8 )
                {
                    if( VAR_15 == ((void*)0) )
                    {
                        VAR_12->i_state = 135;
                        break;
                    }

                    return ((void*)0);
                }

                if( VAR_13[0] == 0 )
                {

                    VAR_12->i_next_offset++;
                    continue;
                }

                if( !FUNC_17( VAR_13, VAR_7 ) )
                {

                    if( (VAR_12->first.i_frame_size % 2) && VAR_12->i_next_offset > 0 &&
                        FUNC_8( &VAR_12->bytestream,
                                               VAR_12->i_next_offset - 1, VAR_13,
                                               VAR_7 ) == 0 &&
                         FUNC_17( VAR_13, VAR_7 ) )
                    {
                        VAR_12->i_input_size = VAR_12->i_next_offset = VAR_12->first.i_frame_size - 1;

                        break;
                    }
                    FUNC_15( VAR_10, "emulated sync word "
                             "(no sync on following frame)" );
                    VAR_12->i_state = 131;
                    FUNC_10( &VAR_12->bytestream );
                    break;
                }



                if( VAR_12->i_next_offset == VAR_12->first.i_frame_size &&
                    FUNC_18( &VAR_12->second,
                                          VAR_13, VAR_7 ) == VAR_8 &&
                    VAR_12->second.syncword == VAR_2 )
                {
                    VAR_12->i_state = 132;
                }
                else
                {
                    VAR_10->fmt_out.i_profile = VAR_4;
                    VAR_12->i_state = 135;
                }
            }
            break;

        case 132:
            FUNC_2(VAR_12->second.syncword == VAR_2);
            if( VAR_12->first.syncword == VAR_2 )
            {

                VAR_10->fmt_out.i_profile = VAR_5;
            }
            else
            {
                VAR_10->fmt_out.i_profile = VAR_6;
                VAR_12->i_input_size += VAR_12->second.i_frame_size;
            }
            VAR_12->i_state = 135;
            break;

        case 135:

            if( FUNC_12( &VAR_12->bytestream,
                                 VAR_12->i_input_size ) != VAR_8 )
            {

                return ((void*)0);
            }
            VAR_12->i_state = 130;


        case 130:
            if( !(VAR_14 = FUNC_0( VAR_10 )) )
            {
                return ((void*)0);
            }



            FUNC_6( &VAR_12->bytestream, VAR_14->p_buffer,
                            VAR_14->i_buffer );


            if( VAR_12->i_pts == VAR_12->bytestream.p_block->i_pts )
                VAR_12->i_pts = VAR_12->bytestream.p_block->i_pts = VAR_9;

            if( VAR_12->b_discontinuity )
            {
                VAR_12->b_discontinuity = 0;
                VAR_14->i_flags |= VAR_1;
            }


            if( VAR_11 )
                *VAR_11 = FUNC_4( &VAR_12->bytestream );

            VAR_12->i_state = 131;

            return VAR_14;
        }
    }
}
