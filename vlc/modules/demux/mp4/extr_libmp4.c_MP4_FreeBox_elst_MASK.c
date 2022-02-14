
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_elst; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {int i_media_rate_fraction; int i_media_rate_integer; int i_media_time; int i_segment_duration; } ;
typedef TYPE_3__ MP4_Box_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    FUNC_0( VAR_0->data.p_elst->i_segment_duration );
    FUNC_0( VAR_0->data.p_elst->i_media_time );
    FUNC_0( VAR_0->data.p_elst->i_media_rate_integer );
    FUNC_0( VAR_0->data.p_elst->i_media_rate_fraction );
}
