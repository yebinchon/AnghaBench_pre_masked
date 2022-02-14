
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {TYPE_1__* connection; TYPE_4__* cache; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_8__ {int fd; int log; } ;
struct TYPE_10__ {TYPE_2__ file; int keys; } ;
typedef TYPE_4__ ngx_http_cache_t ;
struct TYPE_7__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 TYPE_4__* FUNC_1 (int ,int) ;

ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3)
{
    ngx_http_cache_t *VAR_4;

    VAR_4 = FUNC_1(VAR_3->pool, sizeof(ngx_http_cache_t));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_0(&VAR_4->keys, VAR_3->pool, 4, sizeof(ngx_str_t)) != VAR_2) {
        return VAR_0;
    }

    VAR_3->cache = VAR_4;
    VAR_4->file.log = VAR_3->connection->log;
    VAR_4->file.fd = VAR_1;

    return VAR_2;
}
