
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int const* VAR_3 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,size_t) ;

__attribute__((used)) static size_t FUNC_5(
    uint8_t **VAR_4,
    const uint8_t *VAR_5,
    size_t VAR_6 )
{
    size_t VAR_7;
    if ( VAR_6 > 0 && VAR_5 )
        VAR_7 = VAR_1 + VAR_6;
    else
        VAR_7 = 0;
    size_t VAR_8 = VAR_0 + VAR_7;

    *VAR_4 = FUNC_0( VAR_8 );
    if ( ! *VAR_4 )
    {
        return 0;
    }


    FUNC_1( *VAR_4, VAR_3, VAR_0 );

    if ( VAR_7 > 0 )
    {
        uint8_t *VAR_9 = *VAR_4 + VAR_0;


        *VAR_9 = VAR_2;
        VAR_9++;


        FUNC_3( VAR_9, VAR_6 );
        VAR_9 += 3;


        FUNC_2( VAR_9, 0, 7 );
        VAR_9 += 7;


        FUNC_1( VAR_9, VAR_5, VAR_6 );
        VAR_9 += VAR_6;


        FUNC_4( VAR_9, VAR_7 );
    }

    return VAR_8;
}
