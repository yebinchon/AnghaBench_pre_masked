
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {double load; scalar_t__ mode; double cpuusage; double swap; int free; double rt; TYPE_1__* rt_ring; int log_level; int rt_action; int interval; int free_action; int swap_action; int cpuusage_action; int load_action; int enable; } ;
typedef TYPE_4__ ngx_http_sysguard_conf_t ;
struct TYPE_18__ {TYPE_3__* connection; int uri; TYPE_2__* main; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_16__ {int log; } ;
struct TYPE_15__ {int sysguard_set; } ;
struct TYPE_14__ {scalar_t__ cached_rt_exptime; double cached_rt; } ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,int ) ;
 double VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 double VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 double VAR_12 ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int VAR_13 ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (int ,int ,int ,char*,double,double) ;
 int FUNC_7 (int ,int ,int ,char*,int,double,int *,int *) ;
 int FUNC_8 (int ,int ,int ,char*,double,double) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_14)
{
    ngx_http_sysguard_conf_t *VAR_15;
    ngx_int_t VAR_16 = 0, VAR_17 = 0,
                               VAR_18 = 0, VAR_19 = 0,
                               VAR_20 = 0;
    ngx_str_t *VAR_21 = ((void*)0);

    if (VAR_14->main->sysguard_set) {
        return VAR_2;
    }

    VAR_15 = FUNC_0(VAR_14, VAR_13);

    if (!VAR_15->enable) {
        return VAR_2;
    }

    VAR_14->main->sysguard_set = 1;



    if (VAR_15->load != VAR_0) {

        if (VAR_10 < FUNC_9()) {
            FUNC_3(VAR_14, VAR_15->interval);
        }

        FUNC_7(VAR_5, VAR_14->connection->log, 0,
                       "http sysguard handler load: %1.3f %1.3f %V %V",
                       VAR_9 * 1.0 / 1000,
                       VAR_15->load * 1.0 / 1000,
                       &VAR_14->uri,
                       &VAR_15->load_action);

        if (VAR_9 > VAR_15->load) {

            if (VAR_15->mode == VAR_4) {

                FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                              "sysguard load limited, current:%1.3f conf:%1.3f",
                              VAR_9 * 1.0 / 1000,
                              VAR_15->load * 1.0 / 1000);

                return FUNC_1(VAR_14, &VAR_15->load_action);
            } else {
                VAR_21 = &VAR_15->load_action;
                VAR_16 = 1;
            }
        } else {
            if (VAR_15->mode == VAR_3) {
                goto out;
            }
        }
    }



    if (VAR_15->cpuusage != VAR_0) {

        if (VAR_7 < FUNC_9()) {
            FUNC_2(VAR_14, VAR_15->interval);
        }

        FUNC_7(VAR_5, VAR_14->connection->log, 0,
                       "http sysguard handler cpuusage: %d %d %V %V",
                       VAR_6 ,
                       VAR_15->cpuusage,
                       &VAR_14->uri,
                       &VAR_15->cpuusage_action);

        if (VAR_6 > VAR_15->cpuusage) {

            if (VAR_15->mode == VAR_4) {

                FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                              "sysguard cpuusage limited, current:%d conf:%d",
                              VAR_6,
                              VAR_15->cpuusage);

                return FUNC_1(VAR_14, &VAR_15->cpuusage_action);

            } else {
                VAR_21 = &VAR_15->cpuusage_action;
                VAR_20 = 1;
            }

        } else {
            if (VAR_15->mode == VAR_3) {
                goto out;
            }
        }
    }



    if (VAR_15->swap != VAR_0) {

        if (VAR_11 < FUNC_9()) {
            FUNC_4(VAR_14, VAR_15->interval);
        }

        FUNC_7(VAR_5, VAR_14->connection->log, 0,
                       "http sysguard handler swap: %i %i %V %V",
                       VAR_12,
                       VAR_15->swap,
                       &VAR_14->uri,
                       &VAR_15->swap_action);

        if (VAR_12 > VAR_15->swap) {

            if (VAR_15->mode == VAR_4) {

                FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                              "sysguard swap limited, current:%i conf:%i",
                              VAR_12,
                              VAR_15->swap);

                return FUNC_1(VAR_14, &VAR_15->swap_action);
            } else {
                VAR_21 = &VAR_15->swap_action;
                VAR_17 = 1;
            }
        } else {
            if (VAR_15->mode == VAR_3) {
                goto out;
            }
        }
    }



    if (VAR_15->free != VAR_1) {

        if (VAR_11 < FUNC_9()) {
            FUNC_4(VAR_14, VAR_15->interval);
        }

        if (VAR_8 != VAR_1) {

            FUNC_7(VAR_5, VAR_14->connection->log, 0,
                           "http sysguard handler free: %uz %uz %V %V",
                           VAR_8,
                           VAR_15->free,
                           &VAR_14->uri,
                           &VAR_15->free_action);

            if (VAR_8 < VAR_15->free) {

                if (VAR_15->mode == VAR_4) {

                    FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                                  "sysguard free limited, "
                                  "current:%uzM conf:%uzM",
                                  VAR_8 / 1024 / 1024,
                                  VAR_15->free / 1024 / 1024);

                    return FUNC_1(VAR_14, &VAR_15->free_action);
                } else {
                    VAR_21 = &VAR_15->free_action;
                    VAR_18 = 1;
                }
            } else {
                if (VAR_15->mode == VAR_3) {
                    goto out;
                }
            }
        }
    }



    if (VAR_15->rt != VAR_0) {

        if (VAR_15->rt_ring->cached_rt_exptime < FUNC_9()) {
            FUNC_5(VAR_14, VAR_15->interval);
        }

        FUNC_6(VAR_5, VAR_14->connection->log, 0,
                       "http sysguard handler rt: %1.3f %1.3f",
                       VAR_15->rt_ring->cached_rt * 1.0 / 1000,
                       VAR_15->rt * 1.0 / 1000);

        if (VAR_15->rt_ring->cached_rt > VAR_15->rt) {

            if (VAR_15->mode == VAR_4) {

                FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                              "sysguard rt limited, current:%1.3f conf:%1.3f",
                              VAR_15->rt_ring->cached_rt * 1.0 / 1000,
                              VAR_15->rt * 1.0 / 1000);

                return FUNC_1(VAR_14, &VAR_15->rt_action);
            } else {
                VAR_21 = &VAR_15->rt_action;
                VAR_19 = 1;
            }
        } else {
            if (VAR_15->mode == VAR_3) {
                goto out;
            }
        }
    }

    if (VAR_15->mode == VAR_3 && VAR_21) {

        if (VAR_16) {
            FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                          "sysguard load limited, current:%1.3f conf:%1.3f",
                          VAR_9 * 1.0 / 1000,
                          VAR_15->load * 1.0 / 1000);
        }

        if (VAR_20) {
            FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                          "sysguard cpu limited, current:%d conf:%1d",
                          VAR_6,
                          VAR_15->cpuusage);
        }

        if (VAR_17) {
            FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                          "sysguard swap limited, current:%i conf:%i",
                          VAR_12,
                          VAR_15->swap);
        }

        if (VAR_18) {
            FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                          "sysguard free limited, current:%uzM conf:%uzM",
                          VAR_8 / 1024 / 1024,
                          VAR_15->free / 1024 / 1024);
        }

        if (VAR_19) {
            FUNC_8(VAR_15->log_level, VAR_14->connection->log, 0,
                          "sysguard rt limited, current:%1.3f conf:%1.3f",
                          VAR_15->rt_ring->cached_rt * 1.0 / 1000,
                          VAR_15->rt * 1.0 / 1000);
        }

        return FUNC_1(VAR_14, VAR_21);
    }

out:
    return VAR_2;
}
