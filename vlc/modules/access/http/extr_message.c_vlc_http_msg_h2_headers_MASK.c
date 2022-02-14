
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {unsigned long status; int * method; int * path; int * authority; int * scheme; } ;


 int FUNC_0 (char const*,char*) ;
 void* FUNC_1 (char const*) ;
 unsigned long FUNC_2 (char const*,char**,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vlc_http_msg*,char const*,char*,char const*) ;
 int FUNC_5 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_6 (int ) ;

struct vlc_http_msg *FUNC_7(unsigned VAR_0,
                                             const char *const VAR_1[][2])
{
    struct vlc_http_msg *VAR_2 = FUNC_6(0);
    if (FUNC_3(VAR_2 == ((void*)0)))
        return ((void*)0);

    for (unsigned VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        const char *VAR_4 = VAR_1[VAR_3][0];
        const char *VAR_5 = VAR_1[VAR_3][1];


        if (!FUNC_0(VAR_4, ":status"))
        {
            char *VAR_6;
            unsigned long VAR_7 = FUNC_2(VAR_5, &VAR_6, 10);

            if (VAR_2->status != 0 || VAR_7 > 999 || *VAR_6 != '\0')
                goto error;

            VAR_2->status = VAR_7;
            continue;
        }

        if (!FUNC_0(VAR_4, ":method"))
        {
            if (VAR_2->method != ((void*)0))
                goto error;

            VAR_2->method = FUNC_1(VAR_5);
            if (FUNC_3(VAR_2->method == ((void*)0)))
                goto error;

            VAR_2->status = -1;
            continue;
        }

        if (!FUNC_0(VAR_4, ":scheme"))
        {
            if (VAR_2->scheme != ((void*)0))
                goto error;

            VAR_2->scheme = FUNC_1(VAR_5);
            if (FUNC_3(VAR_2->scheme == ((void*)0)))
                goto error;
            continue;
        }

        if (!FUNC_0(VAR_4, ":authority"))
        {
            if (VAR_2->authority != ((void*)0))
                goto error;

            VAR_2->authority = FUNC_1(VAR_5);
            if (FUNC_3(VAR_2->authority == ((void*)0)))
                goto error;
            continue;
        }

        if (!FUNC_0(VAR_4, ":path"))
        {
            if (VAR_2->path != ((void*)0))
                goto error;

            VAR_2->path = FUNC_1(VAR_5);
            if (FUNC_3(VAR_2->path == ((void*)0)))
                goto error;
            continue;
        }

        if (FUNC_4(VAR_2, VAR_4, "%s", VAR_5))
            goto error;
    }

    if ((VAR_2->status < 0) == (VAR_2->method == ((void*)0)))
    {
error:
        FUNC_5(VAR_2);
        VAR_2 = ((void*)0);
    }
    return VAR_2;
}
