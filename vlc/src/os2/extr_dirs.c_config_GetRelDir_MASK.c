
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static const char *FUNC_0( const char *VAR_2 )
{
    static int VAR_3 = -1;

    if( VAR_3 == -1 )
    {
        VAR_3 = 0;
        while( VAR_0[ VAR_3 ] && VAR_1[ VAR_3 ]
               && VAR_0[ VAR_3 ] == VAR_1[ VAR_3])
            VAR_3++;
    }

    return VAR_2 + VAR_3;
}
