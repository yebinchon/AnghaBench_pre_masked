
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_ctime; } ;
struct flock {scalar_t__ l_len; scalar_t__ l_start; int l_whence; int l_type; } ;
struct TYPE_3__ {int last_open_time; int time_now; int interval; int * backup; int logname; } ;
typedef TYPE_1__ ngx_pipe_rollback_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct flock*) ;
 int FUNC_2 (int ,struct stat*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;

void FUNC_5(ngx_pipe_rollback_conf_t *VAR_5)
{
    int VAR_6;
    struct flock VAR_7;
    int VAR_8;

    struct stat VAR_9;

    VAR_6 = FUNC_3(VAR_5->logname, VAR_3, VAR_2, 0);
    if (VAR_6 < 0) {

        VAR_5->last_open_time = VAR_5->time_now;
        return;
    }

    VAR_7.l_type = VAR_1;
    VAR_7.l_whence = VAR_4;
    VAR_7.l_start = 0;
    VAR_7.l_len = 0;

    VAR_8 = FUNC_1(VAR_6, VAR_0, &VAR_7);
    if (VAR_8 < 0) {
        FUNC_0(VAR_6);

        VAR_5->last_open_time = VAR_5->time_now;
        return;
    }


    if (VAR_5->interval > 0) {
        if (FUNC_2(VAR_5->backup[0], &VAR_9) == -1) {

            VAR_5->last_open_time = 1;
        } else if (VAR_9.st_ctime / VAR_5->interval < FUNC_4() / VAR_5->interval) {

            VAR_5->last_open_time = 1;
        } else {

            VAR_5->last_open_time = VAR_5->time_now;
        }
    } else {
        VAR_5->last_open_time = VAR_5->time_now;
    }

    FUNC_0(VAR_6);
}
