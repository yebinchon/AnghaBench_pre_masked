
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; } ;
typedef TYPE_1__ ngx_http_fake_merge_main_conf_t ;
struct TYPE_5__ {int a; } ;
typedef TYPE_2__ ngx_http_fake_merge_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_http_fake_merge_loc_conf_t *VAR_7 = VAR_6;
    ngx_http_fake_merge_loc_conf_t *VAR_8 = VAR_5;
    ngx_http_fake_merge_main_conf_t *VAR_9;

    FUNC_1(VAR_7->a, VAR_8->a, 0);

    VAR_9 = FUNC_2(VAR_4,
                                              VAR_3);
    if (VAR_9 == ((void*)0)) {
        FUNC_0(VAR_2, VAR_4, 0,
                           "get module main conf failed in merge loc conf");
        return VAR_0;
    }


    VAR_9->a = VAR_7->a;

    return VAR_1;
}
