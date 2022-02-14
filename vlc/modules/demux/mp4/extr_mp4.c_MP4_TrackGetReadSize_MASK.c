
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int i_blockalign; int i_channels; int i_rate; } ;
struct TYPE_14__ {scalar_t__ i_cat; scalar_t__ i_original_fourcc; int i_codec; TYPE_3__ audio; } ;
struct TYPE_15__ {size_t i_sample; size_t i_sample_count; scalar_t__ i_sample_size; int* p_sample_size; size_t i_chunk; TYPE_4__ fmt; TYPE_6__* chunk; TYPE_2__* p_sample; } ;
typedef TYPE_5__ mp4_track_t ;
struct TYPE_16__ {int i_sample_count; int i_sample; int i_sample_first; } ;
typedef TYPE_6__ mp4_chunk_t ;
struct TYPE_17__ {int i_constLPCMframesperaudiopacket; int i_constbytesperaudiopacket; int i_qt_version; int i_compressionid; int i_bytes_per_sample; int i_sample_per_packet; int i_bytes_per_frame; } ;
struct TYPE_11__ {TYPE_7__* p_sample_soun; } ;
struct TYPE_12__ {TYPE_1__ data; } ;
typedef TYPE_7__ MP4_Box_data_sample_soun_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_7__ const*) ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;





 scalar_t__ FUNC_1 (char,char,char,char) ;

__attribute__((used)) static uint32_t FUNC_2( mp4_track_t *VAR_3, uint32_t *VAR_4 )
{
    uint32_t VAR_5 = 0;
    *VAR_4 = 0;

    if ( VAR_3->i_sample == VAR_3->i_sample_count )
        return 0;

    if ( VAR_3->fmt.i_cat != VAR_0 )
    {
        *VAR_4 = 1;

        if( VAR_3->i_sample_size == 0 )
            return VAR_3->p_sample_size[VAR_3->i_sample];
        else
            return VAR_3->i_sample_size;
    }
    else
    {
        const MP4_Box_data_sample_soun_t *VAR_6 = VAR_3->p_sample->data.p_sample_soun;
        const mp4_chunk_t *VAR_7 = &VAR_3->chunk[VAR_3->i_chunk];
        uint32_t VAR_8 = VAR_7->i_sample_count - VAR_7->i_sample;


        if( VAR_3->fmt.i_original_fourcc == VAR_2 &&
            VAR_6->i_constLPCMframesperaudiopacket &&
            VAR_6->i_constbytesperaudiopacket )
        {

            uint32_t VAR_9 = VAR_8 / VAR_6->i_constLPCMframesperaudiopacket;
            if ( VAR_1 / VAR_6->i_constbytesperaudiopacket < VAR_9 )
                VAR_9 = VAR_1 / VAR_6->i_constbytesperaudiopacket;
            *VAR_4 = VAR_9 * VAR_6->i_constLPCMframesperaudiopacket;
            return VAR_9 * VAR_6->i_constbytesperaudiopacket;
        }

        if( VAR_3->fmt.i_original_fourcc == FUNC_1('r','r','t','p') )
        {
            *VAR_4 = 1;
            return VAR_3->i_sample_size;
        }


        if( VAR_3->i_sample_size == 0 )
        {
            *VAR_4 = 1;
            return VAR_3->p_sample_size[VAR_3->i_sample];
        }

        if( VAR_6->i_qt_version == 1 )
        {
            if ( VAR_6->i_compressionid == 0xFFFE )
            {
                *VAR_4 = 1;
                if ( VAR_3->i_sample_size )
                    return VAR_3->i_sample_size;
                else
                    return VAR_3->p_sample_size[VAR_3->i_sample];
            }
            else if ( VAR_6->i_compressionid != 0 || VAR_6->i_bytes_per_sample > 1 )
            {


                *VAR_4 = VAR_8;
                if( VAR_3->fmt.audio.i_blockalign > 1 )
                    *VAR_4 = VAR_6->i_sample_per_packet;
                VAR_5 = *VAR_4 / VAR_6->i_sample_per_packet * VAR_6->i_bytes_per_frame;
                return VAR_5;
            }
            else
            {
                uint32_t VAR_10;
                if( VAR_3->fmt.audio.i_blockalign > 1 )
                    VAR_10 = 1;
                else
                    VAR_10 = VAR_8 / VAR_6->i_sample_per_packet;

                if ( VAR_1 / VAR_6->i_bytes_per_frame < VAR_10 )
                    VAR_10 = VAR_1 / VAR_6->i_bytes_per_frame;

                *VAR_4 = VAR_10 * VAR_6->i_sample_per_packet;
                VAR_5 = VAR_10 * VAR_6->i_bytes_per_frame;
                return VAR_5;
            }
        }




        if( VAR_6->i_compressionid == 0 && VAR_3->i_sample_size == 1 )
        {
            switch( VAR_3->fmt.i_codec )
            {

                case 132:
                    *VAR_4 = 160 * VAR_3->fmt.audio.i_channels;
                    return 33 * VAR_3->fmt.audio.i_channels;
                case 136:
                    *VAR_4 = 64 * VAR_3->fmt.audio.i_channels;
                    return 34 * VAR_3->fmt.audio.i_channels;
                default:
                    break;
            }
        }


        uint32_t VAR_11;
        switch( VAR_3->fmt.i_codec )
        {

            case 135:
            case 134:
                VAR_11 = 16;
                break;
            case 128:
            case 131:
            case 130:
            case 133:
            case 129:
            case 137:
                VAR_11 = 1;
                break;

            default:

                VAR_11 = VAR_3->fmt.audio.i_rate / 40 *
                                   VAR_3->fmt.audio.i_channels;
                if( VAR_11 < 1 )
                    VAR_11 = 1;
                break;
        }

        *VAR_4 = 0;
        for( uint32_t VAR_12=VAR_3->i_sample;
             VAR_12<VAR_7->i_sample_first+VAR_7->i_sample_count &&
             VAR_12<VAR_3->i_sample_count;
             VAR_12++ )
        {
            (*VAR_4)++;
            if ( VAR_3->i_sample_size == 0 )
                VAR_5 += VAR_3->p_sample_size[VAR_12];
            else
                VAR_5 += FUNC_0( VAR_3, VAR_6 );


            if(VAR_6->i_compressionid != 0)
            {

                break;
            }

            if ( *VAR_4 == VAR_11 )
                break;
        }
    }


    return VAR_5;
}
