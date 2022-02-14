
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_34__ {int len; } ;
struct TYPE_32__ {size_t len; } ;
struct TYPE_33__ {size_t hash; TYPE_7__ value; int lowcase_key; TYPE_5__ key; } ;
typedef TYPE_6__ ngx_table_elt_t ;
typedef TYPE_7__ ngx_str_t ;
struct TYPE_35__ {size_t nelts; TYPE_6__* elts; struct TYPE_35__* next; } ;
typedef TYPE_8__ ngx_list_part_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_29__ {TYPE_8__ part; } ;
struct TYPE_26__ {int * elts; } ;
struct TYPE_30__ {TYPE_2__ headers; TYPE_12__ x_forwarded_for; TYPE_1__* x_real_ip; } ;
struct TYPE_36__ {TYPE_11__* connection; TYPE_3__ headers_in; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_31__ {size_t len; int * data; } ;
struct TYPE_24__ {int type; size_t hash; int recursive; int * from; TYPE_4__ header; } ;
typedef TYPE_10__ ngx_http_realip_loc_conf_t ;
typedef int ngx_http_realip_ctx_t ;
struct TYPE_25__ {int proxy_protocol_port; int socklen; int sockaddr; TYPE_7__ proxy_protocol_addr; } ;
typedef TYPE_11__ ngx_connection_t ;
typedef TYPE_12__ ngx_array_t ;
struct TYPE_27__ {int sockaddr; int socklen; } ;
typedef TYPE_13__ ngx_addr_t ;
struct TYPE_28__ {TYPE_7__ value; } ;


 scalar_t__ VAR_0 ;



 scalar_t__ FUNC_0 (TYPE_9__*,TYPE_13__*,TYPE_12__*,TYPE_7__*,int *,int ) ;
 TYPE_10__* FUNC_1 (TYPE_9__*,int ) ;
 int * FUNC_2 (TYPE_9__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_13__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_2)
{
    u_char *VAR_3;
    size_t VAR_4;
    ngx_str_t *VAR_5;
    ngx_uint_t VAR_6, VAR_7;
    ngx_addr_t VAR_8;
    ngx_array_t *VAR_9;
    ngx_list_part_t *VAR_10;
    ngx_table_elt_t *VAR_11;
    ngx_connection_t *VAR_12;
    ngx_http_realip_ctx_t *VAR_13;
    ngx_http_realip_loc_conf_t *VAR_14;

    VAR_14 = FUNC_1(VAR_2, VAR_1);

    if (VAR_14->from == ((void*)0)) {
        return VAR_0;
    }

    VAR_13 = FUNC_2(VAR_2);

    if (VAR_13) {
        return VAR_0;
    }

    switch (VAR_14->type) {

    case 128:

        if (VAR_2->headers_in.x_real_ip == ((void*)0)) {
            return VAR_0;
        }

        VAR_5 = &VAR_2->headers_in.x_real_ip->value;
        VAR_9 = ((void*)0);

        break;

    case 129:

        VAR_9 = &VAR_2->headers_in.x_forwarded_for;

        if (VAR_9->elts == ((void*)0)) {
            return VAR_0;
        }

        VAR_5 = ((void*)0);

        break;

    case 130:

        VAR_5 = &VAR_2->connection->proxy_protocol_addr;

        if (VAR_5->len == 0) {
            return VAR_0;
        }

        VAR_9 = ((void*)0);

        break;

    default:

        VAR_10 = &VAR_2->headers_in.headers.part;
        VAR_11 = VAR_10->elts;

        VAR_7 = VAR_14->hash;
        VAR_4 = VAR_14->header.len;
        VAR_3 = VAR_14->header.data;

        for (VAR_6 = 0; ; VAR_6++) {

            if (VAR_6 >= VAR_10->nelts) {
                if (VAR_10->next == ((void*)0)) {
                    break;
                }

                VAR_10 = VAR_10->next;
                VAR_11 = VAR_10->elts;
                VAR_6 = 0;
            }

            if (VAR_7 == VAR_11[VAR_6].hash
                && VAR_4 == VAR_11[VAR_6].key.len
                && FUNC_5(VAR_3, VAR_11[VAR_6].lowcase_key, VAR_4) == 0)
            {
                VAR_5 = &VAR_11[VAR_6].value;
                VAR_9 = ((void*)0);

                goto found;
            }
        }

        return VAR_0;
    }

found:

    VAR_12 = VAR_2->connection;

    VAR_8.sockaddr = VAR_12->sockaddr;
    VAR_8.socklen = VAR_12->socklen;


    if (FUNC_0(VAR_2, &VAR_8, VAR_9, VAR_5, VAR_14->from,
                                    VAR_14->recursive)
        != VAR_0)
    {
        if (VAR_14->type == 130) {
            FUNC_4(VAR_8.sockaddr, VAR_12->proxy_protocol_port);
        }

        return FUNC_3(VAR_2, &VAR_8);
    }

    return VAR_0;
}
