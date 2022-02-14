
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (struct vlc_http_msg const*) ;
 int * FUNC_1 (struct vlc_http_msg const*,char*,char*) ;

__attribute__((used)) static bool FUNC_2(const struct vlc_http_msg *VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 == 206 || VAR_1 == 416)
        return 1;

    return FUNC_1(VAR_0, "Accept-Ranges", "bytes") != ((void*)0);
}
