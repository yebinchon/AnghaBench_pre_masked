
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_16__ {scalar_t__ content_length_n; } ;
struct TYPE_19__ {int method; int * variables; int pool; TYPE_2__* connection; int method_name; TYPE_5__* request_body; TYPE_1__ headers_in; int header_in; struct TYPE_19__* parent; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ temp_file; scalar_t__ buf; } ;
typedef TYPE_5__ ngx_http_request_body_t ;
struct TYPE_18__ {int nelts; } ;
struct TYPE_21__ {TYPE_3__ variables; } ;
typedef TYPE_6__ ngx_http_core_main_conf_t ;
typedef int ngx_array_t ;
struct TYPE_17__ {int log; } ;


 scalar_t__ VAR_0 ;





 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 TYPE_6__* FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int ,int ,int ,char*,unsigned int) ;
 int FUNC_7 (int *,int *,size_t) ;
 int * FUNC_8 (int ,size_t) ;
 int * FUNC_9 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_21, ngx_uint_t VAR_22,
    int VAR_23, ngx_http_request_body_t *VAR_24,
    unsigned VAR_25, ngx_array_t *VAR_26)
{
    ngx_http_request_t *VAR_27;
    ngx_int_t VAR_28;
    ngx_http_core_main_conf_t *VAR_29;
    size_t VAR_30;

    VAR_27 = VAR_21->parent;

    VAR_21->header_in = VAR_27->header_in;

    if (VAR_24) {
        VAR_21->request_body = VAR_24;

        VAR_28 = FUNC_4(VAR_21,
                                                    VAR_24->buf
                                                    ? FUNC_0(VAR_24->buf)
                                                    : 0);

        if (VAR_28 != VAR_4) {
            return VAR_0;
        }

    } else if (!VAR_23
               && VAR_22 != 130
               && VAR_22 != 133
               && VAR_27->headers_in.content_length_n > 0)
    {
        VAR_28 = FUNC_4(VAR_21, 0);
        if (VAR_28 != VAR_4) {
            return VAR_0;
        }


        VAR_21->request_body = ((void*)0);


    } else {
        if (FUNC_3(VAR_21, VAR_27) != VAR_4) {
            return VAR_0;
        }

        if (VAR_21->request_body) {



            if (VAR_21->request_body->temp_file) {
                if (FUNC_2(VAR_21) != VAR_4) {
                    return VAR_0;
                }
            }
        }
    }

    VAR_21->method = VAR_22;

    switch (VAR_22) {
        case 140:
            VAR_21->method_name = VAR_8;
            break;

        case 133:
            VAR_21->method_name = VAR_15;
            break;

        case 130:
            VAR_21->method_name = VAR_18;
            break;

        case 139:
            VAR_21->method_name = VAR_9;
            break;

        case 141:
            VAR_21->method_name = VAR_7;
            break;

        case 135:
            VAR_21->method_name = VAR_13;
            break;

        case 137:
            VAR_21->method_name = VAR_11;
            break;

        case 142:
            VAR_21->method_name = VAR_6;
            break;

        case 136:
            VAR_21->method_name = VAR_12;
            break;

        case 132:
            VAR_21->method_name = VAR_16;
            break;

        case 131:
            VAR_21->method_name = VAR_17;
            break;

        case 138:
            VAR_21->method_name = VAR_10;
            break;

        case 128:
            VAR_21->method_name = VAR_20;
            break;

        case 134:
            VAR_21->method_name = VAR_14;
            break;

        case 129:
            VAR_21->method_name = VAR_19;
            break;

        default:
            FUNC_6(VAR_3, VAR_27->connection->log, 0,
                          "unsupported HTTP method: %u", (unsigned) VAR_22);

            return VAR_0;
    }

    if (!(VAR_25 & VAR_2)) {

        VAR_29 = FUNC_1(VAR_21, VAR_5);

        VAR_30 = VAR_29->variables.nelts * sizeof(ngx_http_variable_value_t);

        if (VAR_25 & VAR_1) {

            VAR_21->variables = FUNC_8(VAR_21->pool, VAR_30);
            if (VAR_21->variables == ((void*)0)) {
                return VAR_0;
            }

            FUNC_7(VAR_21->variables, VAR_27->variables, VAR_30);

        } else {



            VAR_21->variables = FUNC_9(VAR_21->pool, VAR_30);
            if (VAR_21->variables == ((void*)0)) {
                return VAR_0;
            }
        }
    }

    return FUNC_5(VAR_21, VAR_26);
}
