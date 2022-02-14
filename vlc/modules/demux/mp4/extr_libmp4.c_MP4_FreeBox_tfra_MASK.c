
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_tfra; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
struct TYPE_6__ {int p_sample_number; int p_trun_number; int p_traf_number; int p_moof_offset; int p_time; } ;
typedef TYPE_3__ MP4_Box_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    FUNC_0( VAR_0->data.p_tfra->p_time );
    FUNC_0( VAR_0->data.p_tfra->p_moof_offset );
    FUNC_0( VAR_0->data.p_tfra->p_traf_number );
    FUNC_0( VAR_0->data.p_tfra->p_trun_number );
    FUNC_0( VAR_0->data.p_tfra->p_sample_number );
}
