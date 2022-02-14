
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_int_t ;
struct TYPE_10__ {char* data; int len; } ;
struct TYPE_9__ {char* data; int len; } ;
struct TYPE_11__ {TYPE_3__ appkey; TYPE_2__ file_path_s; int meta; } ;
typedef TYPE_4__ ngx_http_tfs_restful_ctx_t ;
struct TYPE_8__ {char* data; int len; } ;
struct TYPE_12__ {scalar_t__ method; TYPE_1__ uri; } ;
typedef TYPE_5__ ngx_http_request_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_8,
    ngx_http_tfs_restful_ctx_t *VAR_9, u_char *VAR_10)
{
    u_char *VAR_11, VAR_12, *VAR_13, *VAR_14, *VAR_15;

    enum {
        sw_appkey = 0,
        sw_metadata,
        sw_name,
    } VAR_16;

    VAR_16 = sw_appkey;
    VAR_14 = VAR_8->uri.data + VAR_8->uri.len;
    VAR_13 = VAR_10;
    VAR_15 = ((void*)0);

    for (VAR_11 = VAR_10; VAR_11 < VAR_14; VAR_11++) {
        VAR_12 = *VAR_11;

        switch (VAR_16) {

        case sw_appkey:
            if (VAR_12 == '/') {
                VAR_9->appkey.data = VAR_13;
                VAR_9->appkey.len = VAR_11 - VAR_13;

                VAR_16 = sw_metadata;
                if (VAR_11 + 1 < VAR_14) {
                    VAR_15 = VAR_11 + 1;
                }
            }

            break;

        case sw_metadata:
            if (VAR_12 == '/') {
                if (FUNC_0(VAR_15, "metadata", 8) == 0) {
                    if (VAR_11 + 1 < VAR_14) {
                        VAR_9->meta = VAR_6;
                        VAR_9->file_path_s.data = VAR_11 + 1;
                        VAR_16 = sw_name;

                    } else {
                        return VAR_0;
                    }
                }
            }
        case sw_name:
            break;
        }
    }

    if (VAR_8->method == VAR_2 || VAR_8->method == VAR_1
        || VAR_8->method == VAR_4 || VAR_8->method == VAR_3) {
        if (VAR_16 == sw_appkey) {
            return VAR_0;
        }

        if (VAR_16 == sw_metadata) {
            VAR_9->file_path_s.data = VAR_15;
        }

        if (VAR_16 == sw_name) {
            if (VAR_8->method == VAR_1 || VAR_8->method == VAR_4) {
                return VAR_0;
            }
        }
        VAR_9->file_path_s.len = VAR_11 - VAR_9->file_path_s.data;
        if (VAR_9->file_path_s.len < 1
            || VAR_9->file_path_s.len > VAR_5)
        {
            return VAR_0;
        }

    } else {
        if (VAR_16 == sw_appkey) {
            VAR_9->appkey.len = VAR_11 - VAR_13;
            if (VAR_9->appkey.len == 0) {
                return VAR_0;
            }
            VAR_9->appkey.data = VAR_13;

        } else {
            return VAR_0;
        }
    }

    return VAR_7;
}
