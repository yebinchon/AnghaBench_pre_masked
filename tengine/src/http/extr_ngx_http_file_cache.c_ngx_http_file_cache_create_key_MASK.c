
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_10__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_md5_t ;
struct TYPE_11__ {TYPE_2__* connection; TYPE_5__* cache; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef int ngx_http_file_cache_key ;
typedef int ngx_http_file_cache_header_t ;
struct TYPE_8__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_12__ {int header_start; int key; int main; int crc32; TYPE_1__ keys; } ;
typedef TYPE_5__ ngx_http_cache_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_3__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;

void
FUNC_8(ngx_http_request_t *VAR_2)
{
    size_t VAR_3;
    ngx_str_t *VAR_4;
    ngx_uint_t VAR_5;
    ngx_md5_t VAR_6;
    ngx_http_cache_t *VAR_7;

    VAR_7 = VAR_2->cache;

    VAR_3 = 0;

    FUNC_1(VAR_7->crc32);
    FUNC_5(&VAR_6);

    VAR_4 = VAR_7->keys.elts;
    for (VAR_5 = 0; VAR_5 < VAR_7->keys.nelts; VAR_5++) {
        FUNC_3(VAR_1, VAR_2->connection->log, 0,
                       "http cache key: \"%V\"", &VAR_4[VAR_5]);

        VAR_3 += VAR_4[VAR_5].len;

        FUNC_2(&VAR_7->crc32, VAR_4[VAR_5].data, VAR_4[VAR_5].len);
        FUNC_6(&VAR_6, VAR_4[VAR_5].data, VAR_4[VAR_5].len);
    }

    VAR_7->header_start = sizeof(ngx_http_file_cache_header_t)
                      + sizeof(ngx_http_file_cache_key) + VAR_3 + 1;

    FUNC_0(VAR_7->crc32);
    FUNC_4(VAR_7->key, &VAR_6);

    FUNC_7(VAR_7->main, VAR_7->key, VAR_0);
}
