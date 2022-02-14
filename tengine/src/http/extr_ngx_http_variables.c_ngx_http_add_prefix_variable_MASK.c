
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef size_t ngx_uint_t ;
struct TYPE_17__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_16__ {scalar_t__ len; int * data; } ;
struct TYPE_18__ {int flags; scalar_t__ index; scalar_t__ data; int * get_handler; int * set_handler; TYPE_1__ name; } ;
typedef TYPE_3__ ngx_http_variable_t ;
struct TYPE_15__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_19__ {TYPE_14__ prefix_variables; } ;
typedef TYPE_4__ ngx_http_core_main_conf_t ;
struct TYPE_20__ {int pool; } ;
typedef TYPE_5__ ngx_conf_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_14__*) ;
 int FUNC_1 (int ,TYPE_5__*,int ,char*,TYPE_2__*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_3 ;
 int * FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *,scalar_t__) ;

__attribute__((used)) static ngx_http_variable_t *
FUNC_6(ngx_conf_t *VAR_4, ngx_str_t *VAR_5, ngx_uint_t VAR_6)
{
    ngx_uint_t VAR_7;
    ngx_http_variable_t *VAR_8;
    ngx_http_core_main_conf_t *VAR_9;

    VAR_9 = FUNC_2(VAR_4, VAR_3);

    VAR_8 = VAR_9->prefix_variables.elts;
    for (VAR_7 = 0; VAR_7 < VAR_9->prefix_variables.nelts; VAR_7++) {
        if (VAR_5->len != VAR_8[VAR_7].name.len
            || FUNC_5(VAR_5->data, VAR_8[VAR_7].name.data, VAR_5->len) != 0)
        {
            continue;
        }

        VAR_8 = &VAR_8[VAR_7];

        if (!(VAR_8->flags & VAR_0)) {
            FUNC_1(VAR_2, VAR_4, 0,
                               "the duplicate \"%V\" variable", VAR_5);
            return ((void*)0);
        }

        if (!(VAR_6 & VAR_1)) {
            VAR_8->flags &= ~VAR_1;
        }

        return VAR_8;
    }

    VAR_8 = FUNC_0(&VAR_9->prefix_variables);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8->name.len = VAR_5->len;
    VAR_8->name.data = FUNC_3(VAR_4->pool, VAR_5->len);
    if (VAR_8->name.data == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_4(VAR_8->name.data, VAR_5->data, VAR_5->len);

    VAR_8->set_handler = ((void*)0);
    VAR_8->get_handler = ((void*)0);
    VAR_8->data = 0;
    VAR_8->flags = VAR_6;
    VAR_8->index = 0;

    return VAR_8;
}
