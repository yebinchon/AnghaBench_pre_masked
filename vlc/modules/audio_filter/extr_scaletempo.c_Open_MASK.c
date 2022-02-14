
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_13__ {int i_format; int i_rate; } ;
struct TYPE_10__ {TYPE_7__ audio; } ;
struct TYPE_9__ {TYPE_7__ audio; } ;
struct TYPE_11__ {int pf_audio_filter; TYPE_2__ fmt_in; TYPE_1__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_12__ {double scale; int samples_per_frame; int bytes_per_sample; int bytes_per_frame; scalar_t__ frames_stride_error; scalar_t__ bytes_to_slide; scalar_t__ bytes_queued; scalar_t__ bytes_overlap; int * table_window; int * buf_pre_corr; int * table_blend; int * buf_overlap; int * buf_queue; void* ms_search; int percent_overlap; void* ms_stride; int sample_rate; } ;
typedef TYPE_4__ filter_sys_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,void*,int,int,...) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,char*) ;

__attribute__((used)) static int FUNC_8( vlc_object_t *VAR_5 )
{
    filter_t *VAR_6 = (filter_t *)VAR_5;


    filter_sys_t *VAR_7 = VAR_6->p_sys = FUNC_3( sizeof(*VAR_7) );
    if( ! VAR_7 )
        return VAR_3;

    VAR_7->scale = 1.0;
    VAR_7->sample_rate = VAR_6->fmt_in.audio.i_rate;
    VAR_7->samples_per_frame = FUNC_1( &VAR_6->fmt_in.audio );
    VAR_7->bytes_per_sample = 4;
    VAR_7->bytes_per_frame = VAR_7->samples_per_frame * VAR_7->bytes_per_sample;

    FUNC_4( VAR_5, "format: %5i rate, %i nch, %i bps, %s",
             VAR_7->sample_rate,
             VAR_7->samples_per_frame,
             VAR_7->bytes_per_sample,
             "fl32" );

    VAR_7->ms_stride = FUNC_7( VAR_5, "scaletempo-stride" );
    VAR_7->percent_overlap = FUNC_6( VAR_5, "scaletempo-overlap" );
    VAR_7->ms_search = FUNC_7( VAR_5, "scaletempo-search" );

    FUNC_4( VAR_5, "params: %i stride, %.3f overlap, %i search",
             VAR_7->ms_stride, VAR_7->percent_overlap, VAR_7->ms_search );

    VAR_7->buf_queue = ((void*)0);
    VAR_7->buf_overlap = ((void*)0);
    VAR_7->table_blend = ((void*)0);
    VAR_7->buf_pre_corr = ((void*)0);
    VAR_7->table_window = ((void*)0);
    VAR_7->bytes_overlap = 0;
    VAR_7->bytes_queued = 0;
    VAR_7->bytes_to_slide = 0;
    VAR_7->frames_stride_error = 0;

    if( FUNC_5( VAR_6 ) != VAR_4 )
    {
        FUNC_0( VAR_5 );
        return VAR_2;
    }

    VAR_6->fmt_in.audio.i_format = VAR_1;
    FUNC_2(&VAR_6->fmt_in.audio);
    VAR_6->fmt_out.audio = VAR_6->fmt_in.audio;
    VAR_6->pf_audio_filter = VAR_0;

    return VAR_4;
}
