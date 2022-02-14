
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {int failure; int * response; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct vlc_http_resource*,struct vlc_http_resource*) ;

int FUNC_2(struct vlc_http_resource *VAR_0)
{
    if (VAR_0->response == ((void*)0))
    {
        if (VAR_0->failure)
            return -1;

        VAR_0->response = FUNC_1(VAR_0, VAR_0 + 1);
        if (VAR_0->response == ((void*)0))
        {
            VAR_0->failure = 1;
            return -1;
        }
    }
    return FUNC_0(VAR_0->response);
}
