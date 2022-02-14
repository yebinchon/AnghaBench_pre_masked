
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {int log; int access; TYPE_4__* data; } ;
typedef TYPE_2__ ngx_tree_ctx_t ;
struct TYPE_9__ {size_t len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {size_t len; int data; } ;
struct TYPE_10__ {size_t len; TYPE_1__ path; } ;
typedef TYPE_4__ ngx_http_dav_copy_ctx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (size_t,int ) ;
 int * FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_tree_ctx_t *VAR_6, ngx_str_t *VAR_7)
{
    u_char *VAR_8, *VAR_9;
    size_t VAR_10;
    ngx_http_dav_copy_ctx_t *VAR_11;

    FUNC_7(VAR_2, VAR_6->log, 0,
                   "http copy dir: \"%s\"", VAR_7->data);

    VAR_11 = VAR_6->data;

    VAR_10 = VAR_11->path.len + VAR_7->len;

    VAR_9 = FUNC_0(VAR_10 + 1, VAR_6->log);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = FUNC_1(VAR_9, VAR_11->path.data, VAR_11->path.len);
    (void) FUNC_2(VAR_8, VAR_7->data + VAR_11->len, VAR_7->len - VAR_11->len + 1);

    FUNC_7(VAR_2, VAR_6->log, 0,
                   "http copy dir to: \"%s\"", VAR_9);

    if (FUNC_3(VAR_9, FUNC_4(VAR_6->access)) == VAR_1) {
        (void) FUNC_6(VAR_6->log, VAR_5, 0, VAR_4,
                                  VAR_9);
    }

    FUNC_5(VAR_9);

    return VAR_3;
}
