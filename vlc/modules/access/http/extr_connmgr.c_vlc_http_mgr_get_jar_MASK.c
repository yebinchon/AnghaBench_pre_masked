
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_mgr {struct vlc_http_cookie_jar_t* jar; } ;
struct vlc_http_cookie_jar_t {int dummy; } ;



struct vlc_http_cookie_jar_t *FUNC_0(struct vlc_http_mgr *VAR_0)
{
    return VAR_0->jar;
}
