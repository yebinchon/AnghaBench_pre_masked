
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {char const*** headers; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct vlc_http_msg const*,char const*) ;

const char *FUNC_1(const struct vlc_http_msg *VAR_2,
                                    const char *VAR_3)
{
    ssize_t VAR_4 = FUNC_0(VAR_2, VAR_3);
    if (VAR_4 < 0)
    {
        VAR_1 = VAR_0;
        return ((void*)0);
    }
    return VAR_2->headers[VAR_4][1];
}
