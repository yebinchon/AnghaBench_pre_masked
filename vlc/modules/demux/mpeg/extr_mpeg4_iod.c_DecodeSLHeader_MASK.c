
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_5__ {int b_au_start; int b_au_end; unsigned int i_size; int i_pts; int i_dts; int member_0; } ;
typedef TYPE_1__ sl_header_data ;
struct TYPE_6__ {int i_flags; int i_OCR_length; int i_packet_seqnum_length; int i_degradation_priority_length; int i_AU_seqnum_length; int i_instant_bitrate_length; int i_timestamp_length; int i_AU_length; int i_timestamp_resolution; } ;
typedef TYPE_2__ sl_config_descriptor_t ;
typedef int bs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int const*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int ) ;

sl_header_data FUNC_7( unsigned VAR_7, const uint8_t *VAR_8,
                               const sl_config_descriptor_t *VAR_9 )
{
    sl_header_data VAR_10 = { 0 };

    bs_t VAR_11;
    FUNC_2( &VAR_11, VAR_8, VAR_7 );

    bool VAR_12 = 0;
    bool VAR_13 = 0;
    bool VAR_14 = 0;
    uint8_t VAR_15 = 0;

    if( VAR_9->i_flags & VAR_1 )
        VAR_10.b_au_start = FUNC_5( &VAR_11 );
    if( VAR_9->i_flags & VAR_0 )
        VAR_10.b_au_end = FUNC_5( &VAR_11 );
    if( VAR_9->i_OCR_length > 0 )
        VAR_12 = FUNC_5( &VAR_11 );
    if( VAR_9->i_flags & VAR_2 )
        VAR_13 = FUNC_5( &VAR_11 );
    if( VAR_9->i_flags & VAR_3 )
        VAR_14 = FUNC_5( &VAR_11 );

    if( VAR_10.b_au_end == VAR_10.b_au_start && VAR_10.b_au_start == 0 )
        VAR_10.b_au_end = VAR_10.b_au_start = 1;

    if( VAR_14 )
        VAR_15 = FUNC_4( &VAR_11, 3 );


    if( !VAR_13 && ( !VAR_14 || !VAR_15 ) )
    {
        bool VAR_16 = 0;
        bool VAR_17 = 0;
        bool VAR_18 = 0;
        struct
        {
            bool *p_b;
            vlc_tick_t *p_t;
        } const VAR_19[2] = { { &VAR_16, &VAR_10.i_dts }, { &VAR_17, &VAR_10.i_pts } };

        FUNC_4( &VAR_11, VAR_9->i_packet_seqnum_length );

        if( VAR_9->i_degradation_priority_length && FUNC_5( &VAR_11 ) )
            FUNC_4( &VAR_11, VAR_9->i_degradation_priority_length );

        if( VAR_12 )
            FUNC_4( &VAR_11, VAR_9->i_OCR_length );

        if ( VAR_10.b_au_start )
        {
            if( VAR_9->i_flags & VAR_4 )
                FUNC_5( &VAR_11 );

            FUNC_4( &VAR_11, VAR_9->i_AU_seqnum_length );

            if ( VAR_9->i_flags & VAR_5 )
            {
                VAR_16 = FUNC_5( &VAR_11 );
                VAR_17 = FUNC_5( &VAR_11 );
            }

            if( VAR_9->i_instant_bitrate_length )
                VAR_18 = FUNC_5( &VAR_11 );

            for( int VAR_20=0; VAR_20<2; VAR_20++ )
            {
                if( !*(VAR_19[VAR_20].p_b) )
                    continue;
                uint64_t VAR_21 = FUNC_4( &VAR_11, FUNC_1( 32, VAR_9->i_timestamp_length ) );
                if( VAR_9->i_timestamp_length > 32 )
                {
                    uint8_t VAR_22 = FUNC_0( 1, VAR_9->i_timestamp_length - 32 );
                    VAR_21 = VAR_21 << VAR_22;
                    VAR_21 |= FUNC_4( &VAR_11, VAR_22 );
                }
                if( VAR_9->i_timestamp_resolution )
                    *(VAR_19[VAR_20].p_t) = VAR_6 +
                        FUNC_6(VAR_21, VAR_9->i_timestamp_resolution);
            }

            FUNC_4( &VAR_11, VAR_9->i_AU_length );

            if( VAR_18 )
                FUNC_4( &VAR_11, VAR_9->i_instant_bitrate_length );
        }


    }

    if ( VAR_14 && !VAR_15 )
        VAR_10.i_size = VAR_7;
    else
        VAR_10.i_size = (FUNC_3( &VAR_11 ) + 7) / 8;

    return VAR_10;
}
