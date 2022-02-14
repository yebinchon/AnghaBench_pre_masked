
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_10__ {int len; int valid; scalar_t__ not_found; scalar_t__ no_cacheable; int * data; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {size_t a; } ;
typedef TYPE_4__ ngx_http_fake_merge_main_conf_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_4, ngx_http_variable_value_t *VAR_5,
    uintptr_t VAR_6)
{
    ngx_http_fake_merge_main_conf_t * VAR_7;
    static char *VAR_8[] = {"0", "1"};

    VAR_7 = FUNC_0(VAR_4, VAR_3);
    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_4->connection->log, 0,
                      "get module main conf failed if fake_var");
        return VAR_0;
    }

    VAR_5->len = 1;
    VAR_5->data = (u_char *) VAR_8[VAR_7->a];
    VAR_5->valid = 1;
    VAR_5->no_cacheable = 0;
    VAR_5->not_found = 0;

    return VAR_2;
}
