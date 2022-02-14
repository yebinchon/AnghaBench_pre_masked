
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {int response; } ;


 char* FUNC_0 (char const*) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (struct vlc_http_resource*) ;

char *FUNC_3(struct vlc_http_resource *VAR_0)
{
    int VAR_1 = FUNC_2(VAR_0);
    if (VAR_1 < 200 || VAR_1 >= 300)
        return ((void*)0);

    const char *VAR_2 = FUNC_1(VAR_0->response, "Content-Type");
    return (VAR_2 != ((void*)0)) ? FUNC_0(VAR_2) : ((void*)0);
}
