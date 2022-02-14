
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int fd; } ;
struct TYPE_11__ {TYPE_2__ file; struct TYPE_11__* temp_file; int clean; int persistent; } ;
typedef TYPE_3__ ngx_temp_file_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {TYPE_3__* request_body; int pool; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef TYPE_3__ ngx_http_request_body_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;
 void* FUNC_3 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3)
{
    ngx_temp_file_t *VAR_4;

    ngx_http_request_body_t *VAR_5;

    VAR_4 = VAR_3->request_body->temp_file;

    if (!VAR_4->persistent || !VAR_4->clean) {
        FUNC_1(VAR_1, VAR_3->connection->log, 0,
                      "the request body was not read by ngx_lua");

        return VAR_0;
    }

    VAR_5 = FUNC_3(VAR_3->pool, sizeof(ngx_http_request_body_t));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_5, VAR_3->request_body, sizeof(ngx_http_request_body_t));

    VAR_5->temp_file = FUNC_3(VAR_3->pool, sizeof(ngx_temp_file_t));
    if (VAR_5->temp_file == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_5->temp_file, VAR_4, sizeof(ngx_temp_file_t));
    FUNC_0("file fd: %d", VAR_5->temp_file->file.fd);

    VAR_3->request_body = VAR_5;

    return VAR_2;
}
