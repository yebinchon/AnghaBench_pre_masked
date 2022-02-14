
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_buffer {char* data; int len; } ;
struct stats {int ncurr_conn_str; int ntotal_conn_str; int timestamp_str; int uptime_str; int version; int version_str; int source; int source_str; int service; int service_str; scalar_t__ start_ts; struct stats_buffer buf; } ;
typedef scalar_t__ rstatus_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct stats*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct stats*,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static rstatus_t
FUNC_5(struct stats *VAR_1)
{
    rstatus_t VAR_2;
    struct stats_buffer *VAR_3;
    int64_t VAR_4, VAR_5;

    VAR_3 = &VAR_1->buf;
    VAR_3->data[0] = '{';
    VAR_3->len = 1;

    VAR_4 = (int64_t)FUNC_4(((void*)0));
    VAR_5 = VAR_4 - VAR_1->start_ts;

    VAR_2 = FUNC_3(VAR_1, &VAR_1->service_str, &VAR_1->service);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_3(VAR_1, &VAR_1->source_str, &VAR_1->source);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_3(VAR_1, &VAR_1->version_str, &VAR_1->version);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_2(VAR_1, &VAR_1->uptime_str, VAR_5);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_2(VAR_1, &VAR_1->timestamp_str, VAR_4);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_2(VAR_1, &VAR_1->ntotal_conn_str, FUNC_1());
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    VAR_2 = FUNC_2(VAR_1, &VAR_1->ncurr_conn_str, FUNC_0());
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    return VAR_0;
}
