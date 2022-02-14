
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_16__ {char* data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_17__ {int * regex; TYPE_2__ name; TYPE_4__* server; } ;
typedef TYPE_3__ ngx_http_server_name_t ;
struct TYPE_15__ {int * data; scalar_t__ len; } ;
struct TYPE_14__ {scalar_t__ nelts; TYPE_3__* elts; } ;
struct TYPE_20__ {scalar_t__ size; } ;
struct TYPE_18__ {scalar_t__ connection_pool_size; scalar_t__ request_pool_size; scalar_t__ client_header_buffer_size; TYPE_1__ server_name; TYPE_13__ server_names; int underscores_in_headers; int merge_slashes; int ignore_invalid_headers; TYPE_9__ large_client_header_buffers; int server_admin; int client_header_timeout; } ;
typedef TYPE_4__ ngx_http_core_srv_conf_t ;
struct TYPE_19__ {int pool; } ;
typedef TYPE_5__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_13__*) ;
 int FUNC_1 (int ,TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_9__,TYPE_9__,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,int ,int) ;
 int * FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;

__attribute__((used)) static char *
FUNC_9(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_http_core_srv_conf_t *VAR_6 = VAR_4;
    ngx_http_core_srv_conf_t *VAR_7 = VAR_5;

    ngx_str_t VAR_8;
    ngx_http_server_name_t *VAR_9;



    FUNC_4(VAR_7->connection_pool_size,
                              VAR_6->connection_pool_size, 64 * sizeof(void *));
    FUNC_4(VAR_7->request_pool_size,
                              VAR_6->request_pool_size, 4096);
    FUNC_3(VAR_7->client_header_timeout,
                              VAR_6->client_header_timeout, 60000);
    FUNC_4(VAR_7->client_header_buffer_size,
                              VAR_6->client_header_buffer_size, 1024);
    FUNC_2(VAR_7->large_client_header_buffers,
                              VAR_6->large_client_header_buffers,
                              4, 8192);




    if (VAR_7->large_client_header_buffers.size < VAR_7->connection_pool_size) {
        FUNC_1(VAR_2, VAR_3, 0,
                           "the \"large_client_header_buffers\" size must be "
                           "equal to or greater than \"connection_pool_size\"");
        return VAR_0;
    }

    FUNC_6(VAR_7->ignore_invalid_headers,
                              VAR_6->ignore_invalid_headers, 1);

    FUNC_6(VAR_7->merge_slashes, VAR_6->merge_slashes, 1);

    FUNC_6(VAR_7->underscores_in_headers,
                              VAR_6->underscores_in_headers, 0);

    if (VAR_7->server_names.nelts == 0) {

        VAR_9 = FUNC_0(&VAR_7->server_names);



        VAR_9->server = VAR_7;
        FUNC_8(&VAR_9->name, "");
    }

    VAR_9 = VAR_7->server_names.elts;
    VAR_8 = VAR_9[0].name;
    if (VAR_8.data[0] == '.') {
        VAR_8.len--;
        VAR_8.data++;
    }

    VAR_7->server_name.len = VAR_8.len;
    VAR_7->server_name.data = FUNC_7(VAR_3->pool, &VAR_8);
    if (VAR_7->server_name.data == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
