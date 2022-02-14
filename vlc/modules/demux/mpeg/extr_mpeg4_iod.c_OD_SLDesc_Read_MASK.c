
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int i_flags; int i_timestamp_resolution; int i_timestamp_length; int i_degradation_priority_length; int i_AU_seqnum_length; int i_packet_seqnum_length; void* i_startcomposition_timestamp; void* i_startdecoding_timestamp; void* i_compositionunit_duration; void* i_accessunit_duration; void* i_timescale; void* i_instant_bitrate_length; void* i_AU_length; void* i_OCR_length; void* i_OCR_resolution; } ;
typedef TYPE_1__ sl_config_descriptor_t ;
struct TYPE_6__ {TYPE_1__* sl_descr; } ;
typedef TYPE_2__ od_read_params_t ;
typedef int bs_t ;


 void* FUNC_0 (unsigned int*,int const**,int) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static bool FUNC_5( vlc_object_t *VAR_2, unsigned VAR_3, const uint8_t *VAR_4,
                             od_read_params_t VAR_5 )
{
    sl_config_descriptor_t *VAR_6 = VAR_5.sl_descr;

    uint8_t VAR_7 = FUNC_0( &VAR_3, &VAR_4, 1 );
    switch( VAR_7 )
    {
    case 130:
        if( VAR_3 < 15 )
            return 0;
        VAR_6->i_flags = FUNC_0( &VAR_3, &VAR_4, 1 );
        VAR_6->i_timestamp_resolution = FUNC_0( &VAR_3, &VAR_4, 4 );
        VAR_6->i_OCR_resolution = FUNC_0( &VAR_3, &VAR_4, 4 );
        VAR_6->i_timestamp_length = FUNC_0( &VAR_3, &VAR_4, 1 );
        VAR_6->i_OCR_length = FUNC_0( &VAR_3, &VAR_4, 1 );
        VAR_6->i_AU_length = FUNC_0( &VAR_3, &VAR_4, 1 );
        VAR_6->i_instant_bitrate_length = FUNC_0( &VAR_3, &VAR_4, 1 );
        uint16_t VAR_8 = FUNC_0( &VAR_3, &VAR_4, 2 );
        VAR_6->i_degradation_priority_length = VAR_8 >> 12;
        VAR_6->i_AU_seqnum_length = (VAR_8 >> 7) & 0x1f;
        VAR_6->i_packet_seqnum_length = (VAR_8 >> 2) & 0x1f;
        break;
    case 128:
        FUNC_3( VAR_6, 0, sizeof(*VAR_6) );
        VAR_6->i_timestamp_resolution = 1000;
        VAR_6->i_timestamp_length = 32;
        break;
    case 129:
        FUNC_3( VAR_6, 0, sizeof(*VAR_6) );
        VAR_6->i_flags = VAR_1;
        break;
    default:

        return 0;
    }

    if( VAR_6->i_flags & VAR_0 )
    {
        if( VAR_3 < 8 )
            return 0;
        VAR_6->i_timescale = FUNC_0( &VAR_3, &VAR_4, 4 );
        VAR_6->i_accessunit_duration = FUNC_0( &VAR_3, &VAR_4, 2 );
        VAR_6->i_compositionunit_duration = FUNC_0( &VAR_3, &VAR_4, 2 );
    }

    if( (VAR_6->i_flags & VAR_1) == 0 )
    {
        bs_t VAR_9;
        FUNC_1( &VAR_9, VAR_4, VAR_3 );
        VAR_6->i_startdecoding_timestamp = FUNC_2( &VAR_9, VAR_6->i_timestamp_length );
        VAR_6->i_startcomposition_timestamp = FUNC_2( &VAR_9, VAR_6->i_timestamp_length );
    }

    FUNC_4( VAR_2, "   * read sl desc predefined: 0x%x", VAR_7 );
    return 1;
}
