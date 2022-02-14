
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ lower_bit_rate_constraint_flag; scalar_t__ one_picture_only_constraint_flag; scalar_t__ intra_constraint_flag; scalar_t__ max_monochrome_constraint_flag; scalar_t__ max_420chroma_constraint_flag; scalar_t__ max_422chroma_constraint_flag; scalar_t__ max_8bit_constraint_flag; scalar_t__ max_10bit_constraint_flag; scalar_t__ max_12bit_constraint_flag; scalar_t__ max_14bit_constraint_flag; } ;
struct TYPE_5__ {TYPE_1__ idc4to7; } ;
typedef TYPE_2__ hevc_inner_profile_tier_level_t ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static unsigned FUNC_1( const hevc_inner_profile_tier_level_t *VAR_0 )
{
    uint8_t VAR_1[] =
    {
        VAR_0->idc4to7.max_14bit_constraint_flag,
        VAR_0->idc4to7.max_12bit_constraint_flag,
        VAR_0->idc4to7.max_10bit_constraint_flag,
        VAR_0->idc4to7.max_8bit_constraint_flag,
        VAR_0->idc4to7.max_422chroma_constraint_flag,
        VAR_0->idc4to7.max_420chroma_constraint_flag,
        VAR_0->idc4to7.max_monochrome_constraint_flag,
        VAR_0->idc4to7.intra_constraint_flag,
        VAR_0->idc4to7.one_picture_only_constraint_flag,
        VAR_0->idc4to7.lower_bit_rate_constraint_flag,
    };
    unsigned VAR_2 = 0;
    for( size_t VAR_3=0; VAR_3<FUNC_0(VAR_1); VAR_3++ )
    {
        if( VAR_1[VAR_3] )
            VAR_2 |= (1 << (FUNC_0(VAR_1) - 1 - VAR_3));
    }
    return VAR_2;
}
