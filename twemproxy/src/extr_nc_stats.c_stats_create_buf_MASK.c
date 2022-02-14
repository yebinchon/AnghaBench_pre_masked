
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_17__ {scalar_t__ len; } ;
struct stats_server {int metric; TYPE_12__ name; } ;
struct TYPE_16__ {scalar_t__ len; } ;
struct stats_pool {int server; int metric; TYPE_11__ name; } ;
struct TYPE_18__ {scalar_t__ len; } ;
struct stats_metric {TYPE_13__ name; } ;
struct TYPE_19__ {size_t size; int * data; } ;
struct TYPE_15__ {scalar_t__ len; } ;
struct TYPE_28__ {scalar_t__ len; } ;
struct TYPE_27__ {scalar_t__ len; } ;
struct TYPE_26__ {scalar_t__ len; } ;
struct TYPE_25__ {scalar_t__ len; } ;
struct TYPE_24__ {scalar_t__ len; } ;
struct TYPE_23__ {scalar_t__ len; } ;
struct TYPE_22__ {scalar_t__ len; } ;
struct TYPE_21__ {scalar_t__ len; } ;
struct TYPE_20__ {scalar_t__ len; } ;
struct stats {TYPE_14__ buf; int sum; TYPE_10__ ncurr_conn_str; TYPE_9__ ntotal_conn_str; TYPE_8__ timestamp_str; TYPE_7__ uptime_str; TYPE_6__ version; TYPE_5__ version_str; TYPE_4__ source; TYPE_3__ source_str; TYPE_2__ service; TYPE_1__ service_str; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,size_t) ;
 int FUNC_5 (char*,size_t,int ) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static rstatus_t
FUNC_8(struct stats *VAR_5)
{
    uint32_t VAR_6 = 20;
    uint32_t VAR_7 = 8;
    uint32_t VAR_8 = 8;
    uint32_t VAR_9 = 8;
    size_t VAR_10 = 0;
    uint32_t VAR_11;

    FUNC_0(VAR_5->buf.data == ((void*)0) && VAR_5->buf.size == 0);


    VAR_10 += 1;

    VAR_10 += VAR_5->service_str.len;
    VAR_10 += VAR_5->service.len;
    VAR_10 += VAR_7;

    VAR_10 += VAR_5->source_str.len;
    VAR_10 += VAR_5->source.len;
    VAR_10 += VAR_7;

    VAR_10 += VAR_5->version_str.len;
    VAR_10 += VAR_5->version.len;
    VAR_10 += VAR_7;

    VAR_10 += VAR_5->uptime_str.len;
    VAR_10 += VAR_6;
    VAR_10 += VAR_7;

    VAR_10 += VAR_5->timestamp_str.len;
    VAR_10 += VAR_6;
    VAR_10 += VAR_7;

    VAR_10 += VAR_5->ntotal_conn_str.len;
    VAR_10 += VAR_6;
    VAR_10 += VAR_7;

    VAR_10 += VAR_5->ncurr_conn_str.len;
    VAR_10 += VAR_6;
    VAR_10 += VAR_7;


    for (VAR_11 = 0; VAR_11 < FUNC_3(&VAR_5->sum); VAR_11++) {
        struct stats_pool *VAR_12 = FUNC_2(&VAR_5->sum, VAR_11);
        uint32_t VAR_13;

        VAR_10 += VAR_12->name.len;
        VAR_10 += VAR_8;

        for (VAR_13 = 0; VAR_13 < FUNC_3(&VAR_12->metric); VAR_13++) {
            struct stats_metric *VAR_14 = FUNC_2(&VAR_12->metric, VAR_13);

            VAR_10 += VAR_14->name.len;
            VAR_10 += VAR_6;
            VAR_10 += VAR_7;
        }


        for (VAR_13 = 0; VAR_13 < FUNC_3(&VAR_12->server); VAR_13++) {
            struct stats_server *VAR_15 = FUNC_2(&VAR_12->server, VAR_13);
            uint32_t VAR_16;

            VAR_10 += VAR_15->name.len;
            VAR_10 += VAR_9;

            for (VAR_16 = 0; VAR_16 < FUNC_3(&VAR_15->metric); VAR_16++) {
                struct stats_metric *VAR_17 = FUNC_2(&VAR_15->metric, VAR_16);

                VAR_10 += VAR_17->name.len;
                VAR_10 += VAR_6;
                VAR_10 += VAR_7;
            }
        }
    }


    VAR_10 += 2;

    VAR_10 = FUNC_1(VAR_10, VAR_1);

    VAR_5->buf.data = FUNC_6(VAR_10);
    if (VAR_5->buf.data == ((void*)0)) {
        FUNC_5("create stats buffer of size %zu failed: %s", VAR_10,
                   FUNC_7(VAR_4));
        return VAR_2;
    }
    VAR_5->buf.size = VAR_10;

    FUNC_4(VAR_0, "stats buffer size %zu", VAR_10);

    return VAR_3;
}
