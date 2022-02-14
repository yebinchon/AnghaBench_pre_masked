
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int types; int types_keys; int unique; int max_files; int ignore_file_error; int delimiter; int enable; } ;
typedef TYPE_1__ ngx_http_concat_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_http_concat_loc_conf_t *VAR_7 = VAR_5;
    ngx_http_concat_loc_conf_t *VAR_8 = VAR_6;

    FUNC_2(VAR_8->enable, VAR_7->enable, 0);
    FUNC_0(VAR_8->delimiter, VAR_7->delimiter, "");
    FUNC_2(VAR_8->ignore_file_error, VAR_7->ignore_file_error, 0);
    FUNC_1(VAR_8->max_files, VAR_7->max_files, 10);
    FUNC_2(VAR_8->unique, VAR_7->unique, 1);

    if (FUNC_3(VAR_4, &VAR_8->types_keys, &VAR_8->types,
                             &VAR_7->types_keys, &VAR_7->types,
                             VAR_3)
        != VAR_2)
    {
        return VAR_0;
    }

    return VAR_1;
}
