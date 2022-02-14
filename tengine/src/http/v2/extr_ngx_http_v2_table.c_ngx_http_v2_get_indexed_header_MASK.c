
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {int len; size_t data; } ;
struct TYPE_14__ {int len; size_t data; } ;
struct TYPE_20__ {TYPE_6__ value; TYPE_2__ name; } ;
typedef TYPE_8__ ngx_http_v2_header_t ;
struct TYPE_17__ {size_t added; size_t deleted; size_t allocated; size_t storage; TYPE_8__** entries; } ;
struct TYPE_15__ {int len; char* data; } ;
struct TYPE_13__ {int len; char* data; } ;
struct TYPE_12__ {TYPE_3__ value; TYPE_1__ name; } ;
struct TYPE_16__ {TYPE_10__ header; int pool; } ;
struct TYPE_21__ {TYPE_7__* connection; TYPE_5__ hpack; TYPE_4__ state; } ;
typedef TYPE_9__ ngx_http_v2_connection_t ;
struct TYPE_19__ {int log; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*,size_t,size_t) ;
 TYPE_10__* VAR_6 ;
 int FUNC_1 (int ,int ,int ,char*,char*,size_t) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;
 char* FUNC_3 (int ,int) ;

ngx_int_t
FUNC_4(ngx_http_v2_connection_t *VAR_7, ngx_uint_t VAR_8,
    ngx_uint_t VAR_9)
{
    u_char *VAR_10;
    size_t VAR_11;
    ngx_http_v2_header_t *VAR_12;

    if (VAR_8 == 0) {
        FUNC_2(VAR_4, VAR_7->connection->log, 0,
                      "client sent invalid hpack table index 0");
        return VAR_0;
    }

    FUNC_1(VAR_3, VAR_7->connection->log, 0,
                   "http2 get indexed %s: %ui",
                   VAR_9 ? "name" : "header", VAR_8);

    VAR_8--;

    if (VAR_8 < VAR_1) {
        VAR_7->state.header = VAR_6[VAR_8];
        return VAR_5;
    }

    VAR_8 -= VAR_1;

    if (VAR_8 < VAR_7->hpack.added - VAR_7->hpack.deleted) {
        VAR_8 = (VAR_7->hpack.added - VAR_8 - 1) % VAR_7->hpack.allocated;
        VAR_12 = VAR_7->hpack.entries[VAR_8];

        VAR_10 = FUNC_3(VAR_7->state.pool, VAR_12->name.len + 1);
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7->state.header.name.len = VAR_12->name.len;
        VAR_7->state.header.name.data = VAR_10;

        VAR_11 = VAR_7->hpack.storage + VAR_2 - VAR_12->name.data;

        if (VAR_12->name.len > VAR_11) {
            VAR_10 = FUNC_0(VAR_10, VAR_12->name.data, VAR_11);
            VAR_10 = FUNC_0(VAR_10, VAR_7->hpack.storage, VAR_12->name.len - VAR_11);

        } else {
            VAR_10 = FUNC_0(VAR_10, VAR_12->name.data, VAR_12->name.len);
        }

        *VAR_10 = '\0';

        if (VAR_9) {
            return VAR_5;
        }

        VAR_10 = FUNC_3(VAR_7->state.pool, VAR_12->value.len + 1);
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7->state.header.value.len = VAR_12->value.len;
        VAR_7->state.header.value.data = VAR_10;

        VAR_11 = VAR_7->hpack.storage + VAR_2 - VAR_12->value.data;

        if (VAR_12->value.len > VAR_11) {
            VAR_10 = FUNC_0(VAR_10, VAR_12->value.data, VAR_11);
            VAR_10 = FUNC_0(VAR_10, VAR_7->hpack.storage, VAR_12->value.len - VAR_11);

        } else {
            VAR_10 = FUNC_0(VAR_10, VAR_12->value.data, VAR_12->value.len);
        }

        *VAR_10 = '\0';

        return VAR_5;
    }

    FUNC_2(VAR_4, VAR_7->connection->log, 0,
                  "client sent out of bound hpack table index: %ui", VAR_8);

    return VAR_0;
}
