
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {scalar_t__ profile_idc; } ;
struct TYPE_6__ {scalar_t__ general_level_idc; TYPE_1__ general; } ;
struct TYPE_7__ {TYPE_2__ profile_tier_level; } ;
typedef TYPE_3__ hevc_sequence_parameter_set_t ;



bool FUNC_0( const hevc_sequence_parameter_set_t *VAR_0,
                                      uint8_t *VAR_1, uint8_t *VAR_2)
{
    if(VAR_0->profile_tier_level.general.profile_idc)
    {
        *VAR_1 = VAR_0->profile_tier_level.general.profile_idc;
        *VAR_2 = VAR_0->profile_tier_level.general_level_idc;
        return 1;
    }
    return 0;
}
