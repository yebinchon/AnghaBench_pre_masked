
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_blocks; int * pp_append; } ;
struct TYPE_6__ {int i_first_frame_index; int b_initializing; int b_contiguous; TYPE_1__ queue; int dts; int i_pcr; int fmt_old; int fmt; } ;
typedef TYPE_2__ logical_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_3( logical_stream_t *VAR_2 )
{
    FUNC_2( VAR_2, 0, sizeof(logical_stream_t) );
    FUNC_1( &VAR_2->fmt, VAR_0, 0 );
    FUNC_1( &VAR_2->fmt_old, VAR_0, 0 );
    VAR_2->i_pcr = VAR_1;
    VAR_2->i_first_frame_index = 1;
    FUNC_0( &VAR_2->dts, VAR_1 );
    VAR_2->b_initializing = 1;
    VAR_2->b_contiguous = 1;
    VAR_2->queue.pp_append = &VAR_2->queue.p_blocks;
}
