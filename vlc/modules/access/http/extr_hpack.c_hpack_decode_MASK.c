
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hpack_decoder {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct hpack_decoder*,int const**,size_t*,char**,char**) ;

int FUNC_3(struct hpack_decoder *VAR_0, const uint8_t *VAR_1,
                 size_t VAR_2, char *VAR_3[][2], unsigned VAR_4)
{
    unsigned VAR_5 = 0;

    while (VAR_2 > 0)
    {
        char *VAR_6, *VAR_7;
        int VAR_8 = FUNC_2(VAR_0, &VAR_1, &VAR_2, &VAR_6, &VAR_7);
        if (VAR_8 < 0)
            goto error;

        FUNC_0((VAR_6 == ((void*)0)) == (VAR_7 == ((void*)0)));
        if (VAR_6 == ((void*)0))
            continue;

        if (VAR_5 < VAR_4)
        {
            VAR_3[VAR_5][0] = VAR_6;
            VAR_3[VAR_5][1] = VAR_7;
        }
        else
        {
            FUNC_1(VAR_7);
            FUNC_1(VAR_6);
        }
        VAR_5++;
    }
    return VAR_5;

error:
    while (VAR_5 > 0)
    {
        VAR_5--;
        FUNC_1(VAR_3[VAR_5][1]);
        FUNC_1(VAR_3[VAR_5][0]);
    }
    return -1;
}
