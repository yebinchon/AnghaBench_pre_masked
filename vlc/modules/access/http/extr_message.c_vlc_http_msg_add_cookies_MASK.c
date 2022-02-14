
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_http_cookie_jar_t ;
struct vlc_http_msg {char* authority; int * path; int * scheme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (int *,int,char*,int *) ;
 int FUNC_6 (struct vlc_http_msg*,char*,char*,char*) ;

int FUNC_7(struct vlc_http_msg *VAR_2,
                             vlc_http_cookie_jar_t *VAR_3)
{
    char *VAR_4, *VAR_5;
    int VAR_6 = 0;
    bool VAR_7;

    if (VAR_2->scheme == ((void*)0) || VAR_2->authority == ((void*)0) || VAR_2->path == ((void*)0))
    {
        VAR_1 = VAR_0;
        return -1;
    }

    if (!FUNC_1(VAR_2->scheme, "https"))
        VAR_7 = 1;
    else if (!FUNC_1(VAR_2->scheme, "http"))
        VAR_7 = 0;
    else
        return 0;

    if (VAR_3 == ((void*)0))
        return 0;

    if (VAR_2->authority[0] == '[')
        VAR_4 = FUNC_3(VAR_2->authority + 1, FUNC_2(VAR_2->authority + 1, "]"));
    else
        VAR_4 = FUNC_3(VAR_2->authority, FUNC_2(VAR_2->authority, ":"));
    if (FUNC_4(VAR_4 == ((void*)0)))
        return -1;

    VAR_5 = FUNC_5(VAR_3, VAR_7, VAR_4, VAR_2->path);
    FUNC_0(VAR_4);

    if (VAR_5 != ((void*)0))
    {
        VAR_6 = FUNC_6(VAR_2, "Cookie", "%s", VAR_5);
        FUNC_0(VAR_5);
    }
    return VAR_6;
}
