
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_5__ {int method; int method_name; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_4__ {scalar_t__ fd; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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

int
FUNC_0(ngx_http_request_t *VAR_18, int VAR_19)
{
    if (VAR_18->connection->fd == (ngx_socket_t) -1) {
        return VAR_1;
    }

    switch (VAR_19) {
        case 140:
            VAR_18->method_name = VAR_5;
            break;

        case 133:
            VAR_18->method_name = VAR_12;
            break;

        case 130:
            VAR_18->method_name = VAR_15;
            break;

        case 139:
            VAR_18->method_name = VAR_6;
            break;

        case 141:
            VAR_18->method_name = VAR_4;
            break;

        case 135:
            VAR_18->method_name = VAR_10;
            break;

        case 137:
            VAR_18->method_name = VAR_8;
            break;

        case 142:
            VAR_18->method_name = VAR_3;
            break;

        case 136:
            VAR_18->method_name = VAR_9;
            break;

        case 132:
            VAR_18->method_name = VAR_13;
            break;

        case 131:
            VAR_18->method_name = VAR_14;
            break;

        case 138:
            VAR_18->method_name = VAR_7;
            break;

        case 128:
            VAR_18->method_name = VAR_17;
            break;

        case 134:
            VAR_18->method_name = VAR_11;
            break;

        case 129:
            VAR_18->method_name = VAR_16;
            break;

        default:
            return VAR_0;
    }

    VAR_18->method = VAR_19;
    return VAR_2;
}
