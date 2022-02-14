
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_9__ {scalar_t__ loader; scalar_t__ manager; } ;
typedef TYPE_2__ ngx_path_t ;
typedef int ngx_cycle_t ;
struct TYPE_10__ {size_t slot; int fd; int pid; void* command; } ;
typedef TYPE_3__ ngx_channel_t ;
struct TYPE_8__ {size_t nelts; TYPE_2__** elts; } ;
struct TYPE_12__ {TYPE_1__ paths; } ;
struct TYPE_11__ {int * channel; int pid; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__* VAR_8 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 size_t VAR_9 ;
 TYPE_4__* VAR_10 ;
 int FUNC_2 (int *,int ,int *,char*,int ) ;

__attribute__((used)) static void
FUNC_3(ngx_cycle_t *VAR_11, ngx_uint_t VAR_12)
{
    ngx_uint_t VAR_13, VAR_14, VAR_15;
    ngx_path_t **VAR_16;
    ngx_channel_t VAR_17;

    VAR_14 = 0;
    VAR_15 = 0;

    VAR_16 = VAR_8->paths.elts;
    for (VAR_13 = 0; VAR_13 < VAR_8->paths.nelts; VAR_13++) {

        if (VAR_16[VAR_13]->manager) {
            VAR_14 = 1;
        }

        if (VAR_16[VAR_13]->loader) {
            VAR_15 = 1;
        }
    }

    if (VAR_14 == 0) {
        return;
    }

    FUNC_2(VAR_11, VAR_7,
                      &VAR_6, "cache manager process",
                      VAR_12 ? VAR_1 : VAR_4);

    FUNC_0(&VAR_17, sizeof(ngx_channel_t));

    VAR_17.command = VAR_0;
    VAR_17.pid = VAR_10[VAR_9].pid;
    VAR_17.slot = VAR_9;
    VAR_17.fd = VAR_10[VAR_9].channel[0];

    FUNC_1(VAR_11, &VAR_17);

    if (VAR_15 == 0) {
        return;
    }

    FUNC_2(VAR_11, VAR_7,
                      &VAR_5, "cache loader process",
                      VAR_12 ? VAR_2 : VAR_3);

    VAR_17.command = VAR_0;
    VAR_17.pid = VAR_10[VAR_9].pid;
    VAR_17.slot = VAR_9;
    VAR_17.fd = VAR_10[VAR_9].channel[0];

    FUNC_1(VAR_11, &VAR_17);
}
