
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_guid_t ;
typedef int uint8_t ;
typedef size_t uint16_t ;
typedef int stream_t ;
typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ i_object_size; scalar_t__ exclusion_type; size_t i_stream_number_count; scalar_t__* pi_stream_numbers; } ;
struct TYPE_4__ {TYPE_2__ bitrate_mutual_exclusion; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_bitrate_mutual_exclusion_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__* FUNC_3 (size_t,int) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int const*,int *) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *,int const**,scalar_t__) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_10, asf_object_t *VAR_11 )
{
    asf_object_bitrate_mutual_exclusion_t *VAR_12 = &VAR_11->bitrate_mutual_exclusion;
    const uint8_t *VAR_13, *VAR_14;

    if( VAR_12->i_object_size > VAR_3 )
        return VAR_5;

    ssize_t VAR_15 = FUNC_7( VAR_10, &VAR_13, VAR_12->i_object_size );
    if( VAR_15 < 42 )
       return VAR_5;

    VAR_14 = &VAR_13[VAR_1];

    if( !FUNC_0( 16 + 2 * sizeof(uint16_t) ) )
        return VAR_5;

    if ( FUNC_5( (const vlc_guid_t *) VAR_14, &VAR_9 ) )
        VAR_12->exclusion_type = VAR_4;
    else if ( FUNC_5( (const vlc_guid_t *) VAR_14, &VAR_8 ) )
        VAR_12->exclusion_type = VAR_2;
    FUNC_2( 16 );

    VAR_12->i_stream_number_count = FUNC_1();
    VAR_12->pi_stream_numbers = FUNC_3( VAR_12->i_stream_number_count, sizeof(uint16_t) );
    if ( ! VAR_12->pi_stream_numbers )
    {
        VAR_12->i_stream_number_count = 0;
        return VAR_6;
    }

    for( uint16_t VAR_16 = 0; VAR_16 < VAR_12->i_stream_number_count; VAR_16++ )
    {
        if( !FUNC_0(2) )
            break;
        VAR_12->pi_stream_numbers[VAR_16] = FUNC_1();
        if ( VAR_12->pi_stream_numbers[VAR_16] > VAR_0 )
        {
            FUNC_4( VAR_12->pi_stream_numbers );
            return VAR_5;
        }
    }
    return VAR_7;
}
