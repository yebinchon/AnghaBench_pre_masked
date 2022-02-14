
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0( const uint8_t *VAR_3, size_t VAR_4, uint64_t *VAR_5, uint32_t *VAR_6 )
{
    *VAR_6 = 0;

    uint64_t VAR_7 = 0;
    bool VAR_8 = 0;

    for( uint32_t VAR_9 = 0; VAR_9 < VAR_4; VAR_9++ )
    {
        if( (( VAR_7 >> 32 ) << 7 ) > VAR_0 )
        {
            return VAR_1;
        }
        uint8_t VAR_10 = VAR_3[VAR_9];
        VAR_7 = ( VAR_7 << 7 ) | ( VAR_10 & 0x7f );

        ( *VAR_6 )++;

        if( !( VAR_10 & 0x80 ))
        {
            VAR_8 = 1;
            break;
        }
    }

    if( !VAR_8 )
    {
        return VAR_1;
    }

    *VAR_5 = VAR_7;

    return VAR_2;
}
