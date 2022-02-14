
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_sample_size; int p_sample_offset_pts; int p_sample_count_pts; int p_sample_delta_dts; int p_sample_count_dts; } ;
typedef TYPE_1__ mp4_chunk_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( mp4_chunk_t *VAR_0 )
{
    FUNC_0( VAR_0->p_sample_count_dts );
    FUNC_0( VAR_0->p_sample_delta_dts );
    FUNC_0( VAR_0->p_sample_count_pts );
    FUNC_0( VAR_0->p_sample_offset_pts );
    FUNC_0( VAR_0->p_sample_size );
}
