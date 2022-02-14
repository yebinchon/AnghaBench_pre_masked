
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_13__ {size_t next; int handler; int checker; } ;
typedef TYPE_4__ ngx_stream_phase_handler_t ;
typedef int ngx_stream_phase_handler_pt ;
typedef int ngx_stream_handler_pt ;
struct TYPE_10__ {TYPE_4__* handlers; } ;
struct TYPE_14__ {TYPE_3__* phases; TYPE_1__ phase_engine; } ;
typedef TYPE_5__ ngx_stream_core_main_conf_t ;
typedef size_t ngx_int_t ;
struct TYPE_15__ {int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_11__ {size_t nelts; int * elts; } ;
struct TYPE_12__ {TYPE_2__ handlers; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

 size_t VAR_2 ;

 TYPE_4__* FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_6,
    ngx_stream_core_main_conf_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_uint_t VAR_9, VAR_10;
    ngx_stream_handler_pt *VAR_11;
    ngx_stream_phase_handler_t *VAR_12;
    ngx_stream_phase_handler_pt VAR_13;

    VAR_10 = 1 ;

    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
        VAR_10 += VAR_7->phases[VAR_9].handlers.nelts;
    }

    VAR_12 = FUNC_0(VAR_6->pool,
                     VAR_10 * sizeof(ngx_stream_phase_handler_t) + sizeof(void *));
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->phase_engine.handlers = VAR_12;
    VAR_10 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
        VAR_11 = VAR_7->phases[VAR_9].handlers.elts;

        switch (VAR_9) {

        case 128:
            VAR_13 = VAR_5;
            break;

        case 129:
            VAR_12->checker = VAR_3;
            VAR_10++;
            VAR_12++;

            continue;

        default:
            VAR_13 = VAR_4;
        }

        VAR_10 += VAR_7->phases[VAR_9].handlers.nelts;

        for (VAR_8 = VAR_7->phases[VAR_9].handlers.nelts - 1; VAR_8 >= 0; VAR_8--) {
            VAR_12->checker = VAR_13;
            VAR_12->handler = VAR_11[VAR_8];
            VAR_12->next = VAR_10;
            VAR_12++;
        }
    }

    return VAR_1;
}
