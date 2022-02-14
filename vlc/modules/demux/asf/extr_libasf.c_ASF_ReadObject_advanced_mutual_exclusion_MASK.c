
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
struct TYPE_5__ {scalar_t__ i_object_size; scalar_t__ exclusion_type; size_t i_stream_number_count; char** pi_stream_number; } ;
struct TYPE_4__ {TYPE_2__ advanced_mutual_exclusion; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_advanced_mutual_exclusion_t ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
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
 char** FUNC_3 (size_t,int) ;
 scalar_t__ FUNC_4 (int const*,int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *,int const**,scalar_t__) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_10,
                                                     asf_object_t *VAR_11)
{
    asf_object_advanced_mutual_exclusion_t *VAR_12 = &VAR_11->advanced_mutual_exclusion;
    const uint8_t *VAR_13, *VAR_14;
    uint16_t VAR_15;

    if( VAR_12->i_object_size > VAR_3 )
        return VAR_5;

    ssize_t VAR_16 = FUNC_6( VAR_10, &VAR_13, VAR_12->i_object_size );
    if( VAR_16 < 42 )
       return VAR_5;

    VAR_14 = &VAR_13[VAR_1];

    if( !FUNC_0( 16 + 2 * sizeof(uint16_t) ) )
        return VAR_5;

    if ( FUNC_4( (const vlc_guid_t *) VAR_14, &VAR_9 ) )
        VAR_12->exclusion_type = VAR_4;
    else if ( FUNC_4( (const vlc_guid_t *) VAR_14, &VAR_8 ) )
        VAR_12->exclusion_type = VAR_2;
    FUNC_2( 16 );

    VAR_12->i_stream_number_count = FUNC_1();
    VAR_12->pi_stream_number = FUNC_3( VAR_12->i_stream_number_count, sizeof(uint16_t) );
    if ( !VAR_12->pi_stream_number )
    {
        VAR_12->i_stream_number_count = 0;
        return VAR_6;
    }

    for( VAR_15 = 0; VAR_15 < VAR_12->i_stream_number_count; VAR_15++ )
    {
        if( !FUNC_0(2) )
            break;
        VAR_12->pi_stream_number[VAR_15] = FUNC_1();
        if ( VAR_12->pi_stream_number[VAR_15] > VAR_0 )
            break;
    }
    VAR_12->i_stream_number_count = VAR_15;
    return VAR_7;
}
