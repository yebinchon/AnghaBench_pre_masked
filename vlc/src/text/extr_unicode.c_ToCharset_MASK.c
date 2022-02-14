
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_iconv_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (scalar_t__,char const**,size_t*,char**,size_t*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

void *FUNC_7(const char *VAR_3, const char *VAR_4, size_t *VAR_5)
{
    vlc_iconv_t VAR_6 = FUNC_6 (VAR_3, "UTF-8");
    if (VAR_6 == (vlc_iconv_t)(-1))
        return ((void*)0);

    const size_t VAR_7 = FUNC_2 (VAR_4);
    void *VAR_8;

    for (unsigned VAR_9 = 4; VAR_9 < 16; VAR_9++)
    {
        size_t VAR_10 = VAR_9 * (VAR_7 + 1);
        VAR_8 = FUNC_1 (VAR_10);
        if (FUNC_3(VAR_8 == ((void*)0)))
            break;

        const char *VAR_11 = VAR_4;
        char *VAR_12 = VAR_8;
        size_t VAR_13 = VAR_7;
        size_t VAR_14 = VAR_10 - VAR_9;

        if (FUNC_4 (VAR_6, &VAR_11, &VAR_13, &VAR_12, &VAR_14) != (size_t)(-1))
        {
            *VAR_5 = VAR_10 - VAR_9 - VAR_14;
            VAR_14 += VAR_9;
            VAR_13 = 1;
            if (FUNC_4 (VAR_6, &VAR_11, &VAR_13, &VAR_12, &VAR_14) != (size_t)(-1))
                break;
            if (VAR_2 == VAR_1)
                break;
        }

        FUNC_0 (VAR_8);
        VAR_8 = ((void*)0);
        if (VAR_2 != VAR_0)
            break;
    }
    FUNC_5 (VAR_6);
    return VAR_8;
}
