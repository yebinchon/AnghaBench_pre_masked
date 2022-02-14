
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {TYPE_6__* doc; TYPE_5__* ctxt; scalar_t__ done; } ;
typedef TYPE_2__ ngx_http_xslt_filter_ctx_t ;
struct TYPE_23__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_24__ {TYPE_15__* buf; struct TYPE_24__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_26__ {int * extSubset; } ;
struct TYPE_25__ {int wellFormed; TYPE_6__* myDoc; } ;
struct TYPE_21__ {int log; } ;
struct TYPE_20__ {scalar_t__ last_in_chain; scalar_t__ last_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_15__*) ;
 int * FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_4, ngx_chain_t *VAR_5)
{
    int VAR_6;
    ngx_chain_t *VAR_7;
    ngx_http_xslt_filter_ctx_t *VAR_8;

    FUNC_5(VAR_0, VAR_4->connection->log, 0,
                   "xslt filter body");

    if (VAR_5 == ((void*)0)) {
        return FUNC_1(VAR_4, VAR_5);
    }

    VAR_8 = FUNC_0(VAR_4, VAR_3);

    if (VAR_8 == ((void*)0) || VAR_8->done) {
        return FUNC_1(VAR_4, VAR_5);
    }

    for (VAR_7 = VAR_5; VAR_7; VAR_7 = VAR_7->next) {

        if (FUNC_2(VAR_4, VAR_8, VAR_7->buf) != VAR_2) {

            if (VAR_8->ctxt->myDoc) {




                FUNC_7(VAR_8->ctxt->myDoc);
            }

            FUNC_8(VAR_8->ctxt);

            return FUNC_4(VAR_4, VAR_8, ((void*)0));
        }

        if (VAR_7->buf->last_buf || VAR_7->buf->last_in_chain) {

            VAR_8->doc = VAR_8->ctxt->myDoc;





            VAR_6 = VAR_8->ctxt->wellFormed;

            FUNC_8(VAR_8->ctxt);

            if (VAR_6) {
                return FUNC_4(VAR_4, VAR_8,
                                       FUNC_3(VAR_4, VAR_8));
            }

            FUNC_7(VAR_8->doc);

            FUNC_6(VAR_1, VAR_4->connection->log, 0,
                          "not well formed XML document");

            return FUNC_4(VAR_4, VAR_8, ((void*)0));
        }
    }

    return VAR_2;
}
