
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_int_t ;
struct TYPE_12__ {int version; } ;
typedef TYPE_2__ ngx_http_tfs_restful_ctx_t ;
struct TYPE_14__ {char* data; int len; } ;
struct TYPE_13__ {TYPE_4__ uri; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2,
    ngx_http_tfs_restful_ctx_t *VAR_3)
{
    u_char *VAR_4, VAR_5, *VAR_6;

    enum {
        sw_start = 0,
        sw_version_prefix,
        sw_version,
        sw_backslash,
    } VAR_7;

    VAR_7 = sw_start;
    VAR_6 = VAR_2->uri.data + VAR_2->uri.len;

    for (VAR_4 = VAR_2->uri.data; VAR_4 < VAR_6; VAR_4++) {
        VAR_5 = *VAR_4;

        switch (VAR_7) {
        case sw_start:
            VAR_7 = sw_version_prefix;
            break;
        case sw_version_prefix:
            if (VAR_5 != 'v') {
                FUNC_2(VAR_1, VAR_2->connection->log, 0,
                               "version invalid %V ", &VAR_2->uri);
                return VAR_0;
            }
            VAR_7 = sw_version;
            break;

        case sw_version:
            if (VAR_5 < '1' || VAR_5 > '9') {
                return VAR_0;
            }

            VAR_3->version = VAR_5 - '0';
            if (VAR_3->version > 2) {
                return VAR_0;
            }

            VAR_7 = sw_backslash;
            break;

        case sw_backslash:
            if (VAR_5 != '/') {
                return VAR_0;
            }

            if (VAR_3->version == 1) {
                return FUNC_1(VAR_2, VAR_3, ++VAR_4);
            }

            if (VAR_3->version == 2) {
                return FUNC_0(VAR_2, VAR_3, ++VAR_4);
            }

            return VAR_0;
        }
    }

    return VAR_0;
}
