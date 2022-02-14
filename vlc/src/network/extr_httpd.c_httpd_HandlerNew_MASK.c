
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int httpd_host_t ;
struct TYPE_5__ {int url; void* p_sys; int pf_fill; } ;
typedef TYPE_1__ httpd_handler_t ;
typedef int httpd_handler_callback_t ;
typedef int httpd_callback_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,char const*,char const*,char const*) ;
 TYPE_1__* FUNC_3 (int) ;

httpd_handler_t *FUNC_4(httpd_host_t *VAR_4, const char *VAR_5,
                                  const char *VAR_6,
                                  const char *VAR_7,
                                  httpd_handler_callback_t VAR_8,
                                  void *VAR_9)
{
    httpd_handler_t *VAR_10 = FUNC_3(sizeof(*VAR_10));
    if (!VAR_10)
        return ((void*)0);

    VAR_10->url = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
    if (!VAR_10->url) {
        FUNC_0(VAR_10);
        return ((void*)0);
    }

    VAR_10->pf_fill = VAR_8;
    VAR_10->p_sys = VAR_9;

    FUNC_1(VAR_10->url, VAR_1, VAR_3,
                    (httpd_callback_sys_t*)VAR_10);
    FUNC_1(VAR_10->url, VAR_0, VAR_3,
                    (httpd_callback_sys_t*)VAR_10);
    FUNC_1(VAR_10->url, VAR_2, VAR_3,
                    (httpd_callback_sys_t*)VAR_10);

    return VAR_10;
}
