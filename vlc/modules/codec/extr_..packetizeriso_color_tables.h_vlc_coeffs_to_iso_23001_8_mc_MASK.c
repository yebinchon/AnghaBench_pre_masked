
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ video_color_space_t ;
typedef enum iso_23001_8_mc { ____Placeholder_iso_23001_8_mc } iso_23001_8_mc ;


 size_t FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static inline enum iso_23001_8_mc FUNC_1( video_color_space_t VAR_2 )
{
    for(size_t VAR_3=1; VAR_3<FUNC_0(VAR_1); VAR_3++)
        if(VAR_1[VAR_3] == VAR_2)
            return (enum iso_23001_8_mc) VAR_3;
    return VAR_0;
}
