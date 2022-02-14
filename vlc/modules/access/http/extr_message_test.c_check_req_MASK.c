
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 char* FUNC_2 (struct vlc_http_msg const*) ;
 char* FUNC_3 (struct vlc_http_msg const*,char*) ;
 char* FUNC_4 (struct vlc_http_msg const*) ;
 char* FUNC_5 (struct vlc_http_msg const*) ;
 char* FUNC_6 (struct vlc_http_msg const*) ;
 scalar_t__ FUNC_7 (struct vlc_http_msg const*) ;
 scalar_t__ FUNC_8 (struct vlc_http_msg const*) ;

__attribute__((used)) static void FUNC_9(const struct vlc_http_msg *VAR_0)
{
    const char *VAR_1;

    FUNC_0(FUNC_8(VAR_0) < 0);
    VAR_1 = FUNC_4(VAR_0);
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "GET"));
    VAR_1 = FUNC_6(VAR_0);
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "http"));
    VAR_1 = FUNC_2(VAR_0);
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "www.example.com"));
    VAR_1 = FUNC_5(VAR_0);
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "/"));
    FUNC_0(FUNC_7(VAR_0) == 0);

    VAR_1 = FUNC_3(VAR_0, "Cache-Control");
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "no-cache"));
    VAR_1 = FUNC_3(VAR_0, "Custom-Key");
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "custom-value"));

    VAR_1 = FUNC_3(VAR_0, "Date");
    FUNC_0(VAR_1 == ((void*)0));
}
