
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int i_rate; } ;
struct TYPE_20__ {TYPE_3__ audio; } ;
struct TYPE_17__ {scalar_t__ i_rate; } ;
struct TYPE_18__ {TYPE_1__ audio; } ;
struct TYPE_21__ {TYPE_4__ fmt_out; TYPE_2__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_22__ {scalar_t__ sample_rate; double scale; int bytes_stride_scaled; int bytes_stride; int frames_stride_scaled; int bytes_per_frame; scalar_t__ bytes_queued; scalar_t__ bytes_queue_max; scalar_t__ bytes_to_slide; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_23__ {size_t i_buffer; size_t i_nb_samples; int i_length; int i_pts; int i_dts; int * p_buffer; } ;
typedef TYPE_7__ block_t ;


 TYPE_7__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_7__*) ;
 size_t FUNC_2 (TYPE_5__*,size_t) ;
 size_t FUNC_3 (TYPE_5__*,int *,size_t,size_t) ;
 int FUNC_4 (TYPE_5__*,char*,int,int,int,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int *,size_t) ;
 int FUNC_6 (size_t,int ) ;

__attribute__((used)) static block_t *FUNC_7( filter_t * VAR_0, block_t * VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;

    if( VAR_0->fmt_in.audio.i_rate == VAR_2->sample_rate )
        return VAR_1;

    double VAR_3 = VAR_0->fmt_in.audio.i_rate / (double)VAR_2->sample_rate;
    if( VAR_3 != VAR_2->scale ) {
        VAR_2->scale = VAR_3;
        VAR_2->bytes_stride_scaled = VAR_2->bytes_stride * VAR_2->scale;
        VAR_2->frames_stride_scaled = VAR_2->bytes_stride_scaled / VAR_2->bytes_per_frame;
        VAR_2->bytes_to_slide = 0;
        FUNC_4( VAR_0, "%.3f scale, %.3f stride_in, %i stride_out rate: %u",
                 VAR_2->scale, VAR_2->frames_stride_scaled,
                 (int)( VAR_2->bytes_stride / VAR_2->bytes_per_frame ), VAR_2->sample_rate );
    }

    block_t *VAR_4 = ((void*)0);
    size_t VAR_5 = FUNC_2 ( VAR_0, VAR_1->i_buffer );

    size_t VAR_6 = FUNC_3( VAR_0, VAR_1->p_buffer,
                                   VAR_1->i_buffer, 0 );
    if( VAR_5 > 0 )
    {
        VAR_4 = FUNC_0( VAR_5 );
        if( VAR_4 == ((void*)0) )
        {
            FUNC_1( VAR_1 );
            return ((void*)0);
        }
        size_t VAR_7 = 0;
        while( VAR_2->bytes_queued >= VAR_2->bytes_queue_max )
        {
            VAR_7 += FUNC_5( VAR_0,
                                           &VAR_4->p_buffer[VAR_7],
                                           VAR_4->i_buffer - VAR_7 );
            VAR_6 += FUNC_3( VAR_0, VAR_1->p_buffer,
                                     VAR_1->i_buffer, VAR_6 );
        }
        VAR_4->i_buffer = VAR_7;
        VAR_4->i_nb_samples = VAR_7 / VAR_2->bytes_per_frame;
        VAR_4->i_dts = VAR_1->i_dts;
        VAR_4->i_pts = VAR_1->i_pts;
        VAR_4->i_length = FUNC_6(VAR_4->i_nb_samples,
                                                    VAR_0->fmt_out.audio.i_rate);
    }

    FUNC_1( VAR_1 );
    return VAR_4;
}
