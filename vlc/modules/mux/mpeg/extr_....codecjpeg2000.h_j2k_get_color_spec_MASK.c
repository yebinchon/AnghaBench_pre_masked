
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ video_transfer_func_t ;
typedef scalar_t__ video_color_space_t ;
typedef scalar_t__ video_color_primaries_t ;
typedef enum j2k_color_specs_e { ____Placeholder_j2k_color_specs_e } j2k_color_specs_e ;
struct TYPE_2__ {scalar_t__ primaries; scalar_t__ transfer; scalar_t__ space; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline enum j2k_color_specs_e
        FUNC_0( video_color_primaries_t VAR_3,
                            video_transfer_func_t VAR_4 ,
                            video_color_space_t VAR_5 )
{
    enum j2k_color_specs_e VAR_6;
    for( VAR_6 = VAR_1; VAR_6 <= VAR_0; VAR_6++ )
    {
        if( VAR_3 == VAR_2[VAR_6].primaries &&
            VAR_4 == VAR_2[VAR_6].transfer &&
            VAR_5 == VAR_2[VAR_6].space )
        {
            return VAR_6;
        }
    }
    return VAR_1;
}
