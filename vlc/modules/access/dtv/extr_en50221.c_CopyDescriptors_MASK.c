
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int system_ids_t ;


 scalar_t__ FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int const*,size_t) ;

__attribute__((used)) static size_t FUNC_4( const uint8_t *VAR_0, size_t VAR_1,
                               const system_ids_t *VAR_2, uint8_t *VAR_3 )
{
    size_t VAR_4 = 0;
    while( VAR_1 > 0 )
    {
        FUNC_2( VAR_0[0] == 0x09 );
        uint8_t VAR_5 = VAR_0[1];
        uint16_t VAR_6 = FUNC_1( &VAR_0[2] );
        if( FUNC_0( VAR_2, VAR_6 ) )
        {
            if( VAR_3 )
                FUNC_3( &VAR_3[VAR_4], VAR_0, (size_t) VAR_5 + 2 );
            VAR_4 += VAR_5 + 2;
        }
        VAR_1 = VAR_1 - VAR_5 - 2;
        VAR_0 += VAR_5 + 2;
    }
    return VAR_4;
}
