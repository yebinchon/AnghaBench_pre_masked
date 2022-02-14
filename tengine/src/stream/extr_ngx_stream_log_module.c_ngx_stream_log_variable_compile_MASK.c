
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_3__ {scalar_t__ data; int run; int getlen; scalar_t__ len; } ;
typedef TYPE_1__ ngx_stream_log_op_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_8, ngx_stream_log_op_t *VAR_9,
    ngx_str_t *VAR_10, ngx_uint_t VAR_11)
{
    ngx_int_t VAR_12;

    VAR_12 = FUNC_0(VAR_8, VAR_10);
    if (VAR_12 == VAR_0) {
        return VAR_0;
    }

    VAR_9->len = 0;

    switch (VAR_11) {
    case 129:
        VAR_9->getlen = VAR_3;
        VAR_9->run = VAR_2;
        break;

    case 128:
        VAR_9->getlen = VAR_5;
        VAR_9->run = VAR_4;
        break;

    default:
        VAR_9->getlen = VAR_7;
        VAR_9->run = VAR_6;
    }

    VAR_9->data = VAR_12;

    return VAR_1;
}
