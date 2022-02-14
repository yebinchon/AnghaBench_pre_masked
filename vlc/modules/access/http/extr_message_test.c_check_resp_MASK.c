
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
 int FUNC_7 (struct vlc_http_msg const*) ;

__attribute__((used)) static void FUNC_8(const struct vlc_http_msg *VAR_0)
{
    const char *VAR_1;

    FUNC_0(FUNC_7(VAR_0) == 200);
    VAR_1 = FUNC_4(VAR_0);
    FUNC_0(VAR_1 == ((void*)0));
    VAR_1 = FUNC_6(VAR_0);
    FUNC_0(VAR_1 == ((void*)0));
    VAR_1 = FUNC_2(VAR_0);
    FUNC_0(VAR_1 == ((void*)0));
    VAR_1 = FUNC_5(VAR_0);
    FUNC_0(VAR_1 == ((void*)0));

    VAR_1 = FUNC_3(VAR_0, "Cache-Control");
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "private"));
    VAR_1 = FUNC_3(VAR_0, "Date");
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "Mon, 21 Oct 2013 20:13:22 GMT"));
    VAR_1 = FUNC_3(VAR_0, "Location");
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "https://www.example.com"));
    VAR_1 = FUNC_3(VAR_0, "Content-Encoding");
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "gzip"));
    VAR_1 = FUNC_3(VAR_0, "Set-Cookie");
    FUNC_0(VAR_1 != ((void*)0) && !FUNC_1(VAR_1, "foo=ASDJKHQKBZXOQWEOPIUAXQWEOIU; "
                                  "max-age=3600; version=1"));

    VAR_1 = FUNC_3(VAR_0, "Custom-Key");
    FUNC_0(VAR_1 == ((void*)0));
}
