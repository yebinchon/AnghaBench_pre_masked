
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int create_full_put_path; int access; int min_delete_depth; int methods; } ;
typedef TYPE_1__ ngx_http_dav_loc_conf_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_http_dav_loc_conf_t *VAR_6 = VAR_4;
    ngx_http_dav_loc_conf_t *VAR_7 = VAR_5;

    FUNC_0(VAR_7->methods, VAR_6->methods,
                         (VAR_0|VAR_2));

    FUNC_1(VAR_7->min_delete_depth,
                         VAR_6->min_delete_depth, 0);

    FUNC_1(VAR_7->access, VAR_6->access, 0600);

    FUNC_2(VAR_7->create_full_put_path,
                         VAR_6->create_full_put_path, 0);

    return VAR_1;
}
