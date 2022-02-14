
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int64_t ;


 int VAR_0 ;

__attribute__((used)) static int64_t FUNC_0( int64_t VAR_1, uint32_t VAR_2, uint32_t VAR_3 )
{
    if( VAR_2 == VAR_3 )
        return VAR_1;

    if( VAR_1 <= VAR_0 / VAR_3 )
        return VAR_1 * VAR_3 / VAR_2;


    int64_t VAR_4 = VAR_1 / VAR_2;
    int64_t VAR_5 = VAR_1 % VAR_2;
    return VAR_4 * VAR_3 + VAR_5 * VAR_3 / VAR_2;
}
