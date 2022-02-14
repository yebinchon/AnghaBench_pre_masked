
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_12__ {int log; int fd; } ;
struct TYPE_14__ {char* warn; int persistent; int clean; int access; int offset; int pool; int path; TYPE_11__ file; int log_level; } ;
typedef TYPE_2__ ngx_temp_file_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {scalar_t__ request_body_file_group_access; int request_body_file_log_level; int pool; TYPE_1__* connection; TYPE_4__* request_body; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_2__* temp_file; } ;
typedef TYPE_4__ ngx_http_request_body_t ;
struct TYPE_17__ {int client_body_temp_path; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
typedef int ngx_chain_t ;
struct TYPE_13__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_11__*,int ,int ,int,int,int) ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_4, ngx_chain_t *VAR_5)
{
    ssize_t VAR_6;
    ngx_temp_file_t *VAR_7;
    ngx_http_request_body_t *VAR_8;
    ngx_http_core_loc_conf_t *VAR_9;

    VAR_8 = VAR_4->request_body;

    if (VAR_8->temp_file == ((void*)0)) {
        VAR_7 = FUNC_2(VAR_4->pool, sizeof(ngx_temp_file_t));
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        VAR_9 = FUNC_1(VAR_4, VAR_3);

        VAR_7->file.fd = VAR_1;
        VAR_7->file.log = VAR_4->connection->log;
        VAR_7->path = VAR_9->client_body_temp_path;
        VAR_7->pool = VAR_4->pool;
        VAR_7->warn = "a client request body is buffered to a temporary file";
        VAR_7->log_level = VAR_4->request_body_file_log_level;
        VAR_7->persistent = 1;
        VAR_7->clean = 1;

        if (VAR_4->request_body_file_group_access) {
            VAR_7->access = 0660;
        }

        VAR_8->temp_file = VAR_7;

        if (VAR_5 == ((void*)0)) {


            if (FUNC_0(&VAR_7->file, VAR_7->path, VAR_7->pool,
                                     VAR_7->persistent, VAR_7->clean, VAR_7->access)
                != VAR_2)
            {
                return VAR_0;
            }

            return VAR_2;
        }
    }

    VAR_6 = FUNC_3(VAR_8->temp_file, VAR_5);



    if (VAR_6 == VAR_0) {
        return VAR_0;
    }

    VAR_8->temp_file->offset += VAR_6;

    return VAR_2;
}
