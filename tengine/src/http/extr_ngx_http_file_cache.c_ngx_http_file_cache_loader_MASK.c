
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int log; scalar_t__ alloc; TYPE_4__* data; int spec_handler; int post_tree_handler; int pre_tree_handler; int file_handler; int * init_handler; } ;
typedef TYPE_3__ ngx_tree_ctx_t ;
struct TYPE_10__ {double bsize; TYPE_2__* sh; TYPE_1__* path; scalar_t__ files; int last; } ;
typedef TYPE_4__ ngx_http_file_cache_t ;
struct TYPE_11__ {int log; } ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ loading; scalar_t__ cold; } ;
struct TYPE_7__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int *,double,double) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_10)
{
    ngx_http_file_cache_t *VAR_11 = VAR_10;

    ngx_tree_ctx_t VAR_12;

    if (!VAR_11->sh->cold || VAR_11->sh->loading) {
        return;
    }

    if (!FUNC_0(&VAR_11->sh->loading, 0, VAR_9)) {
        return;
    }

    FUNC_1(VAR_1, VAR_4->log, 0,
                   "http file cache loader");

    VAR_12.init_handler = ((void*)0);
    VAR_12.file_handler = VAR_7;
    VAR_12.pre_tree_handler = VAR_6;
    VAR_12.post_tree_handler = VAR_8;
    VAR_12.spec_handler = VAR_5;
    VAR_12.data = VAR_11;
    VAR_12.alloc = 0;
    VAR_12.log = VAR_4->log;

    VAR_11->last = VAR_3;
    VAR_11->files = 0;

    if (FUNC_3(&VAR_12, &VAR_11->path->name) == VAR_0) {
        VAR_11->sh->loading = 0;
        return;
    }

    VAR_11->sh->cold = 0;
    VAR_11->sh->loading = 0;

    FUNC_2(VAR_2, VAR_4->log, 0,
                  "http file cache: %V %.3fM, bsize: %uz",
                  &VAR_11->path->name,
                  ((double) VAR_11->sh->size * VAR_11->bsize) / (1024 * 1024),
                  VAR_11->bsize);
}
