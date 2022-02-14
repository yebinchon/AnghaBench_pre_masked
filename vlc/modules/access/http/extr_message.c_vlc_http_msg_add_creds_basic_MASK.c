
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char const*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (struct vlc_http_msg*,char*,char*,char*) ;

int FUNC_5(struct vlc_http_msg *VAR_2, bool VAR_3,
                                 const char *VAR_4, const char *VAR_5)
{
    char *VAR_6, *VAR_7;
    int VAR_8;
    unsigned char VAR_9;


    for (size_t VAR_10 = 0; (VAR_9 = VAR_4[VAR_10]) != '\0'; VAR_10++)
        if (VAR_9 < 32 || VAR_9 == 127 || VAR_9 == ':')
        {
            VAR_1 = VAR_0;
            return -1;
        }


    for (size_t VAR_11 = 0; (VAR_9 = VAR_5[VAR_11]) != '\0'; VAR_11++)
        if (VAR_9 < 32 || VAR_9 == 127)
        {
            VAR_1 = VAR_0;
            return -1;
        }

    VAR_8 = FUNC_0(&VAR_6, "%s:%s", VAR_4, VAR_5);
    if (FUNC_2(VAR_8 < 0))
        return -1;

    VAR_7 = FUNC_3((unsigned char *)VAR_6, VAR_8);
    FUNC_1(VAR_6);
    if (FUNC_2(VAR_7 == ((void*)0)))
        return -1;

    VAR_8 = FUNC_4(VAR_2, VAR_3 ? "Proxy-Authorization" :
                                  "Authorization", "Basic %s", VAR_7);
    FUNC_1(VAR_7);
    return VAR_8;
}
