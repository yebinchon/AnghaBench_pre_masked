
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int uint32_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64_t FUNC_0( vlc_tick_t VAR_2, uint32_t VAR_3, uint32_t VAR_4 )
{

    if( VAR_3 == VAR_4 )
        return VAR_2;

    if( (VAR_2 >= 0 && VAR_2 <= VAR_0 / VAR_4) ||
        (VAR_2 < 0 && VAR_2 >= VAR_1 / VAR_4) )
        return VAR_2 * VAR_4 / VAR_3;


    int64_t VAR_5 = VAR_2 / VAR_3;
    int64_t VAR_6 = VAR_2 % VAR_3;
    return VAR_5 * VAR_4 + VAR_6 * VAR_4 / VAR_3;
}
