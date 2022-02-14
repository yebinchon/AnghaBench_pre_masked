
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int dummy; } ;
struct vlc_http_mgr {int dummy; } ;


 struct vlc_http_msg* FUNC_0 (struct vlc_http_mgr*,char const*,unsigned int,struct vlc_http_msg const*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 struct vlc_http_msg* FUNC_2 (struct vlc_http_mgr*,char const*,unsigned int,struct vlc_http_msg const*) ;
 struct vlc_http_msg* FUNC_3 (struct vlc_http_mgr*,char const*,unsigned int,struct vlc_http_msg const*) ;

struct vlc_http_msg *FUNC_4(struct vlc_http_mgr *VAR_0, bool VAR_1,
                                          const char *VAR_2, unsigned VAR_3,
                                          const struct vlc_http_msg *VAR_4)
{
    if (VAR_3 && FUNC_1(VAR_3))
        return ((void*)0);

    return (VAR_1 ? FUNC_3 : FUNC_2)(VAR_0, VAR_2, VAR_3, VAR_4);
}
