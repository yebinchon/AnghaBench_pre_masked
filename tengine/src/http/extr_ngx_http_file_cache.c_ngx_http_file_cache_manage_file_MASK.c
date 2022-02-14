
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* data; } ;
typedef TYPE_1__ ngx_tree_ctx_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_msec_int_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {scalar_t__ files; scalar_t__ loader_files; scalar_t__ loader_threshold; scalar_t__ last; } ;
typedef TYPE_2__ ngx_http_file_cache_t ;
struct TYPE_10__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 TYPE_7__* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_tree_ctx_t *VAR_7, ngx_str_t *VAR_8)
{
    ngx_msec_t VAR_9;
    ngx_http_file_cache_t *VAR_10;

    VAR_10 = VAR_7->data;

    if (FUNC_1(VAR_7, VAR_8) != VAR_2) {
        (void) FUNC_2(VAR_7, VAR_8);
    }

    if (++VAR_10->files >= VAR_10->loader_files) {
        FUNC_3(VAR_10);

    } else {
        FUNC_5();

        VAR_9 = FUNC_0((ngx_msec_int_t) (VAR_3 - VAR_10->last));

        FUNC_4(VAR_1, VAR_4->log, 0,
                       "http file cache loader time elapsed: %M", VAR_9);

        if (VAR_9 >= VAR_10->loader_threshold) {
            FUNC_3(VAR_10);
        }
    }

    return (VAR_5 || VAR_6) ? VAR_0 : VAR_2;
}
