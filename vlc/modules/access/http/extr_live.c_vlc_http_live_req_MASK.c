
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {int dummy; } ;
struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (struct vlc_http_msg*,char*,char*) ;

__attribute__((used)) static int FUNC_1(const struct vlc_http_resource *VAR_0,
                             struct vlc_http_msg *VAR_1, void *VAR_2)
{
    FUNC_0(VAR_1, "Accept-Encoding", "gzip, deflate");
    (void) VAR_0;
    (void) VAR_2;
    return 0;
}
