
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_13__ {scalar_t__ i_divider_num; } ;
struct TYPE_10__ {TYPE_7__ pts; TYPE_4__* p_context; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {int ticks_per_frame; } ;
struct TYPE_11__ {scalar_t__ repeat_pict; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*,scalar_t__) ;

__attribute__((used)) static vlc_tick_t FUNC_2( decoder_t *VAR_1, AVFrame *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    AVCodecContext *VAR_4 = VAR_3->p_context;

    if( VAR_3->pts.i_divider_num == 0 ||
        FUNC_0( &VAR_3->pts ) == VAR_0 )
        return VAR_0;

    int VAR_5 = VAR_4->ticks_per_frame;
    if( VAR_5 <= 0 )
        VAR_5 = 1;


    return FUNC_1( &VAR_3->pts, VAR_5 + VAR_2->repeat_pict );
}
