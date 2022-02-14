
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ intra_constraint_flag; } ;
struct TYPE_9__ {int profile_idc; TYPE_1__ idc4to7; } ;
struct TYPE_7__ {TYPE_4__ general; } ;
struct TYPE_8__ {TYPE_2__ profile_tier_level; } ;
typedef TYPE_3__ hevc_sequence_parameter_set_t ;
typedef enum vlc_hevc_profile_e { ____Placeholder_vlc_hevc_profile_e } vlc_hevc_profile_e ;
typedef enum hevc_general_profile_idc_e { ____Placeholder_hevc_general_profile_idc_e } hevc_general_profile_idc_e ;


 unsigned int VAR_0 ;



 int FUNC_0 (TYPE_4__*) ;

enum vlc_hevc_profile_e FUNC_1( const hevc_sequence_parameter_set_t *VAR_1 )
{
    unsigned VAR_2 = 0;
    enum hevc_general_profile_idc_e VAR_3 = VAR_1->profile_tier_level.general.profile_idc;
    switch( VAR_3 )
    {
        case 129:
            VAR_2 = FUNC_0( &VAR_1->profile_tier_level.general ) & 0x1FF;
            break;
        case 130:
        case 128:
            VAR_2 = FUNC_0( &VAR_1->profile_tier_level.general );
            break;
        default:
            break;
    }


    if( VAR_1->profile_tier_level.general.idc4to7.intra_constraint_flag )
        VAR_2 &= ~1;

    return (VAR_2 << VAR_0) | VAR_3;
}
