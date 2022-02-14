
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int url; int * p_sys; } ;
typedef TYPE_1__ httpd_file_t ;
typedef int httpd_file_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

httpd_file_sys_t *FUNC_2(httpd_file_t *VAR_0)
{
    httpd_file_sys_t *VAR_1 = VAR_0->p_sys;

    FUNC_1(VAR_0->url);
    FUNC_0(VAR_0);
    return VAR_1;
}
