
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {double ms_stride; double sample_rate; unsigned int bytes_stride; unsigned int bytes_per_frame; unsigned int percent_overlap; unsigned int bytes_overlap; int bytes_standing; int samples_standing; int bytes_per_sample; unsigned int samples_overlap; unsigned int samples_per_frame; float* table_blend; double frames_search; double ms_search; float* table_window; unsigned int bytes_queued; unsigned int bytes_to_slide; unsigned int bytes_queue_max; int bytes_stride_scaled; int scale; int frames_stride_scaled; void* buf_queue; int * best_overlap_offset; void* buf_pre_corr; int * output_overlap; void* buf_overlap; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int * VAR_2 ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (void*,void*,unsigned int) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (int ,char*,int,int,int,int,int,unsigned int,int,char*) ;
 int * VAR_3 ;
 void* FUNC_6 (int,unsigned int) ;

__attribute__((used)) static int FUNC_7( filter_t *VAR_4 )
{
    filter_sys_t *VAR_5 = VAR_4->p_sys;
    unsigned VAR_6,VAR_7;

    unsigned VAR_8 = VAR_5->ms_stride * VAR_5->sample_rate / 1000.0;
    VAR_5->bytes_stride = VAR_8 * VAR_5->bytes_per_frame;


    unsigned VAR_9 = VAR_8 * VAR_5->percent_overlap;
    if( VAR_9 < 1 )
    {
        VAR_5->bytes_overlap = 0;
        VAR_5->bytes_standing = VAR_5->bytes_stride;
        VAR_5->samples_standing = VAR_5->bytes_standing / VAR_5->bytes_per_sample;
        VAR_5->output_overlap = ((void*)0);
    }
    else
    {
        unsigned VAR_10 = VAR_5->bytes_overlap;
        VAR_5->bytes_overlap = VAR_9 * VAR_5->bytes_per_frame;
        VAR_5->samples_overlap = VAR_9 * VAR_5->samples_per_frame;
        VAR_5->bytes_standing = VAR_5->bytes_stride - VAR_5->bytes_overlap;
        VAR_5->samples_standing = VAR_5->bytes_standing / VAR_5->bytes_per_sample;
        VAR_5->buf_overlap = FUNC_6( 1, VAR_5->bytes_overlap );
        VAR_5->table_blend = FUNC_6( 4, VAR_5->samples_overlap );
        if( !VAR_5->buf_overlap || !VAR_5->table_blend )
            return VAR_0;
        if( VAR_5->bytes_overlap > VAR_10 )
            FUNC_4( (uint8_t *)VAR_5->buf_overlap + VAR_10, 0, VAR_5->bytes_overlap - VAR_10 );

        float *VAR_11 = VAR_5->table_blend;
        float VAR_12 = (float)VAR_9;
        for( VAR_6 = 0; VAR_6<VAR_9; VAR_6++ )
        {
            float VAR_13 = VAR_6 / VAR_12;
            for( VAR_7 = 0; VAR_7 < VAR_5->samples_per_frame; VAR_7++ )
                *VAR_11++ = VAR_13;
        }
        VAR_5->output_overlap = VAR_3;
    }


    VAR_5->frames_search = ( VAR_9 <= 1 ) ? 0 : VAR_5->ms_search * VAR_5->sample_rate / 1000.0;
    if( VAR_5->frames_search < 1 )
    {
        VAR_5->best_overlap_offset = ((void*)0);
    }
    else
    {
        unsigned VAR_14 = ( VAR_5->samples_overlap - VAR_5->samples_per_frame ) * 4;
        VAR_5->buf_pre_corr = FUNC_2( VAR_14 );
        VAR_5->table_window = FUNC_2( VAR_14 );
        if( ! VAR_5->buf_pre_corr || ! VAR_5->table_window )
            return VAR_0;
        float *VAR_15 = VAR_5->table_window;
        for( VAR_6 = 1; VAR_6<VAR_9; VAR_6++ )
        {
            float VAR_16 = VAR_6 * ( VAR_9 - VAR_6 );
            for( VAR_7 = 0; VAR_7 < VAR_5->samples_per_frame; VAR_7++ )
                *VAR_15++ = VAR_16;
        }
        VAR_5->best_overlap_offset = VAR_2;
    }

    unsigned VAR_17 = ( VAR_5->frames_search + VAR_8 + VAR_9 ) * VAR_5->bytes_per_frame;
    if( VAR_5->bytes_queued > VAR_17 )
    {
        if( VAR_5->bytes_to_slide > VAR_5->bytes_queued )
        {
          VAR_5->bytes_to_slide -= VAR_5->bytes_queued;
          VAR_5->bytes_queued = 0;
        }
        else
        {
            unsigned VAR_18 = FUNC_1( VAR_5->bytes_queued - VAR_5->bytes_to_slide, VAR_17 );
            FUNC_3( VAR_5->buf_queue,
                     VAR_5->buf_queue + VAR_5->bytes_queued - VAR_18,
                     VAR_18 );
            VAR_5->bytes_to_slide = 0;
            VAR_5->bytes_queued = VAR_18;
        }
    }
    VAR_5->bytes_queue_max = VAR_17;
    VAR_5->buf_queue = FUNC_2( VAR_5->bytes_queue_max );
    if( ! VAR_5->buf_queue )
        return VAR_0;

    VAR_5->bytes_stride_scaled = VAR_5->bytes_stride * VAR_5->scale;
    VAR_5->frames_stride_scaled = VAR_5->bytes_stride_scaled / VAR_5->bytes_per_frame;

    FUNC_5( FUNC_0(VAR_4),
             "%.3f scale, %.3f stride_in, %i stride_out, %i standing, %i overlap, %i search, %i queue, %s mode",
             VAR_5->scale,
             VAR_5->frames_stride_scaled,
             (int)( VAR_5->bytes_stride / VAR_5->bytes_per_frame ),
             (int)( VAR_5->bytes_standing / VAR_5->bytes_per_frame ),
             (int)( VAR_5->bytes_overlap / VAR_5->bytes_per_frame ),
             VAR_5->frames_search,
             (int)( VAR_5->bytes_queue_max / VAR_5->bytes_per_frame ),
             "fl32");

    return VAR_1;
}
