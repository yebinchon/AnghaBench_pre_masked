
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pollfd {int dummy; } ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {int connection_n; int log; TYPE_1__* old_cycle; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_7__ {int actions; } ;
struct TYPE_5__ {int connection_n; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pollfd* VAR_5 ;
 int VAR_6 ;
 struct pollfd* FUNC_0 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct pollfd*) ;
 int VAR_9 ;
 int FUNC_2 (struct pollfd*,struct pollfd*,int) ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_cycle_t *VAR_13, ngx_msec_t VAR_14)
{
    struct pollfd *VAR_15;

    if (VAR_5 == ((void*)0)) {
        VAR_6 = 0;
    }

    if (VAR_12 >= VAR_2
        || VAR_13->old_cycle == ((void*)0)
        || VAR_13->old_cycle->connection_n < VAR_13->connection_n)
    {
        VAR_15 = FUNC_0(sizeof(struct pollfd) * VAR_13->connection_n,
                         VAR_13->log);
        if (VAR_15 == ((void*)0)) {
            return VAR_0;
        }

        if (VAR_5) {
            FUNC_2(VAR_15, VAR_5, sizeof(struct pollfd) * VAR_6);
            FUNC_1(VAR_5);
        }

        VAR_5 = VAR_15;
    }

    VAR_9 = VAR_10;

    VAR_7 = VAR_11.actions;

    VAR_8 = VAR_4|VAR_3;

    return VAR_1;
}
