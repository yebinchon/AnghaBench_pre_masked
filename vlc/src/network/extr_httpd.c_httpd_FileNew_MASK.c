
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int httpd_host_t ;
struct TYPE_5__ {int url; int mime; int * p_sys; int pf_fill; } ;
typedef TYPE_1__ httpd_file_t ;
typedef int httpd_file_sys_t ;
typedef int httpd_file_callback_t ;
typedef int httpd_callback_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,char const*,char const*,char const*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (char const*) ;

httpd_file_t *FUNC_8(httpd_host_t *VAR_4,
                             const char *VAR_5, const char *VAR_6,
                             const char *VAR_7, const char *VAR_8,
                             httpd_file_callback_t VAR_9,
                             httpd_file_sys_t *VAR_10)
{
    const char *VAR_11 = VAR_6;
    if (VAR_11 == ((void*)0) || VAR_11[0] == '\0')
        VAR_11 = FUNC_7(VAR_5);

    size_t VAR_12 = FUNC_5(VAR_11);
    httpd_file_t *VAR_13 = FUNC_3(sizeof(*VAR_13) + VAR_12);
    if (FUNC_6(VAR_13 == ((void*)0)))
        return ((void*)0);

    VAR_13->url = FUNC_2(VAR_4, VAR_5, VAR_7, VAR_8);
    if (!VAR_13->url) {
        FUNC_0(VAR_13);
        return ((void*)0);
    }

    VAR_13->pf_fill = VAR_9;
    VAR_13->p_sys = VAR_10;
    FUNC_4(VAR_13->mime, VAR_11, VAR_12 + 1);

    FUNC_1(VAR_13->url, VAR_1, VAR_3,
                    (httpd_callback_sys_t*)VAR_13);
    FUNC_1(VAR_13->url, VAR_0, VAR_3,
                    (httpd_callback_sys_t*)VAR_13);
    FUNC_1(VAR_13->url, VAR_2, VAR_3,
                    (httpd_callback_sys_t*)VAR_13);

    return VAR_13;
}
