
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_12__ {int offset; } ;
typedef TYPE_4__ ngx_command_t ;
struct TYPE_13__ {scalar_t__ num; size_t size; } ;
typedef TYPE_5__ ngx_bufs_t ;
struct TYPE_9__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 size_t FUNC_1 (TYPE_2__*) ;

char *
FUNC_2(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    char *VAR_5 = VAR_4;

    ngx_str_t *VAR_6;
    ngx_bufs_t *VAR_7;


    VAR_7 = (ngx_bufs_t *) (VAR_5 + VAR_3->offset);
    if (VAR_7->num) {
        return "is duplicate";
    }

    VAR_6 = VAR_2->args->elts;

    VAR_7->num = FUNC_0(VAR_6[1].data, VAR_6[1].len);
    if (VAR_7->num == VAR_1 || VAR_7->num == 0) {
        return "invalid value";
    }

    VAR_7->size = FUNC_1(&VAR_6[2]);
    if (VAR_7->size == (size_t) VAR_1 || VAR_7->size == 0) {
        return "invalid value";
    }

    return VAR_0;
}
