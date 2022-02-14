
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_29__ {int len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_28__ {int * content_type_lowcase; TYPE_3__ content_type; int content_type_len; } ;
struct TYPE_30__ {TYPE_2__ headers_out; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_31__ {int phase; int type; } ;
typedef TYPE_5__ ngx_http_image_filter_ctx_t ;
struct TYPE_32__ {int filter; } ;
typedef TYPE_6__ ngx_http_image_filter_conf_t ;
struct TYPE_33__ {int * next; int * buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_27__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*,int *,int ) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_2 (TYPE_4__*,int ) ;
 int VAR_9 ;
 int * FUNC_3 (TYPE_4__*,int *) ;
 int * FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_7__*) ;
 TYPE_3__* VAR_10 ;
 int FUNC_8 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_9 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_11, ngx_chain_t *VAR_12)
{
    ngx_int_t VAR_13;
    ngx_str_t *VAR_14;
    ngx_chain_t VAR_15;
    ngx_http_image_filter_ctx_t *VAR_16;
    ngx_http_image_filter_conf_t *VAR_17;

    FUNC_9(VAR_7, VAR_11->connection->log, 0, "image filter");

    if (VAR_12 == ((void*)0)) {
        return FUNC_8(VAR_11, VAR_12);
    }

    VAR_16 = FUNC_1(VAR_11, VAR_9);

    if (VAR_16 == ((void*)0)) {
        return FUNC_8(VAR_11, VAR_12);
    }

    switch (VAR_16->phase) {

    case 128:

        VAR_16->type = FUNC_7(VAR_11, VAR_12);

        VAR_17 = FUNC_2(VAR_11, VAR_9);

        if (VAR_16->type == VAR_3) {

            if (VAR_17->filter == VAR_4) {
                VAR_15.buf = FUNC_3(VAR_11, ((void*)0));

                if (VAR_15.buf) {
                    VAR_15.next = ((void*)0);
                    VAR_16->phase = VAR_2;

                    return FUNC_6(VAR_11, VAR_16, &VAR_15);
                }
            }

            return FUNC_0(VAR_11,
                                              &VAR_9,
                                              VAR_6);
        }



        VAR_14 = &VAR_10[VAR_16->type - 1];
        VAR_11->headers_out.content_type_len = VAR_14->len;
        VAR_11->headers_out.content_type = *VAR_14;
        VAR_11->headers_out.content_type_lowcase = ((void*)0);

        if (VAR_17->filter == VAR_5) {
            VAR_16->phase = 131;

            return FUNC_6(VAR_11, VAR_16, VAR_12);
        }

        VAR_16->phase = 129;



    case 129:

        VAR_13 = FUNC_5(VAR_11, VAR_12);

        if (VAR_13 == VAR_0) {
            return VAR_8;
        }

        if (VAR_13 == VAR_1) {
            return FUNC_0(VAR_11,
                                              &VAR_9,
                                              VAR_6);
        }



    case 130:

        VAR_15.buf = FUNC_4(VAR_11);

        if (VAR_15.buf == ((void*)0)) {
            return FUNC_0(VAR_11,
                                              &VAR_9,
                                              VAR_6);
        }

        VAR_15.next = ((void*)0);
        VAR_16->phase = 131;

        return FUNC_6(VAR_11, VAR_16, &VAR_15);

    case 131:

        return FUNC_8(VAR_11, VAR_12);

    default:

        VAR_13 = FUNC_8(VAR_11, ((void*)0));


        return (VAR_13 == VAR_8) ? VAR_1 : VAR_13;
    }
}
