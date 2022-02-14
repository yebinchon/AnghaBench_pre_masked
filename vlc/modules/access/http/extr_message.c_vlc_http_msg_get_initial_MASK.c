
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_stream {int dummy; } ;
struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (struct vlc_http_stream*,int) ;
 struct vlc_http_msg* FUNC_1 (struct vlc_http_stream*) ;

struct vlc_http_msg *FUNC_2(struct vlc_http_stream *VAR_0)
{
    struct vlc_http_msg *VAR_1 = FUNC_1(VAR_0);
    if (VAR_1 == ((void*)0))
        FUNC_0(VAR_0, 0);
    return VAR_1;
}
