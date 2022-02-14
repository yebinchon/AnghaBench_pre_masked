
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ video_color_primaries_t ;
typedef enum iso_23001_8_cp { ____Placeholder_iso_23001_8_cp } iso_23001_8_cp ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static inline enum iso_23001_8_cp FUNC_1( video_color_primaries_t VAR_4 )
{
    for(size_t VAR_5=1; VAR_5<FUNC_0(VAR_3); VAR_5++)
        if(VAR_3[VAR_5] == VAR_4)
            return (enum iso_23001_8_cp) VAR_5;
    if( VAR_4 == VAR_0 )
        return VAR_1;
    else
        return VAR_2;
}
