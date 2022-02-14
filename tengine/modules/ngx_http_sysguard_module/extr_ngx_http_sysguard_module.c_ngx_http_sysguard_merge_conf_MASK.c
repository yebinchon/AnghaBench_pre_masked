
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_http_sysguard_rt_ring_t ;
typedef int ngx_http_sysguard_rt_node_t ;
struct TYPE_8__ {scalar_t__ enable; scalar_t__ load; scalar_t__ cpuusage; scalar_t__ swap; scalar_t__ rt; scalar_t__ rt_period; scalar_t__ interval; scalar_t__ cpu_interval; TYPE_2__* rt_ring; int mode; int log_level; int free; int rt_action; int free_action; int swap_action; int cpuusage_action; int load_action; } ;
typedef TYPE_3__ ngx_http_sysguard_conf_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_7__ {int nr_slots; TYPE_1__* slots; scalar_t__ current; } ;
struct TYPE_6__ {int stamp; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_6, void *VAR_7, void *VAR_8)
{
    ngx_http_sysguard_conf_t *VAR_9 = VAR_7;
    ngx_http_sysguard_conf_t *VAR_10 = VAR_8;

    FUNC_3(VAR_10->enable, VAR_9->enable, 0);
    FUNC_1(VAR_10->load_action, VAR_9->load_action, "");
    FUNC_1(VAR_10->cpuusage_action, VAR_9->cpuusage_action, "");
    FUNC_1(VAR_10->swap_action, VAR_9->swap_action, "");
    FUNC_1(VAR_10->free_action, VAR_9->free_action, "");
    FUNC_1(VAR_10->rt_action, VAR_9->rt_action, "");
    FUNC_3(VAR_10->load, VAR_9->load, VAR_2);
    FUNC_3(VAR_10->cpuusage, VAR_9->cpuusage, VAR_2);
    FUNC_3(VAR_10->swap, VAR_9->swap, VAR_2);
    FUNC_0(VAR_10->free, VAR_9->free, VAR_3);
    FUNC_3(VAR_10->rt, VAR_9->rt, VAR_2);
    FUNC_3(VAR_10->rt_period, VAR_9->rt_period, 1);
    FUNC_3(VAR_10->interval, VAR_9->interval, 1);
    FUNC_3(VAR_10->cpu_interval, VAR_9->cpu_interval, 3);
    FUNC_2(VAR_10->log_level, VAR_9->log_level, VAR_5);
    FUNC_2(VAR_10->mode, VAR_9->mode,
                              VAR_4);


    if (VAR_10->rt != VAR_2) {

        VAR_10->rt_ring = FUNC_4(VAR_6->pool,
                                    sizeof(ngx_http_sysguard_rt_ring_t));
        if (VAR_10->rt_ring == ((void*)0)) {
            return VAR_0;
        }

        VAR_10->rt_ring->slots = FUNC_4(VAR_6->pool,
                         sizeof(ngx_http_sysguard_rt_node_t) * VAR_10->rt_period);
        if (VAR_10->rt_ring->slots == ((void*)0)) {
            return VAR_0;
        }

        VAR_10->rt_ring->nr_slots = VAR_10->rt_period;
        VAR_10->rt_ring->current = 0;
        VAR_10->rt_ring->slots[0].stamp = FUNC_5();
    }

    return VAR_1;
}
