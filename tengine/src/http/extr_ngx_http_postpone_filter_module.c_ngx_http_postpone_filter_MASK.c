
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {TYPE_2__* postponed; int main; int args; int uri; scalar_t__ subrequest_in_memory; TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_9__ {struct TYPE_9__* next; int * out; TYPE_1__* request; } ;
typedef TYPE_2__ ngx_http_postponed_request_t ;
struct TYPE_10__ {int log; TYPE_1__* data; scalar_t__ buffered; } ;
typedef TYPE_3__ ngx_connection_t ;
typedef int ngx_chain_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_5 (int ,int ,int ,char*,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_4, ngx_chain_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_http_postponed_request_t *VAR_7;

    VAR_6 = VAR_4->connection;

    FUNC_5(VAR_2, VAR_6->log, 0,
                   "http postpone filter \"%V?%V\" %p", &VAR_4->uri, &VAR_4->args, VAR_5);

    if (VAR_4->subrequest_in_memory) {
        return FUNC_3(VAR_4, VAR_5);
    }

    if (VAR_4 != VAR_6->data) {

        if (VAR_5) {
            if (FUNC_2(VAR_4, VAR_5) != VAR_3) {
                return VAR_0;
            }

            return VAR_3;
        }







        return VAR_3;
    }

    if (VAR_4->postponed == ((void*)0)) {

        if (VAR_5 || VAR_6->buffered) {
            return FUNC_0(VAR_4->main, VAR_5);
        }

        return VAR_3;
    }

    if (VAR_5) {
        if (FUNC_2(VAR_4, VAR_5) != VAR_3) {
            return VAR_0;
        }
    }

    do {
        VAR_7 = VAR_4->postponed;

        if (VAR_7->request) {

            FUNC_4(VAR_2, VAR_6->log, 0,
                           "http postpone filter wake \"%V?%V\"",
                           &VAR_7->request->uri, &VAR_7->request->args);

            VAR_4->postponed = VAR_7->next;

            VAR_6->data = VAR_7->request;

            return FUNC_1(VAR_7->request, ((void*)0));
        }

        if (VAR_7->out == ((void*)0)) {
            FUNC_6(VAR_1, VAR_6->log, 0,
                          "http postpone filter NULL output");

        } else {
            FUNC_4(VAR_2, VAR_6->log, 0,
                           "http postpone filter output \"%V?%V\"",
                           &VAR_4->uri, &VAR_4->args);

            if (FUNC_0(VAR_4->main, VAR_7->out) == VAR_0) {
                return VAR_0;
            }
        }

        VAR_4->postponed = VAR_7->next;

    } while (VAR_4->postponed);

    return VAR_3;
}
