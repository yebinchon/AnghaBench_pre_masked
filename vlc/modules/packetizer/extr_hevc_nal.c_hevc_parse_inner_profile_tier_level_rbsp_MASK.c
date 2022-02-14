
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* inbld_flag; } ;
struct TYPE_5__ {void* one_picture_only_constraint_flag; void* max_14bit_constraint_flag; void* lower_bit_rate_constraint_flag; void* intra_constraint_flag; void* max_monochrome_constraint_flag; void* max_420chroma_constraint_flag; void* max_422chroma_constraint_flag; void* max_8bit_constraint_flag; void* max_10bit_constraint_flag; void* max_12bit_constraint_flag; } ;
struct TYPE_7__ {int profile_idc; int profile_compatibility_flag; TYPE_2__ idc1to5; TYPE_1__ idc4to7; void* frame_only_constraint_flag; void* non_packed_constraint_flag; void* interlaced_source_flag; void* progressive_source_flag; void* tier_flag; void* profile_space; } ;
typedef TYPE_3__ hevc_inner_profile_tier_level_t ;
typedef int bs_t ;


 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static bool FUNC_4( bs_t *VAR_0,
                                                      hevc_inner_profile_tier_level_t *VAR_1 )
{
    if( FUNC_2( VAR_0 ) < 88 )
        return 0;

    VAR_1->profile_space = FUNC_0( VAR_0, 2 );
    VAR_1->tier_flag = FUNC_1( VAR_0 );
    VAR_1->profile_idc = FUNC_0( VAR_0, 5 );
    VAR_1->profile_compatibility_flag = FUNC_0( VAR_0, 32 );
    VAR_1->progressive_source_flag = FUNC_1( VAR_0 );
    VAR_1->interlaced_source_flag = FUNC_1( VAR_0 );
    VAR_1->non_packed_constraint_flag = FUNC_1( VAR_0 );
    VAR_1->frame_only_constraint_flag = FUNC_1( VAR_0 );

    if( ( VAR_1->profile_idc >= 4 && VAR_1->profile_idc <= 10 ) ||
        ( VAR_1->profile_compatibility_flag & 0x0F700000 ) )
    {
        VAR_1->idc4to7.max_12bit_constraint_flag = FUNC_1( VAR_0 );
        VAR_1->idc4to7.max_10bit_constraint_flag = FUNC_1( VAR_0 );
        VAR_1->idc4to7.max_8bit_constraint_flag = FUNC_1( VAR_0 );
        VAR_1->idc4to7.max_422chroma_constraint_flag = FUNC_1( VAR_0 );
        VAR_1->idc4to7.max_420chroma_constraint_flag = FUNC_1( VAR_0 );
        VAR_1->idc4to7.max_monochrome_constraint_flag = FUNC_1( VAR_0 );
        VAR_1->idc4to7.intra_constraint_flag = FUNC_1( VAR_0 );
        VAR_1->idc4to7.one_picture_only_constraint_flag = FUNC_1( VAR_0 );
        VAR_1->idc4to7.lower_bit_rate_constraint_flag = FUNC_1( VAR_0 );
        if( VAR_1->profile_idc == 5 ||
            VAR_1->profile_idc == 9 ||
            VAR_1->profile_idc == 10 ||
           (VAR_1->profile_compatibility_flag & 0x08600000) )
        {
            VAR_1->idc4to7.max_14bit_constraint_flag = FUNC_1( VAR_0 );
            FUNC_3( VAR_0, 33 );
        }
        else FUNC_3( VAR_0, 34 );
    }
    else if( VAR_1->profile_idc == 2 ||
            (VAR_1->profile_compatibility_flag & 0x20000000) )
    {
        FUNC_3( VAR_0, 7 );
        VAR_1->idc4to7.one_picture_only_constraint_flag = FUNC_1( VAR_0 );
        FUNC_3( VAR_0, 35 );
    }
    else
    {
        FUNC_0( VAR_0, 43 );
    }

    if( ( VAR_1->profile_idc >= 1 && VAR_1->profile_idc <= 5 ) ||
         VAR_1->profile_idc == 9 ||
        ( VAR_1->profile_compatibility_flag & 0x7C400000 ) )
        VAR_1->idc1to5.inbld_flag = FUNC_1( VAR_0 );
    else
        FUNC_3( VAR_0, 1 );

    return 1;
}
