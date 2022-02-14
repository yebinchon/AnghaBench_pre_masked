
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct vlc_http_msg*,char const*,char*,char const*) ;

int FUNC_2(struct vlc_http_msg *VAR_2, const char *VAR_3)
{
    const char *VAR_4 = (VAR_2->status < 0) ? "User-Agent" : "Server";

    if (!FUNC_0(VAR_3))
    {
        VAR_1 = VAR_0;
        return -1;
    }
    return FUNC_1(VAR_2, VAR_4, "%s", VAR_3);
}
