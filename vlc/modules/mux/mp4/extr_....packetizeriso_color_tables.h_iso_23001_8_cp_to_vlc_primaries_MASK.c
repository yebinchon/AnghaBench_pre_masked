
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_color_primaries_t ;
typedef size_t uint8_t ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static inline video_color_primaries_t FUNC_1( uint8_t VAR_4 )
{
    if( VAR_4 == VAR_2 )
        return VAR_0;
    return VAR_4 < FUNC_0(VAR_3)
           ? VAR_3[VAR_4]
           : VAR_1;
}
