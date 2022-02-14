
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {size_t length; char* ptr; } ;
struct vlc_http_msg {unsigned int count; scalar_t__** headers; int status; scalar_t__ authority; scalar_t__ path; scalar_t__ scheme; int method; } ;


 scalar_t__ FUNC_0 (struct vlc_memstream*) ;
 int FUNC_1 (struct vlc_memstream*) ;
 int FUNC_2 (struct vlc_memstream*,char*,scalar_t__,...) ;
 int FUNC_3 (struct vlc_memstream*,char*) ;

char *FUNC_4(const struct vlc_http_msg *VAR_0, size_t *restrict VAR_1,
                          bool VAR_2)
{
    struct vlc_memstream VAR_3;

    FUNC_1(&VAR_3);

    if (VAR_0->status < 0)
    {
        FUNC_2(&VAR_3, "%s ", VAR_0->method);
        if (VAR_2)
            FUNC_2(&VAR_3, "%s://%s", VAR_0->scheme, VAR_0->authority);
        FUNC_2(&VAR_3, "%s HTTP/1.1\r\nHost: %s\r\n",
                             VAR_0->path ? VAR_0->path : VAR_0->authority, VAR_0->authority);
    }
    else
        FUNC_2(&VAR_3, "HTTP/1.1 %03hd .\r\n", VAR_0->status);

    for (unsigned VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++)
        FUNC_2(&VAR_3, "%s: %s\r\n",
                             VAR_0->headers[VAR_4][0], VAR_0->headers[VAR_4][1]);

    FUNC_3(&VAR_3, "\r\n");

    if (FUNC_0(&VAR_3))
        return ((void*)0);

    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_3.length;
    return VAR_3.ptr;
}
