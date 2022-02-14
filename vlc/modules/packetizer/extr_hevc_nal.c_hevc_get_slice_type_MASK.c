
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int slice_type; int dependent_slice_segment_flag; } ;
typedef TYPE_1__ hevc_slice_segment_header_t ;
typedef enum hevc_slice_type_e { ____Placeholder_hevc_slice_type_e } hevc_slice_type_e ;



bool FUNC_0( const hevc_slice_segment_header_t *VAR_0, enum hevc_slice_type_e *VAR_1 )
{
    if( !VAR_0->dependent_slice_segment_flag )
    {
        *VAR_1 = VAR_0->slice_type;
        return 1;
    }
    return 0;
}
