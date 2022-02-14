
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_15__ {TYPE_6__* conf_file; TYPE_1__* cycle; } ;
typedef TYPE_5__ ngx_conf_t ;
struct TYPE_12__ {int * data; } ;
struct TYPE_13__ {TYPE_2__ name; int fd; } ;
struct TYPE_16__ {scalar_t__ start; scalar_t__ pos; scalar_t__ last; scalar_t__ end; int temporary; struct TYPE_16__* buffer; scalar_t__ line; TYPE_3__ file; } ;
typedef TYPE_6__ ngx_conf_file_t ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_11__ {TYPE_4__ conf_param; } ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_6__*,int) ;

char *
FUNC_2(ngx_conf_t *VAR_2)
{
    char *VAR_3;
    ngx_str_t *VAR_4;
    ngx_buf_t VAR_5;
    ngx_conf_file_t VAR_6;

    VAR_4 = &VAR_2->cycle->conf_param;

    if (VAR_4->len == 0) {
        return VAR_0;
    }

    FUNC_1(&VAR_6, sizeof(ngx_conf_file_t));

    FUNC_1(&VAR_5, sizeof(ngx_buf_t));

    VAR_5.start = VAR_4->data;
    VAR_5.pos = VAR_4->data;
    VAR_5.last = VAR_4->data + VAR_4->len;
    VAR_5.end = VAR_5.last;
    VAR_5.temporary = 1;

    VAR_6.file.fd = VAR_1;
    VAR_6.file.name.data = ((void*)0);
    VAR_6.line = 0;

    VAR_2->conf_file = &VAR_6;
    VAR_2->conf_file->buffer = &VAR_5;

    VAR_3 = FUNC_0(VAR_2, ((void*)0));

    VAR_2->conf_file = ((void*)0);

    return VAR_3;
}
