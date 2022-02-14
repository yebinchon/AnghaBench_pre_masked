
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_int_t ;
struct TYPE_12__ {char* data; int len; } ;
struct TYPE_10__ {char* data; int len; } ;
struct TYPE_13__ {scalar_t__ file_type; TYPE_4__ file_path_s; void* get_appid; int user_id; int app_id; void* meta; TYPE_2__ appkey; } ;
typedef TYPE_5__ ngx_http_tfs_restful_ctx_t ;
struct TYPE_9__ {char* data; int len; } ;
struct TYPE_14__ {scalar_t__ method; TYPE_3__* connection; TYPE_1__ uri; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,unsigned long long*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_9,
    ngx_http_tfs_restful_ctx_t *VAR_10, u_char *VAR_11)
{
    u_char *VAR_12, VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;
    ngx_int_t VAR_18;

    enum {
        sw_appkey = 0,
        sw_metadata,
        sw_appid,
        sw_uid,
        sw_type,
        sw_name,
    } VAR_19;

    VAR_19 = sw_appkey;
    VAR_15 = VAR_9->uri.data + VAR_9->uri.len;
    VAR_14 = VAR_11;
    VAR_16 = ((void*)0);
    VAR_17 = ((void*)0);

    for (VAR_12 = VAR_11; VAR_12 < VAR_15; VAR_12++) {
        VAR_13 = *VAR_12;

        switch (VAR_19) {
        case sw_appkey:
            if (VAR_13 == '/') {
                VAR_10->appkey.data = VAR_14;
                VAR_10->appkey.len = VAR_12 - VAR_14;

                VAR_14 = VAR_12 + 1;

                if (VAR_14 < VAR_15) {
                    if (*VAR_14 == 'a') {
                        VAR_19 = sw_name;
                        VAR_16 = VAR_14;
                    } else if (*VAR_14 == 'm') {
                        VAR_19 = sw_metadata;
                        VAR_17 = VAR_14;
                    } else {
                        VAR_19 = sw_appid;
                    }
                }
            }
            break;
        case sw_metadata:
            if (VAR_13 == '/') {
                if (FUNC_2(VAR_17, "metadata", 8) == 0) {
                    if (VAR_12 + 1 < VAR_15) {
                        VAR_10->meta = VAR_5;
                        VAR_14 = VAR_12 + 1;
                        VAR_19 = sw_appid;

                    } else {
                        return VAR_0;
                    }
                }
            }
            break;
        case sw_appid:
            if (VAR_13 == '/') {
                VAR_18 = FUNC_0(VAR_14, VAR_12 - VAR_14,
                                         (unsigned long long *)&VAR_10->app_id);
                if (VAR_18 == VAR_0 || VAR_10->app_id == 0) {
                    return VAR_0;
                }

                VAR_14 = VAR_12 + 1;
                VAR_19 = sw_uid;
                break;
            }

            if (VAR_13 < '0' || VAR_13 > '9') {
                FUNC_1(VAR_7, VAR_9->connection->log, 0,
                              "appid is invalid");
                return VAR_0;
            }

            if ((size_t) (VAR_12 - VAR_14) > (VAR_6 - 1)) {
                return VAR_0;
            }

            break;
        case sw_uid:
            if (VAR_13 == '/') {
                VAR_18 = FUNC_0(VAR_14, VAR_12 - VAR_14,
                                         (unsigned long long *)&VAR_10->user_id);
                if (VAR_18 == VAR_0 || VAR_10->user_id == 0) {
                    return VAR_0;
                }
                VAR_14 = VAR_12 + 1;
                VAR_19 = sw_type;
                break;
            }

            if (VAR_13 < '0' || VAR_13 > '9') {
                FUNC_1(VAR_7, VAR_9->connection->log, 0,
                              "userid is invalid");
                return VAR_0;
            }

            if ((size_t) (VAR_12 - VAR_14) > VAR_6 - 1) {
                FUNC_1(VAR_7, VAR_9->connection->log, 0,
                              "userid is too big");
                return VAR_0;
            }
            break;
        case sw_type:
            if (VAR_13 == '/') {
                if (FUNC_3(VAR_14, "file", VAR_12 - VAR_14) == 0) {
                    VAR_10->file_type = VAR_3;

                } else if (FUNC_3(VAR_14, "dir", VAR_12 - VAR_14) == 0) {
                    VAR_10->file_type = VAR_2;

                } else {
                    return VAR_0;
                }
                VAR_10->file_path_s.data = VAR_12;
                VAR_19 = sw_name;
            }
            break;
        case sw_name:
            break;
        }
    }

    if (VAR_9->method == VAR_1 && VAR_16 != ((void*)0)) {
        if (FUNC_2(VAR_16, "appid", 5) == 0) {
            VAR_10->get_appid = VAR_5;
            VAR_10->file_path_s.data = VAR_16;
            VAR_10->file_path_s.len = 5;
            return VAR_8;
        }
        return VAR_0;
    }

    VAR_10->file_path_s.len = VAR_12 - VAR_10->file_path_s.data;
    if (VAR_10->file_path_s.len < 1
        || VAR_10->file_path_s.len > VAR_4)
    {
        return VAR_0;
    }


    if (VAR_10->file_type == VAR_3
        && VAR_10->file_path_s.len == 1)
    {
        return VAR_0;
    }

    return VAR_8;
}
