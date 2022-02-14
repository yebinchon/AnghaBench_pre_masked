
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char*) ;
 char* FUNC_2 (struct vlc_http_msg const*,char*,char*) ;

char *FUNC_3(const struct vlc_http_msg *VAR_0)
{
    const char *VAR_1;





    VAR_1 = FUNC_2(VAR_0, "WWW-Authenticate", "Basic");
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_1 += 5;
    VAR_1 += FUNC_0(VAR_1, " ");

    return FUNC_1(VAR_1, "realm");
}
