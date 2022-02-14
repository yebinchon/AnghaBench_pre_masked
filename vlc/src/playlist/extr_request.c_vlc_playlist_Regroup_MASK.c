
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t,size_t,size_t) ;

__attribute__((used)) static size_t
FUNC_2(vlc_playlist_t *VAR_0, size_t VAR_1[],
                     size_t VAR_2)
{
    size_t VAR_3 = VAR_1[VAR_2];
    if (VAR_2 == 0)

        return VAR_3;

    size_t VAR_4 = 1;
    size_t VAR_5 = VAR_1[VAR_2 - 1];


    for (size_t VAR_6 = VAR_2 - 1; VAR_6 != 0; --VAR_6)
    {
        size_t VAR_7 = VAR_1[VAR_6 - 1];
        if (VAR_7 == VAR_5 - 1)
            VAR_4++;
        else
        {
            FUNC_0(VAR_5 != VAR_3);
            if (VAR_5 < VAR_3)
            {
                FUNC_0(VAR_3 >= VAR_4);
                VAR_3 -= VAR_4;


                for (size_t VAR_8 = 0; VAR_8 <= VAR_6; ++VAR_8)
                    if (VAR_1[VAR_8] >= VAR_5 + VAR_4 && VAR_1[VAR_8] < VAR_3)
                        VAR_1[VAR_8] -= VAR_4;
            }
            else
            {

                for (size_t VAR_9 = 0; VAR_9 <= VAR_6; ++VAR_9)
                    if (VAR_1[VAR_9] >= VAR_3 && VAR_1[VAR_9] < VAR_5)
                        VAR_1[VAR_9] += VAR_4;
            }
            VAR_7 = VAR_1[VAR_6 - 1];


            FUNC_1(VAR_0, VAR_5, VAR_4, VAR_3);
            VAR_4 = 1;
        }

        VAR_5 = VAR_7;
    }


    if (VAR_5 < VAR_3)
    {
        FUNC_0(VAR_3 >= VAR_4);
        VAR_3 -= VAR_4;
    }
    FUNC_1(VAR_0, VAR_5, VAR_4, VAR_3);
    return VAR_3;
}
