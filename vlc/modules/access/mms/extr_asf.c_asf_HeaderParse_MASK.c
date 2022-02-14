
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_guid_t ;
typedef int var_buffer_t ;
typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* stream; void* i_min_data_packet_size; void* i_data_packets_count; void* i_file_size; } ;
typedef TYPE_2__ asf_header_t ;
struct TYPE_4__ {int i_bitrate; void* i_cat; scalar_t__ i_selected; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,size_t*,int) ;
 scalar_t__ FUNC_8 (int *) ;

void FUNC_9 ( asf_header_t *VAR_11,
                            uint8_t *VAR_12, int VAR_13 )
{
    var_buffer_t VAR_14;
    vlc_guid_t VAR_15;
    uint64_t VAR_16;

    VAR_11->i_file_size = 0;
    VAR_11->i_data_packets_count = 0;
    VAR_11->i_min_data_packet_size = 0;
    for( unsigned VAR_17 = 0; VAR_17 < 128; VAR_17++ )
    {
        VAR_11->stream[VAR_17].i_cat = VAR_1;
        VAR_11->stream[VAR_17].i_selected = 0;
        VAR_11->stream[VAR_17].i_bitrate = -1;
    }

    FUNC_7( &VAR_14, VAR_12, VAR_13 );
    FUNC_5( &VAR_14, &VAR_15 );

    if( !FUNC_0( &VAR_15, &VAR_6 ) )
    {

    }
    FUNC_6( &VAR_14, ((void*)0), 30 - 16 );

    for( ;; )
    {
        FUNC_5( &VAR_14, &VAR_15 );
        VAR_16 = FUNC_3( &VAR_14 );

        if( FUNC_0( &VAR_15, &VAR_4 ) )
        {
            FUNC_6( &VAR_14, ((void*)0), 16 );
            VAR_11->i_file_size = FUNC_3( &VAR_14 );
            FUNC_6( &VAR_14, ((void*)0), 8 );
            VAR_11->i_data_packets_count = FUNC_3( &VAR_14 );
            FUNC_6( &VAR_14, ((void*)0), 8+8+8+4);
            VAR_11->i_min_data_packet_size = FUNC_2( &VAR_14 );

            FUNC_6( &VAR_14, ((void*)0), VAR_16 - 24 - 16 - 8 - 8 - 8 - 8-8-8-4 - 4);
        }
        else if( FUNC_0( &VAR_15, &VAR_5 ) )
        {

            FUNC_6( &VAR_14, ((void*)0), 46 - 24 );
        }
        else if( FUNC_0( &VAR_15, &VAR_3 ) )
        {

            int16_t VAR_18, VAR_19;
            int VAR_20;

            FUNC_6( &VAR_14, ((void*)0), 84 - 24 );

            VAR_18 = FUNC_1( &VAR_14 );
            VAR_19 = FUNC_1( &VAR_14 );

            VAR_20 = 88;
            for( int VAR_21 = 0; VAR_21 < VAR_18; VAR_21++ )
            {
                int VAR_22;

                FUNC_1( &VAR_14 );
                VAR_22 = FUNC_1( &VAR_14 );
                FUNC_6( &VAR_14, ((void*)0), VAR_22 );

                VAR_20 += 4 + VAR_22;
            }

            for( int VAR_23 = 0; VAR_23 < VAR_19; VAR_23++ )
            {
                int VAR_24;
                FUNC_6( &VAR_14, ((void*)0), 16 + 2 );
                VAR_24 = FUNC_2( &VAR_14 );
                FUNC_6( &VAR_14, ((void*)0), VAR_24 );

                VAR_20 += 16 + 6 + VAR_24;
            }

            if( VAR_16 - VAR_20 <= 24 )
            {
                FUNC_6( &VAR_14, ((void*)0), VAR_16 - VAR_20 );
            }


        }
        else if( FUNC_0( &VAR_15, &VAR_8 ) )
        {
            int VAR_25;
            vlc_guid_t VAR_26;

            FUNC_5( &VAR_14, &VAR_26 );
            FUNC_6( &VAR_14, ((void*)0), 32 );

            VAR_25 = FUNC_4( &VAR_14 ) & 0x7f;
            FUNC_6( &VAR_14, ((void*)0), VAR_16 - 24 - 32 - 16 - 1);

            if( FUNC_0( &VAR_26, &VAR_10 ) )
            {
                VAR_11->stream[VAR_25].i_cat = VAR_2;
            }
            else if( FUNC_0( &VAR_26, &VAR_9 ) )
            {
                VAR_11->stream[VAR_25].i_cat = VAR_0;
            }
            else
            {
                VAR_11->stream[VAR_25].i_cat = VAR_1;
            }
        }
        else if ( FUNC_0( &VAR_15, &VAR_7 ) )
        {
            int VAR_27;
            uint8_t VAR_28;

            VAR_27 = FUNC_1( &VAR_14 );
            VAR_16 -= 2;
            while( VAR_27 > 0 )
            {
                VAR_28 = FUNC_1( &VAR_14 )&0x7f;
                VAR_11->stream[VAR_28].i_bitrate = FUNC_2( &VAR_14 );
                VAR_27--;
                VAR_16 -= 6;
            }
            FUNC_6( &VAR_14, ((void*)0), VAR_16 - 24 );
        }
        else
        {

            FUNC_6( &VAR_14, ((void*)0), VAR_16 - 24 );
        }

        if( FUNC_8( &VAR_14 ) )
            return;
    }
}
