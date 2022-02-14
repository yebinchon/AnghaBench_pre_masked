
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {scalar_t__ status; } ;


 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (struct vlc_http_msg const*,char const*) ;

const char *FUNC_2(const struct vlc_http_msg *VAR_0)
{
    const char *VAR_1 = (VAR_0->status < 0) ? "User-Agent" : "Server";
    const char *VAR_2 = FUNC_1(VAR_0, VAR_1);

    return (VAR_2 != ((void*)0) && FUNC_0(VAR_2)) ? VAR_2 : ((void*)0);
}
