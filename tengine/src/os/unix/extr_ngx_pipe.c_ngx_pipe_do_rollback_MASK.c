
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct flock {scalar_t__ l_len; scalar_t__ l_start; int l_whence; int l_type; } ;
struct TYPE_7__ {int interval; scalar_t__ log_max_size; int backup_num; int logname; int * backup; int time_now; } ;
typedef TYPE_1__ ngx_pipe_rollback_conf_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int st_ctime; scalar_t__ st_size; } ;
typedef TYPE_2__ ngx_file_info_t ;
struct TYPE_9__ {int log; } ;
typedef TYPE_3__ ngx_cycle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,struct flock*) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*,int ,...) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;

void
FUNC_7(ngx_cycle_t *VAR_9, ngx_pipe_rollback_conf_t *VAR_10)
{
    int VAR_11;
    struct flock VAR_12;
    int VAR_13;
    ngx_int_t VAR_14;
    ngx_file_info_t VAR_15;
    ngx_int_t VAR_16 = 0;

    VAR_11 = FUNC_4(VAR_10->logname, VAR_3, VAR_2, 0);
    if (VAR_11 < 0) {

        return;
    }

    VAR_12.l_type = VAR_1;
    VAR_12.l_whence = VAR_7;
    VAR_12.l_start = 0;
    VAR_12.l_len = 0;

    VAR_13 = FUNC_0(VAR_11, VAR_0, &VAR_12);
    if (VAR_13 < 0) {
        FUNC_1(VAR_11);

        return;
    }


    if (VAR_10->interval >= 0) {
        if (FUNC_2(VAR_10->backup[0], &VAR_15) == -1) {
            VAR_16 = 1;
            FUNC_3(VAR_5, VAR_9->log, 0,
                          "need rollback [%s]: cannot open backup", VAR_10->logname);

        } else if (VAR_15.st_ctime / VAR_10->interval < FUNC_6() / VAR_10->interval) {
            VAR_16 = 1;
            FUNC_3(VAR_5, VAR_9->log, 0,
                          "need rollback [%s]: time on [%d] [%d]",
                          VAR_10->logname, VAR_15.st_ctime, VAR_10->time_now);

        } else {
            FUNC_3(VAR_5, VAR_9->log, 0,
                          "no need rollback [%s]: time not on [%d] [%d]",
                          VAR_10->logname, VAR_15.st_ctime, VAR_10->time_now);
        }

    } else {
        FUNC_3(VAR_5, VAR_9->log, 0,
                      "no need check rollback [%s] time: no interval", VAR_10->logname);
    }


    if (VAR_10->log_max_size > 0) {
        if (FUNC_2(VAR_10->logname, &VAR_15) == 0 && (VAR_15.st_size >= VAR_10->log_max_size)) {
            VAR_16 = 1;
            FUNC_3(VAR_5, VAR_9->log, 0,
                          "need rollback [%s]: size on [%d]", VAR_10->logname, VAR_15.st_size);

        } else {
            FUNC_3(VAR_5, VAR_9->log, 0,
                          "no need rollback [%s]: size not on", VAR_10->logname);
        }

    } else {
        FUNC_3(VAR_5, VAR_9->log, 0,
                      "no need check rollback [%s] size: no max size", VAR_10->logname);
    }

    if (VAR_16) {
        for (VAR_14 = 1; VAR_14 < VAR_10->backup_num; VAR_14++) {
            FUNC_5(VAR_10->backup[VAR_10->backup_num - VAR_14 - 1],
                   VAR_10->backup[VAR_10->backup_num - VAR_14]);
        }
        if (FUNC_5(VAR_10->logname, VAR_10->backup[0]) < 0) {
            FUNC_3(VAR_4, VAR_9->log, VAR_8,
                          "rname %s to %s failed", VAR_10->logname, VAR_10->backup[0]);
        } else {
            FUNC_3(VAR_6, VAR_9->log, 0,
                          "rollback [%s] success", VAR_10->logname);
        }
    }
    FUNC_1(VAR_11);
}
