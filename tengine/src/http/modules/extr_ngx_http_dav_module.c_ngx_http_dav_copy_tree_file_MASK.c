
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {int log; int mtime; int access; int size; TYPE_4__* data; } ;
typedef TYPE_2__ ngx_tree_ctx_t ;
struct TYPE_11__ {size_t len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {size_t len; int data; } ;
struct TYPE_12__ {size_t len; TYPE_1__ path; } ;
typedef TYPE_4__ ngx_http_dav_copy_ctx_t ;
struct TYPE_13__ {int log; int time; int access; scalar_t__ buf_size; int size; } ;
typedef TYPE_5__ ngx_copy_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *,int *,TYPE_5__*) ;
 int * FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_tree_ctx_t *VAR_3, ngx_str_t *VAR_4)
{
    u_char *VAR_5, *VAR_6;
    size_t VAR_7;
    ngx_copy_file_t VAR_8;
    ngx_http_dav_copy_ctx_t *VAR_9;

    FUNC_5(VAR_1, VAR_3->log, 0,
                   "http copy file: \"%s\"", VAR_4->data);

    VAR_9 = VAR_3->data;

    VAR_7 = VAR_9->path.len + VAR_4->len;

    VAR_6 = FUNC_0(VAR_7 + 1, VAR_3->log);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = FUNC_2(VAR_6, VAR_9->path.data, VAR_9->path.len);
    (void) FUNC_3(VAR_5, VAR_4->data + VAR_9->len, VAR_4->len - VAR_9->len + 1);

    FUNC_5(VAR_1, VAR_3->log, 0,
                   "http copy file to: \"%s\"", VAR_6);

    VAR_8.size = VAR_3->size;
    VAR_8.buf_size = 0;
    VAR_8.access = VAR_3->access;
    VAR_8.time = VAR_3->mtime;
    VAR_8.log = VAR_3->log;

    (void) FUNC_1(VAR_4->data, VAR_6, &VAR_8);

    FUNC_4(VAR_6);

    return VAR_2;
}
