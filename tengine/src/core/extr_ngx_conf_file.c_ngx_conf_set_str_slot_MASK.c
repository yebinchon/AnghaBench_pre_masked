
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_13__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_14__ {char* (* post_handler ) (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;} ;
typedef TYPE_4__ ngx_conf_post_t ;
struct TYPE_15__ {int offset; TYPE_4__* post; } ;
typedef TYPE_5__ ngx_command_t ;
struct TYPE_11__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* FUNC_0 (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;

char *
FUNC_1(ngx_conf_t *VAR_1, ngx_command_t *VAR_2, void *VAR_3)
{
    char *VAR_4 = VAR_3;

    ngx_str_t *VAR_5, *VAR_6;
    ngx_conf_post_t *VAR_7;

    VAR_5 = (ngx_str_t *) (VAR_4 + VAR_2->offset);

    if (VAR_5->data) {
        return "is duplicate";
    }

    VAR_6 = VAR_1->args->elts;

    *VAR_5 = VAR_6[1];

    if (VAR_2->post) {
        VAR_7 = VAR_2->post;
        return VAR_7->post_handler(VAR_1, VAR_7, VAR_5);
    }

    return VAR_0;
}
