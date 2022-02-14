
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (struct vlc_http_msg*,char*,char*,char const*) ;
 int FUNC_4 (struct vlc_http_msg*) ;
 char* FUNC_5 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_6 (int) ;

__attribute__((used)) static const char *FUNC_7(const char *VAR_0, const char *VAR_1)
{
    struct vlc_http_msg *VAR_2;
    char *VAR_3;

    VAR_2 = FUNC_6(401);
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(FUNC_3(VAR_2, "WWW-Authenticate", "%s", VAR_0) == 0);
    VAR_3 = FUNC_5(VAR_2);
    if (VAR_1 == ((void*)0))
        FUNC_0(VAR_3 == ((void*)0));
    else
    {
        FUNC_0(VAR_3 != ((void*)0));
        FUNC_0(!FUNC_2(VAR_3, VAR_1));
        FUNC_1(VAR_3);
    }
    FUNC_4(VAR_2);
    return VAR_1;
}
