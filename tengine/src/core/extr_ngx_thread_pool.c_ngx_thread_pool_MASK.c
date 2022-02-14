
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_14__ {size_t threads; int max_queue; TYPE_3__ name; } ;
typedef TYPE_2__ ngx_thread_pool_t ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_16__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_17__ {TYPE_3__ name; } ;
typedef TYPE_5__ ngx_command_t ;
struct TYPE_13__ {size_t nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int) ;
 TYPE_2__* FUNC_3 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_str_t *VAR_7;
    ngx_uint_t VAR_8;
    ngx_thread_pool_t *VAR_9;

    VAR_7 = VAR_4->args->elts;

    VAR_9 = FUNC_3(VAR_4, &VAR_7[1]);

    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_9->threads) {
        FUNC_1(VAR_3, VAR_4, 0,
                           "duplicate thread pool \"%V\"", &VAR_9->name);
        return VAR_0;
    }

    VAR_9->max_queue = 65536;

    for (VAR_8 = 2; VAR_8 < VAR_4->args->nelts; VAR_8++) {

        if (FUNC_2(VAR_7[VAR_8].data, "threads=", 8) == 0) {

            VAR_9->threads = FUNC_0(VAR_7[VAR_8].data + 8, VAR_7[VAR_8].len - 8);

            if (VAR_9->threads == (ngx_uint_t) VAR_2 || VAR_9->threads == 0) {
                FUNC_1(VAR_3, VAR_4, 0,
                                   "invalid threads value \"%V\"", &VAR_7[VAR_8]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_2(VAR_7[VAR_8].data, "max_queue=", 10) == 0) {

            VAR_9->max_queue = FUNC_0(VAR_7[VAR_8].data + 10, VAR_7[VAR_8].len - 10);

            if (VAR_9->max_queue == VAR_2) {
                FUNC_1(VAR_3, VAR_4, 0,
                                   "invalid max_queue value \"%V\"", &VAR_7[VAR_8]);
                return VAR_0;
            }

            continue;
        }
    }

    if (VAR_9->threads == 0) {
        FUNC_1(VAR_3, VAR_4, 0,
                           "\"%V\" must have \"threads\" parameter",
                           &VAR_5->name);
        return VAR_0;
    }

    return VAR_1;
}
