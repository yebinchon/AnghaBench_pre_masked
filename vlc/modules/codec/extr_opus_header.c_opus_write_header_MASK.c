
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int header_data ;
typedef int OpusHeader ;


 unsigned int FUNC_0 (unsigned char const**) ;
 scalar_t__ FUNC_1 (char**,size_t*,char*,char*) ;
 char* FUNC_2 (size_t*,char const*) ;
 scalar_t__ FUNC_3 (char**,size_t*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_6 (int*,void**,size_t,unsigned char const*) ;

int FUNC_7(uint8_t **VAR_0, int *VAR_1, OpusHeader *VAR_2, const char *VAR_3)
{
    unsigned char VAR_4[100];
    const int VAR_5 = FUNC_5(VAR_2, VAR_4,
                                                  sizeof(VAR_4));

    const unsigned char *VAR_6[2];
    size_t VAR_7[2];

    VAR_6[0] = VAR_4;
    VAR_7[0] = VAR_5;

    size_t VAR_8;
    char *VAR_9 = FUNC_2(&VAR_8, VAR_3);
    if (!VAR_9)
        return 1;
    if (FUNC_1(&VAR_9, &VAR_8, "ENCODER=",
                    "VLC media player"))
    {
        FUNC_4(VAR_9);
        return 1;
    }

    if (FUNC_3(&VAR_9, &VAR_8))
    {
        FUNC_4(VAR_9);
        return 1;
    }

    VAR_6[1] = (unsigned char *) VAR_9;
    VAR_7[1] = VAR_8;

    *VAR_1 = 0;
    *VAR_0 = ((void*)0);

    for (unsigned VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); ++VAR_10)
    {
        if (FUNC_6(VAR_1, (void **) VAR_0, VAR_7[VAR_10], VAR_6[VAR_10]))
        {
            *VAR_1 = 0;
            FUNC_4(*VAR_0);
            *VAR_0 = ((void*)0);
        }
    }

    FUNC_4(VAR_9);

    return 0;
}
