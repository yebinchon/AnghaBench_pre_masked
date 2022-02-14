
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int stream_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int*,int const*,int) ;
 scalar_t__ FUNC_2 (int const*,char*,int) ;
 int FUNC_3 (int *,int const**,int) ;

__attribute__((used)) static bool FUNC_4(stream_t *VAR_0)
{
    const uint8_t *VAR_1;
    int VAR_2 = FUNC_3(VAR_0, &VAR_1, 256);
    int VAR_3 = 0;

    if (FUNC_1(&VAR_3, VAR_1, VAR_2) != 0xd8 || VAR_3 > VAR_2-2)
        return 0;
    if (FUNC_1(&VAR_3, VAR_1, VAR_3 + 2) != 0xe0)
        return 0;

    if (VAR_3 + 2 > VAR_2)
        return 0;


    uint32_t VAR_4 = FUNC_0(&VAR_1[VAR_3]);
    VAR_3 += VAR_4;


    if (VAR_3 + 6 > VAR_2)
    {
        VAR_2 = VAR_3 + 6;
        if( FUNC_3 (VAR_0, &VAR_1, VAR_2) < VAR_2 )
            return 0;
    }

    if ( !(VAR_1[VAR_3] == 0xFF && VAR_1[VAR_3+1] == 0xFE) )
        return 0;
    VAR_3 += 2;
    VAR_4 = FUNC_0 (&VAR_1[VAR_3]);


    if (!FUNC_2 (&VAR_1[VAR_3+2], "MXF\0", 4) )
        return 1;


    VAR_2 = VAR_3 + VAR_4 + 8;
    if (FUNC_3(VAR_0, &VAR_1, VAR_2 ) < VAR_2)
        return 0;

    VAR_3 += VAR_4;
    if ( !(VAR_1[VAR_3] == 0xFF && VAR_1[VAR_3+1] == 0xFE) )
        return 0;

    VAR_3 += 4;

    if (FUNC_2 (&VAR_1[VAR_3], "MXF\0", 4) )
        return 0;

    return 1;
}
