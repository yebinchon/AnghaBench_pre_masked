
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_26__ ;
typedef struct TYPE_37__ TYPE_25__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef int ssize_t ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_syslog_peer_t ;
struct TYPE_43__ {int complete_lengths; int complete_values; TYPE_25__* file; int * syslog_peer; TYPE_3__* script; int * complex_value; int * filter; TYPE_13__* value; TYPE_14__* cf; TYPE_10__* format; scalar_t__ variables; int * values; int * lengths; TYPE_13__* source; } ;
typedef TYPE_6__ ngx_stream_script_compile_t ;
typedef TYPE_6__ ngx_stream_log_t ;
struct TYPE_44__ {int off; int * logs; } ;
typedef TYPE_8__ ngx_stream_log_srv_conf_t ;
typedef int ngx_stream_log_script_t ;
struct TYPE_36__ {scalar_t__ nelts; TYPE_10__* elts; } ;
struct TYPE_45__ {TYPE_1__ formats; } ;
typedef TYPE_9__ ngx_stream_log_main_conf_t ;
struct TYPE_39__ {scalar_t__ len; int data; } ;
struct TYPE_32__ {TYPE_2__ name; } ;
typedef TYPE_10__ ngx_stream_log_fmt_t ;
struct TYPE_33__ {scalar_t__ flush; int gzip; TYPE_4__* event; int * start; int * last; int * pos; } ;
typedef TYPE_11__ ngx_stream_log_buf_t ;
typedef int ngx_stream_complex_value_t ;
typedef TYPE_6__ ngx_stream_compile_complex_value_t ;
struct TYPE_34__ {char* data; scalar_t__ len; } ;
typedef TYPE_13__ ngx_str_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_int_t ;
typedef int ngx_event_t ;
struct TYPE_35__ {TYPE_26__* cycle; int pool; TYPE_5__* args; } ;
typedef TYPE_14__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_42__ {int nelts; TYPE_13__* elts; } ;
struct TYPE_41__ {int cancelable; int * log; int handler; TYPE_25__* data; } ;
struct TYPE_40__ {int values; int lengths; } ;
struct TYPE_38__ {int new_log; } ;
struct TYPE_37__ {TYPE_11__* data; int flush; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_6__* FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (TYPE_26__*,TYPE_13__*,int ) ;
 int FUNC_4 (int ,TYPE_14__*,int ,char*,...) ;
 TYPE_25__* FUNC_5 (TYPE_26__*,TYPE_13__*) ;
 int FUNC_6 (TYPE_6__*,int) ;
 int * FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_13__*) ;
 scalar_t__ FUNC_9 (TYPE_13__*,int ) ;
 void* FUNC_10 (int ,int) ;
 int * FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (TYPE_6__*) ;
 TYPE_9__* FUNC_15 (TYPE_14__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_16 (TYPE_6__*) ;
 scalar_t__ FUNC_17 (TYPE_13__*) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 char* FUNC_19 (TYPE_14__*,int *) ;

__attribute__((used)) static char *
FUNC_20(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_stream_log_srv_conf_t *VAR_12 = VAR_11;

    ssize_t VAR_13;
    ngx_int_t VAR_14;
    ngx_uint_t VAR_15, VAR_16;
    ngx_msec_t VAR_17;
    ngx_str_t *VAR_18, VAR_19, VAR_20;
    ngx_stream_log_t *VAR_21;
    ngx_syslog_peer_t *VAR_22;
    ngx_stream_log_buf_t *VAR_23;
    ngx_stream_log_fmt_t *VAR_24;
    ngx_stream_script_compile_t VAR_25;
    ngx_stream_log_main_conf_t *VAR_26;
    ngx_stream_compile_complex_value_t VAR_27;

    VAR_18 = VAR_9->args->elts;

    if (FUNC_13(VAR_18[1].data, "off") == 0) {
        VAR_12->off = 1;
        if (VAR_9->args->nelts == 2) {
            return VAR_1;
        }

        FUNC_4(VAR_3, VAR_9, 0,
                           "invalid parameter \"%V\"", &VAR_18[2]);
        return VAR_0;
    }

    if (VAR_12->logs == ((void*)0)) {
        VAR_12->logs = FUNC_0(VAR_9->pool, 2, sizeof(ngx_stream_log_t));
        if (VAR_12->logs == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_26 = FUNC_15(VAR_9, VAR_8);

    VAR_21 = FUNC_1(VAR_12->logs);
    if (VAR_21 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_6(VAR_21, sizeof(ngx_stream_log_t));


    if (FUNC_18(VAR_18[1].data, "syslog:", 7) == 0) {

        VAR_22 = FUNC_10(VAR_9->pool, sizeof(ngx_syslog_peer_t));
        if (VAR_22 == ((void*)0)) {
            return VAR_0;
        }

        if (FUNC_19(VAR_9, VAR_22) != VAR_1) {
            return VAR_0;
        }

        VAR_21->syslog_peer = VAR_22;

        goto process_formats;
    }

    VAR_16 = FUNC_17(&VAR_18[1]);

    if (VAR_16 == 0) {
        VAR_21->file = FUNC_5(VAR_9->cycle, &VAR_18[1]);
        if (VAR_21->file == ((void*)0)) {
            return VAR_0;
        }

    } else {
        if (FUNC_3(VAR_9->cycle, &VAR_18[1], 0) != VAR_4) {
            return VAR_0;
        }

        VAR_21->script = FUNC_10(VAR_9->pool, sizeof(ngx_stream_log_script_t));
        if (VAR_21->script == ((void*)0)) {
            return VAR_0;
        }

        FUNC_6(&VAR_25, sizeof(ngx_stream_script_compile_t));

        VAR_25.cf = VAR_9;
        VAR_25.source = &VAR_18[1];
        VAR_25.lengths = &VAR_21->script->lengths;
        VAR_25.values = &VAR_21->script->values;
        VAR_25.variables = VAR_16;
        VAR_25.complete_lengths = 1;
        VAR_25.complete_values = 1;

        if (FUNC_16(&VAR_25) != VAR_4) {
            return VAR_0;
        }
    }

process_formats:

    if (VAR_9->args->nelts >= 3) {
        VAR_19 = VAR_18[2];

    } else {
        FUNC_4(VAR_3, VAR_9, 0,
                           "log format is not specified");
        return VAR_0;
    }

    VAR_24 = VAR_26->formats.elts;
    for (VAR_15 = 0; VAR_15 < VAR_26->formats.nelts; VAR_15++) {
        if (VAR_24[VAR_15].name.len == VAR_19.len
            && FUNC_12(VAR_24[VAR_15].name.data, VAR_19.data) == 0)
        {
            VAR_21->format = &VAR_24[VAR_15];
            break;
        }
    }

    if (VAR_21->format == ((void*)0)) {
        FUNC_4(VAR_3, VAR_9, 0,
                           "unknown log format \"%V\"", &VAR_19);
        return VAR_0;
    }

    VAR_13 = 0;
    VAR_17 = 0;
    VAR_14 = 0;

    for (VAR_15 = 3; VAR_15 < VAR_9->args->nelts; VAR_15++) {

        if (FUNC_18(VAR_18[VAR_15].data, "buffer=", 7) == 0) {
            VAR_20.len = VAR_18[VAR_15].len - 7;
            VAR_20.data = VAR_18[VAR_15].data + 7;

            VAR_13 = FUNC_8(&VAR_20);

            if (VAR_13 == VAR_2 || VAR_13 == 0) {
                FUNC_4(VAR_3, VAR_9, 0,
                                   "invalid buffer size \"%V\"", &VAR_20);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_18(VAR_18[VAR_15].data, "flush=", 6) == 0) {
            VAR_20.len = VAR_18[VAR_15].len - 6;
            VAR_20.data = VAR_18[VAR_15].data + 6;

            VAR_17 = FUNC_9(&VAR_20, 0);

            if (VAR_17 == (ngx_msec_t) VAR_2 || VAR_17 == 0) {
                FUNC_4(VAR_3, VAR_9, 0,
                                   "invalid flush time \"%V\"", &VAR_20);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_18(VAR_18[VAR_15].data, "gzip", 4) == 0
            && (VAR_18[VAR_15].len == 4 || VAR_18[VAR_15].data[4] == '='))
        {
            FUNC_4(VAR_3, VAR_9, 0,
                               "nginx was built without zlib support");
            return VAR_0;

        }

        if (FUNC_18(VAR_18[VAR_15].data, "if=", 3) == 0) {
            VAR_20.len = VAR_18[VAR_15].len - 3;
            VAR_20.data = VAR_18[VAR_15].data + 3;

            FUNC_6(&VAR_27, sizeof(ngx_stream_compile_complex_value_t));

            VAR_27.cf = VAR_9;
            VAR_27.value = &VAR_20;
            VAR_27.complex_value = FUNC_7(VAR_9->pool,
                                           sizeof(ngx_stream_complex_value_t));
            if (VAR_27.complex_value == ((void*)0)) {
                return VAR_0;
            }

            if (FUNC_14(&VAR_27) != VAR_4) {
                return VAR_0;
            }

            VAR_21->filter = VAR_27.complex_value;

            continue;
        }

        FUNC_4(VAR_3, VAR_9, 0,
                           "invalid parameter \"%V\"", &VAR_18[VAR_15]);
        return VAR_0;
    }

    if (VAR_17 && VAR_13 == 0) {
        FUNC_4(VAR_3, VAR_9, 0,
                           "no buffer is defined for access_log \"%V\"",
                           &VAR_18[1]);
        return VAR_0;
    }

    if (VAR_13) {

        if (VAR_21->script) {
            FUNC_4(VAR_3, VAR_9, 0,
                               "buffered logs cannot have variables in name");
            return VAR_0;
        }

        if (VAR_21->syslog_peer) {
            FUNC_4(VAR_3, VAR_9, 0,
                               "logs to syslog cannot be buffered");
            return VAR_0;
        }

        if (VAR_21->file->data) {
            VAR_23 = VAR_21->file->data;

            if (VAR_23->last - VAR_23->start != VAR_13
                || VAR_23->flush != VAR_17
                || VAR_23->gzip != VAR_14)
            {
                FUNC_4(VAR_3, VAR_9, 0,
                                   "access_log \"%V\" already defined "
                                   "with conflicting parameters",
                                   &VAR_18[1]);
                return VAR_0;
            }

            return VAR_1;
        }

        VAR_23 = FUNC_10(VAR_9->pool, sizeof(ngx_stream_log_buf_t));
        if (VAR_23 == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->start = FUNC_11(VAR_9->pool, VAR_13);
        if (VAR_23->start == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->pos = VAR_23->start;
        VAR_23->last = VAR_23->start + VAR_13;

        if (VAR_17) {
            VAR_23->event = FUNC_10(VAR_9->pool, sizeof(ngx_event_t));
            if (VAR_23->event == ((void*)0)) {
                return VAR_0;
            }

            VAR_23->event->data = VAR_21->file;
            VAR_23->event->handler = VAR_7;
            VAR_23->event->log = &VAR_9->cycle->new_log;
            VAR_23->event->cancelable = 1;

            VAR_23->flush = VAR_17;
        }

        VAR_23->gzip = VAR_14;

        VAR_21->file->flush = VAR_6;
        VAR_21->file->data = VAR_23;
    }

    return VAR_1;
}
