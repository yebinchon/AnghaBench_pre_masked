
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
struct TYPE_14__ {char* data; scalar_t__ len; } ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
struct TYPE_10__ {scalar_t__ len; int data; } ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_13__ {TYPE_6__ request_line; TYPE_4__* connection; TYPE_3__ unparsed_uri; TYPE_2__ method_name; int stream; int pool; TYPE_1__ schema; } ;
typedef TYPE_5__ ngx_http_request_t ;
typedef int ending ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_6__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_6)
{
    u_char *VAR_7;

    static const u_char VAR_8[] = " HTTP/2.0";

    if (VAR_6->method_name.len == 0
        || VAR_6->schema.len == 0
        || VAR_6->unparsed_uri.len == 0)
    {
        if (VAR_6->method_name.len == 0) {
            FUNC_4(VAR_4, VAR_6->connection->log, 0,
                          "client sent no :method header");

        } else if (VAR_6->schema.len == 0) {
            FUNC_4(VAR_4, VAR_6->connection->log, 0,
                          "client sent no :scheme header");

        } else {
            FUNC_4(VAR_4, VAR_6->connection->log, 0,
                          "client sent no :path header");
        }

        FUNC_1(VAR_6, VAR_1);
        return VAR_0;
    }

    VAR_6->request_line.len = VAR_6->method_name.len + 1
                          + VAR_6->unparsed_uri.len
                          + sizeof(VAR_8) - 1;

    VAR_7 = FUNC_6(VAR_6->pool, VAR_6->request_line.len + 1);
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_6->stream, VAR_2);
        return VAR_0;
    }

    VAR_6->request_line.data = VAR_7;

    VAR_7 = FUNC_0(VAR_7, VAR_6->method_name.data, VAR_6->method_name.len);

    *VAR_7++ = ' ';

    VAR_7 = FUNC_0(VAR_7, VAR_6->unparsed_uri.data, VAR_6->unparsed_uri.len);

    FUNC_5(VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_3(VAR_3, VAR_6->connection->log, 0,
                   "http2 request line: \"%V\"", &VAR_6->request_line);

    return VAR_5;
}
