
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ncaptures; void* variables_hash_bucket_size; void* variables_hash_max_size; void* server_names_hash_bucket_size; void* server_names_hash_max_size; } ;
typedef TYPE_1__ ngx_http_core_main_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 void* FUNC_0 (void*,int) ;
 int VAR_1 ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_2, void *VAR_3)
{
    ngx_http_core_main_conf_t *VAR_4 = VAR_3;

    FUNC_1(VAR_4->server_names_hash_max_size, 512);
    FUNC_1(VAR_4->server_names_hash_bucket_size,
                             VAR_1);

    VAR_4->server_names_hash_bucket_size =
            FUNC_0(VAR_4->server_names_hash_bucket_size, VAR_1);


    FUNC_1(VAR_4->variables_hash_max_size, 1024);
    FUNC_1(VAR_4->variables_hash_bucket_size, 64);

    VAR_4->variables_hash_bucket_size =
               FUNC_0(VAR_4->variables_hash_bucket_size, VAR_1);

    if (VAR_4->ncaptures) {
        VAR_4->ncaptures = (VAR_4->ncaptures + 1) * 3;
    }

    return VAR_0;
}
