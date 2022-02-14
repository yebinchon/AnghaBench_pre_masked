
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int types; int types_keys; int value_len; int min_file_chunk; int last_modified; int ignore_recycled_buffers; int silent_errors; int enable; } ;
typedef TYPE_1__ ngx_http_ssi_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_http_ssi_loc_conf_t *VAR_7 = VAR_5;
    ngx_http_ssi_loc_conf_t *VAR_8 = VAR_6;

    FUNC_1(VAR_8->enable, VAR_7->enable, 0);
    FUNC_1(VAR_8->silent_errors, VAR_7->silent_errors, 0);
    FUNC_1(VAR_8->ignore_recycled_buffers,
                         VAR_7->ignore_recycled_buffers, 0);
    FUNC_1(VAR_8->last_modified, VAR_7->last_modified, 0);

    FUNC_0(VAR_8->min_file_chunk, VAR_7->min_file_chunk, 1024);
    FUNC_0(VAR_8->value_len, VAR_7->value_len, 255);

    if (FUNC_2(VAR_4, &VAR_8->types_keys, &VAR_8->types,
                             &VAR_7->types_keys, &VAR_7->types,
                             VAR_3)
        != VAR_2)
    {
        return VAR_0;
    }

    return VAR_1;
}
