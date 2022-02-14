
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * b; } ;
typedef TYPE_1__ bo_t ;
typedef int block_t ;


 int VAR_0 ;
 size_t const VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,size_t const) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,size_t const,int const*) ;
 int FUNC_4 (TYPE_1__*,int) ;

block_t *FUNC_5( uint8_t VAR_2,
                           const uint8_t **VAR_3,
                           const size_t *VAR_4, uint8_t VAR_5,
                           const uint8_t **VAR_6,
                           const size_t *VAR_7, uint8_t VAR_8 )
{

    if( VAR_2 != 1 && VAR_2 != 2
     && VAR_2 != 4 )
        return ((void*)0);
    if( VAR_5 == 0 || VAR_5 > VAR_0 || VAR_8 == 0 )
        return ((void*)0);


    size_t VAR_9 = 0;
    for( size_t VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10 )
    {
        FUNC_0( VAR_3[VAR_10] && VAR_4[VAR_10] );
        if( VAR_4[VAR_10] < 4 || VAR_4[VAR_10] > VAR_1 )
            return ((void*)0);
        VAR_9 += VAR_4[VAR_10] + 2 ;
    }
    for( size_t VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11 )
    {
        FUNC_0( VAR_6[VAR_11] && VAR_7[VAR_11] );
        if( VAR_7[VAR_11] > VAR_1)
            return ((void*)0);
        VAR_9 += VAR_7[VAR_11] + 2 ;
    }

    bo_t VAR_12;

    if( FUNC_4( &VAR_12, 7 + VAR_9 ) != 1 )
        return ((void*)0);

    FUNC_2( &VAR_12, 1 );
    FUNC_3( &VAR_12, 3, &VAR_3[0][1] );
    FUNC_2( &VAR_12, 0xfc | (VAR_2 - 1) );

    FUNC_2( &VAR_12, 0xe0 | VAR_5 );
    for( size_t VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13 )
    {
        FUNC_1( &VAR_12, VAR_4[VAR_13] );
        FUNC_3( &VAR_12, VAR_4[VAR_13], VAR_3[VAR_13] );
    }

    FUNC_2( &VAR_12, VAR_8 );
    for( size_t VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14 )
    {
        FUNC_1( &VAR_12, VAR_7[VAR_14] );
        FUNC_3( &VAR_12, VAR_7[VAR_14], VAR_6[VAR_14] );
    }

    return VAR_12.b;
}
