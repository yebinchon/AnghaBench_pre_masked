
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_transfer_func_t ;
typedef int video_color_space_t ;
typedef int video_color_primaries_t ;
typedef enum j2k_color_specs_e { ____Placeholder_j2k_color_specs_e } j2k_color_specs_e ;
struct TYPE_2__ {int space; int transfer; int primaries; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline void FUNC_0( enum j2k_color_specs_e VAR_3,
                                           video_color_primaries_t *VAR_4,
                                           video_transfer_func_t *VAR_5,
                                           video_color_space_t *VAR_6 )
{
    if( VAR_3 > VAR_1 && VAR_3 <= VAR_0 )
    {
        *VAR_4 = VAR_2[VAR_3].primaries;
        *VAR_5 = VAR_2[VAR_3].transfer;
        *VAR_6 = VAR_2[VAR_3].space;
    }
}
