
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {int data; int get_handler; int flags; TYPE_4__ name; } ;
typedef TYPE_1__ ngx_http_variable_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,TYPE_4__*,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_3)
{
    ngx_http_variable_t *VAR_4, *VAR_5;

    for (VAR_5 = VAR_2; VAR_5->name.len; VAR_5++) {

        VAR_4 = FUNC_0(VAR_3, &VAR_5->name, VAR_5->flags);
        if (VAR_4 == ((void*)0)) {
            return VAR_0;
        }

        VAR_4->get_handler = VAR_5->get_handler;
        VAR_4->data = VAR_5->data;
    }

    return VAR_1;
}
