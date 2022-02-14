
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char,int) ;
 int FUNC_2 (char const*,char*,unsigned short*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct vlc_http_msg*,char*,char*,int,char const*) ;
 int FUNC_9 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_10 (unsigned short) ;

struct vlc_http_msg *FUNC_11(const char *VAR_0)
{
    struct vlc_http_msg *VAR_1;
    unsigned short VAR_2;

    if (FUNC_2(VAR_0, "HTTP/1.%*1u %3hu %*s", &VAR_2) == 1)
    {
        VAR_1 = FUNC_10(VAR_2);
        if (FUNC_7(VAR_1 == ((void*)0)))
            return ((void*)0);
    }
    else
        return ((void*)0);

    VAR_0 = FUNC_6(VAR_0, "\r\n");
    if (VAR_0 == ((void*)0))
        goto error;

    while (FUNC_3(VAR_0 + 2, "\r\n"))
    {
        const char *VAR_3 = VAR_0;

        do
        {
            VAR_3 = FUNC_6(VAR_3 + 2, "\r\n");
            if (VAR_3 == ((void*)0))
                goto error;
        }
        while (VAR_3[2] == ' ' || VAR_3[2] == '\t');

        VAR_0 += 2;

        const char *VAR_4 = FUNC_1(VAR_0, ':', VAR_3 - VAR_0);
        if (VAR_4 == ((void*)0) || VAR_4 == VAR_0)
            goto error;

        char *VAR_5 = FUNC_4(VAR_0, VAR_4 - VAR_0);
        if (FUNC_7(VAR_5 == ((void*)0)))
            goto error;

        VAR_4++;
        VAR_4 += FUNC_5(VAR_4, " \t");

        if (FUNC_7(FUNC_8(VAR_1, VAR_5, "%.*s",
                                             (int)(VAR_3 - VAR_4), VAR_4)))
        {
            FUNC_0(VAR_5);
            goto error;
        }
        FUNC_0(VAR_5);
        VAR_0 = VAR_3;
    }

    return VAR_1;
error:
    FUNC_9(VAR_1);
    return ((void*)0);
}
