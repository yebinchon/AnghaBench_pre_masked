
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; TYPE_1__* catch; } ;
typedef TYPE_2__ httpd_url_t ;
typedef int httpd_callback_t ;
typedef int httpd_callback_sys_t ;
struct TYPE_4__ {int * p_sys; int cb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(httpd_url_t *VAR_1, int VAR_2, httpd_callback_t VAR_3,
                    httpd_callback_sys_t *VAR_4)
{
    FUNC_0(&VAR_1->lock);
    VAR_1->catch[VAR_2].cb = VAR_3;
    VAR_1->catch[VAR_2].p_sys= VAR_4;
    FUNC_1(&VAR_1->lock);

    return VAR_0;
}
