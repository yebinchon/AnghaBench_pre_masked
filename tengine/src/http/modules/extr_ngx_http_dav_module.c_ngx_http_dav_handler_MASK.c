
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_15__ {int content_range; } ;
struct TYPE_14__ {char* data; int len; } ;
struct TYPE_17__ {int method; int request_body_in_file_only; int request_body_in_persistent_file; int request_body_in_clean_file; int request_body_file_group_access; int request_body_file_log_level; TYPE_3__* connection; TYPE_2__ headers_in; TYPE_1__ uri; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_18__ {int methods; } ;
typedef TYPE_5__ ngx_http_dav_loc_conf_t ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_http_dav_loc_conf_t *VAR_10;

    VAR_10 = FUNC_3(VAR_8, VAR_6);

    if (!(VAR_8->method & VAR_10->methods)) {
        return VAR_0;
    }

    switch (VAR_8->method) {

    case 128:

        if (VAR_8->uri.data[VAR_8->uri.len - 1] == '/') {
            FUNC_5(VAR_5, VAR_8->connection->log, 0,
                          "cannot PUT to a collection");
            return VAR_2;
        }

        if (VAR_8->headers_in.content_range) {
            FUNC_5(VAR_5, VAR_8->connection->log, 0,
                          "PUT with range is unsupported");
            return VAR_3;
        }

        VAR_8->request_body_in_file_only = 1;
        VAR_8->request_body_in_persistent_file = 1;
        VAR_8->request_body_in_clean_file = 1;
        VAR_8->request_body_file_group_access = 1;
        VAR_8->request_body_file_log_level = 0;

        VAR_9 = FUNC_4(VAR_8, VAR_7);

        if (VAR_9 >= VAR_4) {
            return VAR_9;
        }

        return VAR_1;

    case 131:

        return FUNC_1(VAR_8);

    case 130:

        return FUNC_2(VAR_8, VAR_10);

    case 132:

        return FUNC_0(VAR_8);

    case 129:

        return FUNC_0(VAR_8);
    }

    return VAR_0;
}
