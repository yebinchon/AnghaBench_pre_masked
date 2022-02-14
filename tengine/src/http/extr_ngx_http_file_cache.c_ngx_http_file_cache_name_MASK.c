
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_11__ {int len; int data; } ;
struct TYPE_15__ {int len; TYPE_1__ name; } ;
typedef TYPE_5__ ngx_path_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {TYPE_2__* connection; int pool; TYPE_7__* cache; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_13__ {int len; char* data; } ;
struct TYPE_14__ {TYPE_3__ name; } ;
struct TYPE_17__ {TYPE_4__ file; int key; } ;
typedef TYPE_7__ ngx_http_cache_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,char*,int) ;
 char* FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,int ,char*,char*) ;
 int FUNC_3 (char*,int ,int) ;
 char* FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_4, ngx_path_t *VAR_5)
{
    u_char *VAR_6;
    ngx_http_cache_t *VAR_7;

    VAR_7 = VAR_4->cache;

    if (VAR_7->file.name.len) {
        return VAR_3;
    }

    VAR_7->file.name.len = VAR_5->name.len + 1 + VAR_5->len
                       + 2 * VAR_1;

    VAR_7->file.name.data = FUNC_4(VAR_4->pool, VAR_7->file.name.len + 1);
    if (VAR_7->file.name.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_7->file.name.data, VAR_5->name.data, VAR_5->name.len);

    VAR_6 = VAR_7->file.name.data + VAR_5->name.len + 1 + VAR_5->len;
    VAR_6 = FUNC_1(VAR_6, VAR_7->key, VAR_1);
    *VAR_6 = '\0';

    FUNC_0(VAR_5, VAR_7->file.name.data, VAR_7->file.name.len);

    FUNC_2(VAR_2, VAR_4->connection->log, 0,
                   "cache file: \"%s\"", VAR_7->file.name.data);

    return VAR_3;
}
