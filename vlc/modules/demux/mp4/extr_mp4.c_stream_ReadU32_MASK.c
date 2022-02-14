
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int stream_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,size_t) ;

__attribute__((used)) static uint32_t FUNC_1( stream_t *VAR_1, void *VAR_2, uint32_t VAR_3 )
{
    ssize_t VAR_4 = 0;
    if ( VAR_3 > VAR_0 )
    {
        VAR_4 = FUNC_0( VAR_1, VAR_2, (size_t) VAR_0 );
        if ( VAR_4 < VAR_0 )
            return VAR_4;
        else
            VAR_3 -= VAR_0;
    }
    VAR_4 += FUNC_0( VAR_1, (uint8_t *)VAR_2 + VAR_4, (size_t) VAR_3 );
    return VAR_4;
}
