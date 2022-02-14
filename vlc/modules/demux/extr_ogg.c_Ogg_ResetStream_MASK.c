
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * p_blocks; int ** pp_append; } ;
struct TYPE_7__ {scalar_t__ i_prev_blocksize; } ;
struct TYPE_8__ {TYPE_1__ vorbis; } ;
struct TYPE_10__ {scalar_t__ i_codec; } ;
struct TYPE_11__ {int b_reinit; int b_interpolation_failed; TYPE_3__ queue; int os; int dts; scalar_t__ i_next_block_flags; int i_pcr; TYPE_2__ special; TYPE_4__ fmt; } ;
typedef TYPE_5__ logical_stream_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( logical_stream_t *VAR_2 )
{







    VAR_2->b_reinit = 1;
    VAR_2->i_pcr = VAR_1;
    VAR_2->i_next_block_flags = 0;
    VAR_2->b_interpolation_failed = 0;
    FUNC_1( &VAR_2->dts, VAR_1 );
    FUNC_2( &VAR_2->os );
    FUNC_0( VAR_2->queue.p_blocks );
    VAR_2->queue.p_blocks = ((void*)0);
    VAR_2->queue.pp_append = &VAR_2->queue.p_blocks;
}
