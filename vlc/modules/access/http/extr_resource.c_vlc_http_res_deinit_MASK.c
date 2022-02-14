
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {int * response; int host; int authority; int path; int username; int password; int agent; int referrer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vlc_http_resource *VAR_0)
{
    FUNC_0(VAR_0->referrer);
    FUNC_0(VAR_0->agent);
    FUNC_0(VAR_0->password);
    FUNC_0(VAR_0->username);
    FUNC_0(VAR_0->path);
    FUNC_0(VAR_0->authority);
    FUNC_0(VAR_0->host);

    if (VAR_0->response != ((void*)0))
        FUNC_1(VAR_0->response);
}
