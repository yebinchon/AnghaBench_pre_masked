
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int url; int dst; } ;
typedef TYPE_1__ httpd_redirect_t ;
typedef int httpd_host_t ;
typedef int httpd_callback_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,char const*,int *,int *) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ) ;

httpd_redirect_t *FUNC_7(httpd_host_t *VAR_5, const char *VAR_6,
                                     const char *VAR_7)
{
    size_t VAR_8 = FUNC_5(VAR_6);

    httpd_redirect_t *VAR_9 = FUNC_3(sizeof(*VAR_9) + VAR_8);
    if (FUNC_6(VAR_9 == ((void*)0)))
        return ((void*)0);

    VAR_9->url = FUNC_2(VAR_5, VAR_7, ((void*)0), ((void*)0));
    if (!VAR_9->url) {
        FUNC_0(VAR_9);
        return ((void*)0);
    }
    FUNC_4(VAR_9->dst, VAR_6, VAR_8 + 1);


    FUNC_1(VAR_9->url, VAR_2, VAR_4,
                    (httpd_callback_sys_t*)VAR_9);
    FUNC_1(VAR_9->url, VAR_1, VAR_4,
                    (httpd_callback_sys_t*)VAR_9);
    FUNC_1(VAR_9->url, VAR_3, VAR_4,
                    (httpd_callback_sys_t*)VAR_9);
    FUNC_1(VAR_9->url, VAR_0, VAR_4,
                    (httpd_callback_sys_t*)VAR_9);

    return VAR_9;
}
