
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int const uint32_t ;
typedef int mask ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int,char*) ;

unsigned FUNC_1( const uint32_t *VAR_3,
                                   const uint32_t *VAR_4,
                                   uint32_t VAR_5, uint8_t *restrict VAR_6 )
{
    FUNC_0(VAR_0 <= (sizeof (VAR_5) * VAR_1), "Missing bits");

    unsigned VAR_7 = 0;

    if( VAR_3 == ((void*)0) )
        VAR_3 = VAR_2;
    if( VAR_4 == ((void*)0) )
        VAR_4 = VAR_2;

    for( unsigned VAR_8 = 0; VAR_3[VAR_8]; VAR_8++ )
    {
        const uint32_t VAR_9 = VAR_3[VAR_8];
        if( !(VAR_5 & VAR_9) )
            continue;

        unsigned VAR_10 = 0;
        for( unsigned VAR_11 = 0; VAR_9 != VAR_4[VAR_11]; VAR_11++ )
            if( VAR_5 & VAR_4[VAR_11] )
                VAR_10++;

        VAR_6[VAR_7++] = VAR_10;
    }

    for( unsigned VAR_12 = 0; VAR_12 < VAR_7; VAR_12++ )
        if( VAR_6[VAR_12] != VAR_12 )
            return VAR_7;
    return 0;
}
