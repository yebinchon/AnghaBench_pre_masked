
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_iconv_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 size_t FUNC_2 (scalar_t__,char const**,size_t*,char**,size_t*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

char *FUNC_5(const char *VAR_2, const void *VAR_3, size_t VAR_4)
{
    vlc_iconv_t VAR_5 = FUNC_4 ("UTF-8", VAR_2);
    if (VAR_5 == (vlc_iconv_t)(-1))
        return ((void*)0);

    char *VAR_6 = ((void*)0);
    for(unsigned VAR_7 = 4; VAR_7 < 8; VAR_7++ )
    {
        size_t VAR_8 = VAR_4;
        const char *VAR_9 = VAR_3;
        size_t VAR_10 = VAR_7 * VAR_4;
        char *VAR_11 = VAR_6 = FUNC_1 (1 + VAR_10);
        if (!VAR_6)
            break;

        if (FUNC_2 (VAR_5, &VAR_9, &VAR_8, &VAR_11, &VAR_10) != (size_t)(-1)) {
            *VAR_11 = '\0';
            break;
        }
        FUNC_0(VAR_6);
        VAR_6 = ((void*)0);

        if (VAR_1 != VAR_0)
            break;
    }
    FUNC_3(VAR_5);
    return VAR_6;
}
