
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int i_avgbytespersec; int i_block_align; int i_channels; } ;
struct TYPE_6__ {int i_width; int i_height; } ;
struct TYPE_8__ {TYPE_2__ audio; TYPE_1__ video; } ;
struct TYPE_9__ {int i_default_len; int i_buffer_size; int i_padding_1; int i_size; TYPE_3__ header; int i_padding_0; int i_bits_per_sample; int i_samples_per_unit; int i_time_unit; int * sub_type; int * stream_type; int i_packet_type; } ;
typedef TYPE_4__ oggds_header_t ;
typedef int int32_t ;



 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int32_t FUNC_4( uint8_t *VAR_0, oggds_header_t *VAR_1, int VAR_2 )
{
    int VAR_3 = 0;
    VAR_0[VAR_3] = VAR_1->i_packet_type;
    VAR_3++;
    FUNC_3( &VAR_0[VAR_3], VAR_1->stream_type, sizeof(VAR_1->stream_type) );
    VAR_3 += sizeof(VAR_1->stream_type);
    FUNC_3(&VAR_0[VAR_3], VAR_1->sub_type, sizeof(VAR_1->sub_type) );
    VAR_3 += sizeof(VAR_1->sub_type);


    uint8_t *VAR_4 = &VAR_0[VAR_3];
    VAR_3 += 4;

    FUNC_1( &VAR_0[VAR_3], VAR_1->i_time_unit );
    VAR_3 += 8;
    FUNC_1( &VAR_0[VAR_3], VAR_1->i_samples_per_unit );
    VAR_3 += 8;
    FUNC_0( &VAR_0[VAR_3], VAR_1->i_default_len );
    VAR_3 += 4;
    FUNC_0( &VAR_0[VAR_3], VAR_1->i_buffer_size );
    VAR_3 += 4;
    FUNC_2( &VAR_0[VAR_3], VAR_1->i_bits_per_sample );
    VAR_3 += 2;
    FUNC_2( &VAR_0[VAR_3], VAR_1->i_padding_0 );
    VAR_3 += 2;

    switch( VAR_2 )
    {
    case 128:
        FUNC_0( &VAR_0[VAR_3], VAR_1->header.video.i_width );
        FUNC_0( &VAR_0[VAR_3+4], VAR_1->header.video.i_height );
        break;
    case 129:
        FUNC_2( &VAR_0[VAR_3], VAR_1->header.audio.i_channels );
        FUNC_2( &VAR_0[VAR_3+2], VAR_1->header.audio.i_block_align );
        FUNC_0( &VAR_0[VAR_3+4], VAR_1->header.audio.i_avgbytespersec );
        break;
    }
    VAR_3 += 8;
    FUNC_0( &VAR_0[VAR_3], VAR_1->i_padding_1 );
    VAR_3 += 4;


    if( VAR_1->i_size > 0 )
    {
        FUNC_3( &VAR_0[VAR_3], (uint8_t *) VAR_1 + sizeof(*VAR_1), VAR_1->i_size );
        VAR_3 += VAR_1->i_size;
    }

    FUNC_0( VAR_4, VAR_3-1 );
    return VAR_3;
}
