
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef size_t ngx_uint_t ;
struct TYPE_19__ {char* data; int len; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_20__ {int len; scalar_t__* level; int line; int conf_file; TYPE_5__ name; } ;
typedef TYPE_6__ ngx_path_t ;
struct TYPE_21__ {TYPE_4__* args; TYPE_3__* conf_file; int cycle; int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_22__ {int offset; } ;
typedef TYPE_8__ ngx_command_t ;
struct TYPE_18__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_15__ {int data; } ;
struct TYPE_16__ {TYPE_1__ name; } ;
struct TYPE_17__ {int line; TYPE_2__ file; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_7__*,TYPE_6__**) ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,int ) ;
 TYPE_6__* FUNC_3 (int ,int) ;

char *
FUNC_4(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    char *VAR_7 = VAR_6;

    ssize_t VAR_8;
    ngx_str_t *VAR_9;
    ngx_uint_t VAR_10, VAR_11;
    ngx_path_t *VAR_12, **VAR_13;

    VAR_13 = (ngx_path_t **) (VAR_7 + VAR_5->offset);

    if (*VAR_13) {
        return "is duplicate";
    }

    VAR_12 = FUNC_3(VAR_4->pool, sizeof(ngx_path_t));
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9 = VAR_4->args->elts;

    VAR_12->name = VAR_9[1];

    if (VAR_12->name.data[VAR_12->name.len - 1] == '/') {
        VAR_12->name.len--;
    }

    if (FUNC_2(VAR_4->cycle, &VAR_12->name, 0) != VAR_3) {
        return VAR_0;
    }

    VAR_12->conf_file = VAR_4->conf_file->file.name.data;
    VAR_12->line = VAR_4->conf_file->line;

    for (VAR_10 = 0, VAR_11 = 2; VAR_11 < VAR_4->args->nelts; VAR_10++, VAR_11++) {
        VAR_8 = FUNC_1(VAR_9[VAR_11].data, VAR_9[VAR_11].len);
        if (VAR_8 == VAR_2 || VAR_8 == 0) {
            return "invalid value";
        }

        VAR_12->level[VAR_10] = VAR_8;
        VAR_12->len += VAR_8 + 1;
    }

    if (VAR_12->len > 10 + VAR_10) {
        return "invalid value";
    }

    *VAR_13 = VAR_12;

    if (FUNC_0(VAR_4, VAR_13) == VAR_2) {
        return VAR_0;
    }

    return VAR_1;
}
