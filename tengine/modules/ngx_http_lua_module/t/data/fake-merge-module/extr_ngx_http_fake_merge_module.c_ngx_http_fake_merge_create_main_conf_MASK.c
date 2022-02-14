
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void ngx_http_fake_merge_main_conf_t ;
struct TYPE_4__ {int pool; } ;
typedef TYPE_1__ ngx_conf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ,char*) ;
 void* FUNC_1 (int ,int) ;

__attribute__((used)) static void *FUNC_2(ngx_conf_t *VAR_1)
{
    ngx_http_fake_merge_main_conf_t *VAR_2;

    VAR_2 = FUNC_1(VAR_1->pool, sizeof(ngx_http_fake_merge_main_conf_t));
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1, 0, "create module main conf");
        return ((void*)0);
    }

    return VAR_2;
}
