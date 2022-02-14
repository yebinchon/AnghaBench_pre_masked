
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ignore_headers; int next_upstream; int * upstream; int ssl; int ssl_verify; int ssl_server_name; int * ssl_name; int ssl_session_reuse; int intercept_errors; int buffer_size; int next_upstream_timeout; int read_timeout; int send_timeout; int connect_timeout; int next_upstream_tries; int socket_keepalive; int local; } ;
struct TYPE_8__ {int heartbeat_interval; int ups_info; int pass_body; int pass_all_headers; int args_in; int method; int service_name; TYPE_4__ upstream; } ;
typedef TYPE_1__ ngx_http_dubbo_loc_conf_t ;
struct TYPE_9__ {int * handler; scalar_t__ lmt_excpt; scalar_t__ noname; } ;
typedef TYPE_2__ ngx_http_core_loc_conf_t ;
struct TYPE_10__ {int max_size; char* name; int bucket_size; } ;
typedef TYPE_3__ ngx_hash_init_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ) ;
 int VAR_7 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_2__* FUNC_8 (int *,int ) ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (int *,TYPE_4__*,TYPE_4__*,int ,TYPE_3__*) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static char *
FUNC_10(ngx_conf_t *VAR_12, void *VAR_13, void *VAR_14)
{
    ngx_hash_init_t VAR_15;
    ngx_http_core_loc_conf_t *VAR_16;

    ngx_http_dubbo_loc_conf_t *VAR_17 = VAR_13;
    ngx_http_dubbo_loc_conf_t *VAR_18 = VAR_14;

    FUNC_3(VAR_18->upstream.local,
            VAR_17->upstream.local, ((void*)0));

    FUNC_7(VAR_18->upstream.socket_keepalive,
            VAR_17->upstream.socket_keepalive, 0);

    FUNC_6(VAR_18->upstream.next_upstream_tries,
            VAR_17->upstream.next_upstream_tries, 0);

    FUNC_2(VAR_18->upstream.connect_timeout,
            VAR_17->upstream.connect_timeout, 60000);

    FUNC_2(VAR_18->upstream.send_timeout,
            VAR_17->upstream.send_timeout, 60000);

    FUNC_2(VAR_18->upstream.read_timeout,
            VAR_17->upstream.read_timeout, 60000);

    FUNC_2(VAR_18->upstream.next_upstream_timeout,
            VAR_17->upstream.next_upstream_timeout, 0);

    FUNC_4(VAR_18->upstream.buffer_size,
            VAR_17->upstream.buffer_size,
            (size_t) VAR_11);

    FUNC_1(VAR_18->upstream.ignore_headers,
            VAR_17->upstream.ignore_headers,
            VAR_0);

    FUNC_1(VAR_18->upstream.next_upstream,
            VAR_17->upstream.next_upstream,
            (VAR_0
             |VAR_3
             |VAR_5));

    if (VAR_18->upstream.next_upstream & VAR_4) {
        VAR_18->upstream.next_upstream = VAR_0
            |VAR_4;
    }

    FUNC_7(VAR_18->upstream.intercept_errors,
            VAR_17->upstream.intercept_errors, 0);
    VAR_15.max_size = 512;
    VAR_15.bucket_size = FUNC_0(64, VAR_7);
    VAR_15.name = "dubbo_headers_hash";

    if (FUNC_9(VAR_12, &VAR_18->upstream,
                &VAR_17->upstream, VAR_10, &VAR_15)
            != VAR_6)
    {
        return VAR_1;
    }

    VAR_16 = FUNC_8(VAR_12, VAR_8);

    if (VAR_16->noname && VAR_18->upstream.upstream == ((void*)0)) {
        VAR_18->upstream.upstream = VAR_17->upstream.upstream;



    }

    if (VAR_16->lmt_excpt && VAR_16->handler == ((void*)0) && VAR_18->upstream.upstream) {
        VAR_16->handler = VAR_9;
    }

    FUNC_5(VAR_18->service_name, VAR_17->service_name, "");
    FUNC_5(VAR_18->method, VAR_17->method, "");

    FUNC_3(VAR_18->args_in, VAR_17->args_in, ((void*)0));
    FUNC_7(VAR_18->pass_all_headers, VAR_17->pass_all_headers, 1);
    FUNC_7(VAR_18->pass_body, VAR_17->pass_body, 1);
    FUNC_7(VAR_18->ups_info, VAR_17->ups_info, 0);

    FUNC_2(VAR_18->heartbeat_interval,
                              VAR_17->heartbeat_interval, 60000);

    return VAR_2;
}
