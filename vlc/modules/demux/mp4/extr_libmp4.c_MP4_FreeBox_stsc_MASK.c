
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_stsc; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {int i_sample_description_index; int i_samples_per_chunk; int i_first_chunk; } ;
typedef TYPE_3__ MP4_Box_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    FUNC_0( VAR_0->data.p_stsc->i_first_chunk );
    FUNC_0( VAR_0->data.p_stsc->i_samples_per_chunk );
    FUNC_0( VAR_0->data.p_stsc->i_sample_description_index );
}
