
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {int response; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_http_resource*) ;

char *FUNC_2(struct vlc_http_resource *VAR_0)
{
    int VAR_1 = FUNC_1(VAR_0);
    if (VAR_1 != 401)
        return ((void*)0);
    return FUNC_0(VAR_0->response);
}
