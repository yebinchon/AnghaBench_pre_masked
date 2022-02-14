
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct vlc_http_msg {int dummy; } ;
struct vlc_http_mgr {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char**,int) ;
 char* VAR_5 ;
 char* FUNC_5 (struct vlc_http_msg const*) ;
 char* FUNC_6 (struct vlc_http_msg const*) ;
 char* FUNC_7 (struct vlc_http_msg const*,char*) ;
 struct vlc_http_msg* FUNC_8 (int *) ;
 char* FUNC_9 (struct vlc_http_msg const*) ;
 char* FUNC_10 (struct vlc_http_msg const*) ;
 char* FUNC_11 (struct vlc_http_msg const*) ;
 int FUNC_12 (struct vlc_http_msg const*,char*) ;

struct vlc_http_msg *FUNC_13(struct vlc_http_mgr *VAR_6, bool VAR_7,
                                          const char *VAR_8, unsigned VAR_9,
                                          const struct vlc_http_msg *VAR_10)
{
    const char *VAR_11;
    char *VAR_12;

    FUNC_0(VAR_7 == VAR_3);
    FUNC_0(VAR_6 == ((void*)0));
    FUNC_0(!FUNC_1(VAR_8, "www.example.com"));
    FUNC_0(VAR_9 == 8443);

    VAR_11 = FUNC_9(VAR_10);
    FUNC_0(!FUNC_1(VAR_11, "GET"));
    VAR_11 = FUNC_11(VAR_10);
    FUNC_0(!FUNC_1(VAR_11, VAR_3 ? "https" : "http"));
    VAR_11 = FUNC_6(VAR_10);
    FUNC_0(!FUNC_1(VAR_11, "www.example.com:8443"));
    VAR_11 = FUNC_10(VAR_10);
    FUNC_0(!FUNC_1(VAR_11, "/dir/file.ext?a=b"));
    VAR_11 = FUNC_5(VAR_10);
    FUNC_0(!FUNC_1(VAR_11, VAR_5));
    VAR_11 = FUNC_7(VAR_10, "Referer");
    FUNC_0(VAR_11 == ((void*)0));
    VAR_11 = FUNC_7(VAR_10, "Accept");
    FUNC_0(VAR_11 == ((void*)0) || FUNC_3(VAR_11, "*/*") != ((void*)0));

    VAR_11 = FUNC_7(VAR_10, "Accept-Language");

    if (VAR_1 != 0)
    {
        FUNC_0(VAR_11 != ((void*)0) && FUNC_2(VAR_11, "en_US", 5) == 0);
        if (VAR_1 > 0)
            VAR_1--;
    }
    else
        FUNC_0(VAR_11 == ((void*)0));

    VAR_11 = FUNC_7(VAR_10, "Range");
    FUNC_0(VAR_11 != ((void*)0) && !FUNC_2(VAR_11, "bytes=", 6)
        && FUNC_4(VAR_11 + 6, &VAR_12, 10) == VAR_2 && *VAR_12 == '-');

    time_t VAR_13 = FUNC_12(VAR_10, "If-Unmodified-Since");
    VAR_11 = FUNC_7(VAR_10, "If-Match");

    if (VAR_0)
    {
        if (VAR_2 != 0)
            FUNC_0(VAR_11 != ((void*)0) && !FUNC_1(VAR_11, "\"foobar42\""));
        else
        if (VAR_11 != ((void*)0))
            FUNC_0(FUNC_1(VAR_11, "*") || FUNC_1(VAR_11, "\"foobar42\""));
    }
    else
    {
        if (VAR_2 != 0)
            FUNC_0(VAR_13 == 1382386402);
    }

    return FUNC_8(&VAR_4);
}
