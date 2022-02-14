
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ size; int * data; scalar_t__ len; } ;
struct stats {int interval; int sd; int sum; int shadow; int current; scalar_t__ aggregate; scalar_t__ updated; int ncurr_conn_str; int ntotal_conn_str; int timestamp_str; int uptime_str; int version; int version_str; int source; int source_str; int service; int service_str; scalar_t__ tid; TYPE_1__ buf; scalar_t__ start_ts; int addr; int port; } ;
struct array {int dummy; } ;
typedef scalar_t__ rstatus_t ;
typedef scalar_t__ pthread_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 struct stats* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct stats*) ;
 int FUNC_3 (struct stats*) ;
 scalar_t__ FUNC_4 (int *,struct array*) ;
 scalar_t__ FUNC_5 (struct stats*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *) ;

struct stats *
FUNC_9(uint16_t VAR_2, char *VAR_3, int VAR_4,
             char *VAR_5, struct array *VAR_6)
{
    rstatus_t VAR_7;
    struct stats *VAR_8;

    VAR_8 = FUNC_1(sizeof(*VAR_8));
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8->port = VAR_2;
    VAR_8->interval = VAR_4;
    FUNC_6(&VAR_8->addr, VAR_3);

    VAR_8->start_ts = (int64_t)FUNC_8(((void*)0));

    VAR_8->buf.len = 0;
    VAR_8->buf.data = ((void*)0);
    VAR_8->buf.size = 0;

    FUNC_0(&VAR_8->current);
    FUNC_0(&VAR_8->shadow);
    FUNC_0(&VAR_8->sum);

    VAR_8->tid = (pthread_t) -1;
    VAR_8->sd = -1;

    FUNC_7(&VAR_8->service_str, "service");
    FUNC_7(&VAR_8->service, "nutcracker");

    FUNC_7(&VAR_8->source_str, "source");
    FUNC_6(&VAR_8->source, VAR_5);

    FUNC_7(&VAR_8->version_str, "version");
    FUNC_7(&VAR_8->version, VAR_1);

    FUNC_7(&VAR_8->uptime_str, "uptime");
    FUNC_7(&VAR_8->timestamp_str, "timestamp");

    FUNC_7(&VAR_8->ntotal_conn_str, "total_connections");
    FUNC_7(&VAR_8->ncurr_conn_str, "curr_connections");

    VAR_8->updated = 0;
    VAR_8->aggregate = 0;



    VAR_7 = FUNC_4(&VAR_8->current, VAR_6);
    if (VAR_7 != VAR_0) {
        goto error;
    }

    VAR_7 = FUNC_4(&VAR_8->shadow, VAR_6);
    if (VAR_7 != VAR_0) {
        goto error;
    }

    VAR_7 = FUNC_4(&VAR_8->sum, VAR_6);
    if (VAR_7 != VAR_0) {
        goto error;
    }

    VAR_7 = FUNC_2(VAR_8);
    if (VAR_7 != VAR_0) {
        goto error;
    }

    VAR_7 = FUNC_5(VAR_8);
    if (VAR_7 != VAR_0) {
        goto error;
    }

    return VAR_8;

error:
    FUNC_3(VAR_8);
    return ((void*)0);
}
