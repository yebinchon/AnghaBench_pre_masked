
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_http_fake_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,char*) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static char *FUNC_2(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_http_fake_loc_conf_t *VAR_7;

    VAR_7 = FUNC_1(VAR_4, VAR_3);
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_2, VAR_4, 0,
                           "get module loc conf failed in merge loc conf");
        return VAR_0;
    }

    return VAR_1;
}
