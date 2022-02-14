
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_16__ {char* data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_17__ {char* logname; int backup_num; int log_max_size; int interval; char* suitpath; int adjust_time; int adjust_time_raw; int ** backup; int time_now; } ;
typedef TYPE_3__ ngx_pipe_rollback_conf_t ;
struct TYPE_18__ {TYPE_1__* argv; } ;
typedef TYPE_4__ ngx_open_pipe_t ;
typedef size_t ngx_int_t ;
struct TYPE_19__ {int log; int pool; } ;
typedef TYPE_5__ ngx_cycle_t ;
struct TYPE_15__ {int nelts; char** elts; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int **,int ,int) ;
 void* FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_2__*,int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (TYPE_2__*,int) ;
 int * FUNC_7 (int ,size_t) ;
 int FUNC_8 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,size_t,char*,char*,size_t) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;

ngx_int_t
FUNC_15(ngx_cycle_t *VAR_6, ngx_open_pipe_t *VAR_7,
    ngx_pipe_rollback_conf_t *VAR_8)
{
    u_char **VAR_9;
    ngx_uint_t VAR_10;
    ngx_int_t VAR_11;
    size_t VAR_12;
    ngx_str_t VAR_13;
    ngx_str_t VAR_14;
    uint32_t VAR_15;

    if (VAR_7->argv->nelts < 3) {

        return VAR_1;
    }


    VAR_9 = VAR_7->argv->elts;


    VAR_13.data = (u_char *) VAR_9[1];
    VAR_13.len = FUNC_11(VAR_13.data);
    if (FUNC_2(VAR_6, &VAR_13, 0) != VAR_4) {
        FUNC_4(VAR_2, VAR_6->log, VAR_5,
                      "get fullname failed");
        return VAR_1;
    }
    VAR_8->logname = (char *) VAR_13.data;
    VAR_8->backup_num = 1;
    VAR_8->log_max_size = -1;
    VAR_8->interval = -1;
    VAR_8->suitpath = ((void*)0);
    VAR_8->adjust_time = 60;
    VAR_8->adjust_time_raw = 60;
    FUNC_0(VAR_8->backup, 0, sizeof(VAR_8->backup));

    for (VAR_10 = 2; VAR_10 < VAR_7->argv->nelts; VAR_10++) {
        if (VAR_9[VAR_10] == ((void*)0)) {
            break;
        }
        if (FUNC_12((u_char *) "interval=", VAR_9[VAR_10], 9) == 0) {
            VAR_14.data = VAR_9[VAR_10] + 9;
            VAR_14.len = FUNC_11((char *) VAR_9[VAR_10]) - 9;
            VAR_8->interval = FUNC_6(&VAR_14, 1);
            if (VAR_8->interval <= 0) {
                VAR_8->interval = -1;
            }

        } else if (FUNC_12((u_char *) "baknum=", VAR_9[VAR_10], 7) == 0) {
            VAR_8->backup_num = FUNC_1(VAR_9[VAR_10] + 7,
                                        FUNC_11((char *) VAR_9[VAR_10]) - 7);
            if (VAR_8->backup_num <= 0) {
                VAR_8->backup_num = 1;

            } else if (VAR_0 < (size_t)VAR_8->backup_num) {
                VAR_8->backup_num = VAR_0;
            }

        } else if (FUNC_12((u_char *) "maxsize=", VAR_9[VAR_10], 8) == 0) {
            VAR_14.data = VAR_9[VAR_10] + 8;
            VAR_14.len = FUNC_11((char *) VAR_9[VAR_10]) - 8;
            VAR_8->log_max_size = FUNC_5(&VAR_14);
            if (VAR_8->log_max_size <= 0) {
                VAR_8->log_max_size = -1;
            }
        } else if (FUNC_12((u_char *) "suitpath=", VAR_9[VAR_10], 9) == 0) {
            VAR_13.data = (u_char*)(VAR_9[VAR_10] + 9);
            VAR_13.len = FUNC_11(VAR_13.data);
            if (FUNC_2(VAR_6, &VAR_13, 0) != VAR_4) {
                FUNC_4(VAR_2, VAR_6->log, VAR_5,
                              "get fullname failed");
                return VAR_1;
            }
            VAR_8->suitpath = (char*)VAR_13.data;

            VAR_8->time_now = FUNC_9();
            FUNC_8(VAR_6, VAR_8);
        } else if (FUNC_12((u_char *) "adjust=", VAR_9[VAR_10], 7) == 0) {
            VAR_14.data =VAR_9[VAR_10] + 7;
            VAR_14.len = FUNC_11((char *) VAR_9[VAR_10]) - 7;
            VAR_8->adjust_time_raw = FUNC_6(&VAR_14, 1);
            if (VAR_8->adjust_time_raw < 1) {
                VAR_8->adjust_time_raw = 1;
            }
        }
    }

    VAR_12 = FUNC_11(VAR_8->logname) + 5;
    for (VAR_11 = 0; VAR_11 < VAR_8->backup_num; VAR_11++) {
        VAR_8->backup[VAR_11] = FUNC_7(VAR_6->pool, VAR_12);
        if (VAR_8->backup[VAR_11] == ((void*)0)) {
            return VAR_1;
        }
        FUNC_10((u_char *) VAR_8->backup[VAR_11], VAR_12, "%s.%i%Z", VAR_8->logname, VAR_11 + 1);
    }


    VAR_15 = FUNC_3((u_char*)VAR_8->logname, FUNC_11(VAR_8->logname));
    FUNC_14(VAR_15);
    VAR_8->adjust_time = FUNC_13() % VAR_8->adjust_time_raw;

    FUNC_4(VAR_3, VAR_6->log, 0,
                  "log rollback param: num [%i], interval %i(S), size %i(B), adjust %i/%i(S)",
                  VAR_8->backup_num, VAR_8->interval, VAR_8->log_max_size, VAR_8->adjust_time, VAR_8->adjust_time_raw);

    return VAR_4;
}
