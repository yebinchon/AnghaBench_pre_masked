
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int content_type; int content_type_len; } ;
struct TYPE_13__ {TYPE_4__* parent; TYPE_2__ headers_out; int header_sent; int args; int uri; TYPE_1__* connection; scalar_t__ request_output; } ;
typedef TYPE_5__ ngx_http_request_t ;
typedef int ngx_chain_t ;
struct TYPE_11__ {int content_type; int content_type_len; } ;
struct TYPE_12__ {TYPE_3__ headers_out; } ;
struct TYPE_9__ {int log; scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ,char*,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2, void *VAR_3, ngx_int_t VAR_4)
{
    ngx_chain_t *VAR_5;

    if (VAR_4 == VAR_0 || VAR_2->connection->error || VAR_2->request_output) {
        return VAR_4;
    }

    FUNC_2(VAR_1, VAR_2->connection->log, 0,
                   "ssi stub output: \"%V?%V\"", &VAR_2->uri, &VAR_2->args);

    VAR_5 = VAR_3;

    if (!VAR_2->header_sent) {
        VAR_2->headers_out.content_type_len =
                                      VAR_2->parent->headers_out.content_type_len;
        VAR_2->headers_out.content_type = VAR_2->parent->headers_out.content_type;

        if (FUNC_1(VAR_2) == VAR_0) {
            return VAR_0;
        }
    }

    return FUNC_0(VAR_2, VAR_5);
}
