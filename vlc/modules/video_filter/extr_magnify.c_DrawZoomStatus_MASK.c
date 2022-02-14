
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0( uint8_t *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                            int VAR_4, int VAR_5, bool VAR_6 )
{
    static const char *VAR_7 =
        "X   X XXXXX XXXX  XXXXX   XXXXX  XXX   XXX  XX XXL"
        "X   X   X   X   X X          X  X   X X   X X X XL"
        "XXXXX   X   X   X XXXX      X   X   X X   X X   XL"
        "X   X   X   X   X X        X    X   X X   X X   XL"
        "X   X XXXXX XXXX  XXXXX   XXXXX  XXX   XXX  X   XL";
    static const char *VAR_8 =
        " XXXX X   X  XXX  X   X   XXXXX  XXX   XXX  XX XXL"
        "X     X   X X   X X   X      X  X   X X   X X X XL"
        " XXX  XXXXX X   X X X X     X   X   X X   X X   XL"
        "    X X   X X   X X X X    X    X   X X   X X   XL"
        "XXXX  X   X  XXX   X X    XXXXX  XXX   XXX  X   XL";
    const char *VAR_9 = VAR_6 ? VAR_7 : VAR_8;

    for( int VAR_10 = 0, VAR_11 = VAR_4, VAR_12 = VAR_5; VAR_9[VAR_10] != '\0'; VAR_10++ )
    {
        if( VAR_9[VAR_10] == 'X' )
        {
            if( VAR_11 < VAR_2 && VAR_12 < VAR_3 )
                VAR_0[VAR_12*VAR_1 + VAR_11] = 0xff;
            VAR_11++;
        }
        else if( VAR_9[VAR_10] == ' ' )
        {
            VAR_11++;
        }
        else if( VAR_9[VAR_10] == 'L' )
        {
            VAR_11 = VAR_4;
            VAR_12++;
        }
    }
}
