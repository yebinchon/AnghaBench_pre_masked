
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_stream_number_count; int pi_stream_numbers; } ;
struct TYPE_4__ {TYPE_2__ bitrate_mutual_exclusion; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_bitrate_mutual_exclusion_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( asf_object_t *VAR_0)
{
    asf_object_bitrate_mutual_exclusion_t *VAR_1 = &VAR_0->bitrate_mutual_exclusion;

    FUNC_0( VAR_1->pi_stream_numbers );
    VAR_1->i_stream_number_count = 0;
}
