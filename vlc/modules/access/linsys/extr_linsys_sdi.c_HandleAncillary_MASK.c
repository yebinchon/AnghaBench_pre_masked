
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int uint16_t ;
typedef int demux_t ;


 int FUNC_0 (int *,int const*,unsigned int,int) ;
 int FUNC_1 (int *,int const*,unsigned int,int,int const) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3( demux_t *VAR_0, const uint16_t *VAR_1,
                             unsigned int VAR_2 )
{
    uint8_t VAR_3;

    if ( VAR_2 < 7
          || VAR_1[0] != 0x0 || VAR_1[1] != 0x3ff || VAR_1[2] != 0x3ff )
        return;

    VAR_3 = VAR_1[5] & 0xff;
    if ( VAR_2 - 6 < VAR_3 )
    {
        FUNC_2( VAR_0, "malformed ancillary packet (size %u > %u)",
                  VAR_3, VAR_2 - 6 );
        return;
    }

    switch ( VAR_1[3] )
    {
    case 0x2ff:
        FUNC_1( VAR_0, VAR_1 + 6, VAR_3, 1, VAR_1[4] & 0xff );
        break;
    case 0x1fd:
        FUNC_1( VAR_0, VAR_1 + 6, VAR_3, 2, VAR_1[4] & 0xff );
        break;
    case 0x1fb:
        FUNC_1( VAR_0, VAR_1 + 6, VAR_3, 3, VAR_1[4] & 0xff );
        break;
    case 0x2f9:
        FUNC_1( VAR_0, VAR_1 + 6, VAR_3, 4, VAR_1[4] & 0xff );
        break;

    case 0x1ef:
        FUNC_0( VAR_0, VAR_1 + 6, VAR_3, 1 );
        break;
    case 0x2ee:
        FUNC_0( VAR_0, VAR_1 + 6, VAR_3, 2 );
        break;
    case 0x2ed:
        FUNC_0( VAR_0, VAR_1 + 6, VAR_3, 3 );
        break;
    case 0x1ec:
        FUNC_0( VAR_0, VAR_1 + 6, VAR_3, 4 );
        break;


    case 0x1fe:
    case 0x2fc:
    case 0x2fa:
    case 0x1f8:

    default:
        break;

    case 0x88:
        VAR_1 += 7;
        VAR_2 -= 7;
        while ( VAR_2 >= 7 && (VAR_1[0] != 0x0 || VAR_1[1] != 0x3ff
                                 || VAR_1[2] != 0x3ff) )
        {
            VAR_1++;
            VAR_2--;
        }
        if ( VAR_2 >= 7 )
            FUNC_3( VAR_0, VAR_1, VAR_2 );
        return;
    }

    return FUNC_3( VAR_0, VAR_1 + VAR_3 + 7,
                            VAR_2 - VAR_3 - 7 );

}
