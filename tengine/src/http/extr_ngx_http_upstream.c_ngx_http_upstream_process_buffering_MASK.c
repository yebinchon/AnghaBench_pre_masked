
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_9__ {int len; int * data; } ;
struct TYPE_10__ {TYPE_2__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int buffering; TYPE_1__* conf; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_12__ {TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_8__ {int ignore_headers; scalar_t__ change_buffering; } ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_table_elt_t *VAR_3,
    ngx_uint_t VAR_4)
{
    u_char VAR_5, VAR_6, VAR_7;
    ngx_http_upstream_t *VAR_8;

    VAR_8 = VAR_2->upstream;

    if (VAR_8->conf->ignore_headers & VAR_0) {
        return VAR_1;
    }

    if (VAR_8->conf->change_buffering) {

        if (VAR_3->value.len == 2) {
            VAR_5 = FUNC_0(VAR_3->value.data[0]);
            VAR_6 = FUNC_0(VAR_3->value.data[1]);

            if (VAR_5 == 'n' && VAR_6 == 'o') {
                VAR_8->buffering = 0;
            }

        } else if (VAR_3->value.len == 3) {
            VAR_5 = FUNC_0(VAR_3->value.data[0]);
            VAR_6 = FUNC_0(VAR_3->value.data[1]);
            VAR_7 = FUNC_0(VAR_3->value.data[2]);

            if (VAR_5 == 'y' && VAR_6 == 'e' && VAR_7 == 's') {
                VAR_8->buffering = 1;
            }
        }
    }

    return VAR_1;
}
