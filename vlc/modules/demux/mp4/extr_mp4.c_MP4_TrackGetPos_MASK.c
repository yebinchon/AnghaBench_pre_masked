
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


typedef int uint64_t ;
struct TYPE_13__ {int i_blockalign; } ;
struct TYPE_14__ {scalar_t__ i_cat; int i_codec; TYPE_3__ audio; } ;
struct TYPE_16__ {size_t i_chunk; int i_sample_size; int i_sample; scalar_t__* p_sample_size; TYPE_5__* chunk; TYPE_4__ fmt; TYPE_2__* p_sample; } ;
typedef TYPE_6__ mp4_track_t ;
struct TYPE_17__ {scalar_t__ i_compressionid; scalar_t__ i_qt_version; int i_sample_per_packet; int i_bytes_per_frame; } ;
struct TYPE_15__ {int i_offset; int i_sample_first; } ;
struct TYPE_11__ {TYPE_7__* p_sample_soun; } ;
struct TYPE_12__ {TYPE_1__ data; } ;
typedef TYPE_7__ MP4_Box_data_sample_soun_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*,TYPE_7__*) ;



__attribute__((used)) static uint64_t FUNC_1( mp4_track_t *VAR_1 )
{
    unsigned int VAR_2;
    uint64_t VAR_3;

    VAR_3 = VAR_1->chunk[VAR_1->i_chunk].i_offset;

    if( VAR_1->i_sample_size )
    {
        MP4_Box_data_sample_soun_t *VAR_4 =
            VAR_1->p_sample->data.p_sample_soun;


        if( VAR_1->fmt.i_cat == VAR_0 && VAR_4->i_compressionid == 0 &&
            VAR_1->i_sample_size == 1 )
        {
            switch( VAR_1->fmt.i_codec )
            {
            case 128:
                VAR_3 += ( VAR_1->i_sample -
                           VAR_1->chunk[VAR_1->i_chunk].i_sample_first ) / 160 * 33;
                return VAR_3;
            case 129:
                VAR_3 += ( VAR_1->i_sample -
                           VAR_1->chunk[VAR_1->i_chunk].i_sample_first ) / 64 * 34;
                return VAR_3;
            default:
                break;
            }
        }

        if( VAR_1->fmt.i_cat != VAR_0 || VAR_4->i_qt_version == 0 ||
            VAR_1->fmt.audio.i_blockalign <= 1 ||
            VAR_4->i_sample_per_packet * VAR_4->i_bytes_per_frame == 0 )
        {
            VAR_3 += ( VAR_1->i_sample -
                       VAR_1->chunk[VAR_1->i_chunk].i_sample_first ) *
                     FUNC_0( VAR_1, VAR_4 );
        }
        else
        {

            VAR_3 += ( VAR_1->i_sample - VAR_1->chunk[VAR_1->i_chunk].i_sample_first ) /
                        VAR_4->i_sample_per_packet * VAR_4->i_bytes_per_frame;
        }
    }
    else
    {
        for( VAR_2 = VAR_1->chunk[VAR_1->i_chunk].i_sample_first;
             VAR_2 < VAR_1->i_sample; VAR_2++ )
        {
            VAR_3 += VAR_1->p_sample_size[VAR_2];
        }
    }

    return VAR_3;
}
