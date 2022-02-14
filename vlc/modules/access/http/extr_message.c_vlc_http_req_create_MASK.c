
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int status; int * path; int * authority; int * scheme; int * method; int * payload; int * headers; scalar_t__ count; } ;


 int FUNC_0 (int ) ;
 struct vlc_http_msg* FUNC_1 (int) ;
 int * FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vlc_http_msg*) ;

struct vlc_http_msg *
FUNC_5(const char *VAR_0, const char *VAR_1,
                    const char *VAR_2, const char *VAR_3)
{
    struct vlc_http_msg *VAR_4 = FUNC_1(sizeof (*VAR_4));
    if (FUNC_3(VAR_4 == ((void*)0)))
        return ((void*)0);

    FUNC_0(VAR_0 != ((void*)0));
    VAR_4->status = -1;
    VAR_4->method = FUNC_2(VAR_0);
    VAR_4->scheme = (VAR_1 != ((void*)0)) ? FUNC_2(VAR_1) : ((void*)0);
    VAR_4->authority = (VAR_2 != ((void*)0)) ? FUNC_2(VAR_2) : ((void*)0);
    VAR_4->path = (VAR_3 != ((void*)0)) ? FUNC_2(VAR_3) : ((void*)0);
    VAR_4->count = 0;
    VAR_4->headers = ((void*)0);
    VAR_4->payload = ((void*)0);

    if (FUNC_3(VAR_4->method == ((void*)0)
              || (VAR_1 != ((void*)0) && VAR_4->scheme == ((void*)0))
              || (VAR_2 != ((void*)0) && VAR_4->authority == ((void*)0))
              || (VAR_3 != ((void*)0) && VAR_4->path == ((void*)0))))
    {
        FUNC_4(VAR_4);
        VAR_4 = ((void*)0);
    }
    return VAR_4;
}
