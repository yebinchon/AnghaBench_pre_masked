
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_10__ {int lock; } ;
struct TYPE_8__ {unsigned int i_visible_width; unsigned int i_visible_height; } ;
struct TYPE_9__ {TYPE_2__ video; } ;
struct TYPE_7__ {unsigned int i_visible_width; unsigned int i_visible_height; } ;
struct TYPE_11__ {TYPE_4__ fifo; TYPE_3__ decoder_out; TYPE_1__ fmt_input_video; } ;
typedef TYPE_5__ sout_stream_id_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3( sout_stream_t *VAR_2, sout_stream_id_sys_t *VAR_3,
                                           unsigned *VAR_4, unsigned *VAR_5 )
{
    FUNC_0(VAR_2);
    FUNC_1( &VAR_3->fifo.lock );
    *VAR_4 = VAR_3->fmt_input_video.i_visible_width;
    *VAR_5 = VAR_3->fmt_input_video.i_visible_height;
    if( !*VAR_4 || !*VAR_5 )
    {
        *VAR_4 = VAR_3->decoder_out.video.i_visible_width;
        *VAR_5 = VAR_3->decoder_out.video.i_visible_height;
    }
    FUNC_2( &VAR_3->fifo.lock );
    return (*VAR_4 && *VAR_5) ? VAR_1 : VAR_0;
}
