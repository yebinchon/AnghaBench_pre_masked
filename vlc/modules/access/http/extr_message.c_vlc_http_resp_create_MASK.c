
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_msg {unsigned int status; int * payload; int * headers; scalar_t__ count; int * path; int * authority; int * scheme; int * method; } ;


 int FUNC_0 (int) ;
 struct vlc_http_msg* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

struct vlc_http_msg *FUNC_3(unsigned VAR_0)
{
    struct vlc_http_msg *VAR_1 = FUNC_1(sizeof (*VAR_1));
    if (FUNC_2(VAR_1 == ((void*)0)))
        return ((void*)0);

    FUNC_0(VAR_0 < 1000);
    VAR_1->status = VAR_0;
    VAR_1->method = ((void*)0);
    VAR_1->scheme = ((void*)0);
    VAR_1->authority = ((void*)0);
    VAR_1->path = ((void*)0);
    VAR_1->count = 0;
    VAR_1->headers = ((void*)0);
    VAR_1->payload = ((void*)0);
    return VAR_1;
}
