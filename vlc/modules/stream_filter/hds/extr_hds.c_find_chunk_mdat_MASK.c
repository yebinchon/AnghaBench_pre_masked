
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static uint32_t FUNC_4( vlc_object_t* VAR_0,
                                 uint8_t* VAR_1, uint8_t* VAR_2,
                                 uint8_t** VAR_3 )
{
    uint8_t* VAR_4 = ((void*)0);
    uint8_t* VAR_5 = ((void*)0);
    uint64_t VAR_6 = 0;

    do {
        if( VAR_2 < VAR_1 ||
            VAR_2 - VAR_1 < 8 )
        {
            FUNC_3( VAR_0, "Couldn't find mdat in box 1!" );
            *VAR_3 = 0;
            return 0;
        }

        VAR_6 = (uint64_t)FUNC_0( VAR_1 );
        VAR_1 += 4;

        VAR_4 = VAR_1;
        VAR_1 += 4;

        if( VAR_6 == 1 )
        {
            if( VAR_2 - VAR_1 >= 12 )
            {
                VAR_6 = FUNC_1(VAR_1);
                VAR_1 += 8;
            }
            else
            {
                FUNC_3( VAR_0, "Couldn't find mdat in box 2!");
                *VAR_3 = 0;
                return 0;
            }
            VAR_5 = VAR_1;
            VAR_1 += (VAR_6 - 16);
        }
        else
        {
            VAR_5 = VAR_1;
            VAR_1 += (VAR_6 - 8);
        }
    } while ( 0 != FUNC_2( VAR_4, "mdat", 4 ) );

    *VAR_3 = VAR_5;

    return VAR_2 - ((uint8_t*)VAR_5);
}
