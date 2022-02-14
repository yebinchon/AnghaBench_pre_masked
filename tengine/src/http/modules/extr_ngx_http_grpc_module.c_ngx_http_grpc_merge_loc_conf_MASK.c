
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int * buckets; } ;
struct TYPE_12__ {TYPE_1__ hash; } ;
struct TYPE_17__ {int ignore_headers; int next_upstream; int * upstream; int ssl; int ssl_verify; int ssl_server_name; int * ssl_name; int ssl_session_reuse; int intercept_errors; int buffer_size; int next_upstream_timeout; int read_timeout; int send_timeout; int connect_timeout; int next_upstream_tries; int socket_keepalive; int local; } ;
struct TYPE_14__ {int ssl_protocols; int host_set; TYPE_10__ headers; int * headers_source; TYPE_5__ upstream; int host; scalar_t__ ssl; int ssl_passwords; int ssl_certificate_key; int ssl_certificate; int ssl_crl; int ssl_trusted_certificate; int ssl_verify_depth; int ssl_ciphers; } ;
typedef TYPE_2__ ngx_http_grpc_loc_conf_t ;
struct TYPE_15__ {int * handler; scalar_t__ lmt_excpt; scalar_t__ noname; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_16__ {int max_size; char* name; int bucket_size; } ;
typedef TYPE_4__ ngx_hash_init_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 int VAR_10 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_3__* FUNC_8 (int *,int ) ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (int *,TYPE_2__*,TYPE_10__*,int ) ;
 scalar_t__ FUNC_10 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_11 (int *,TYPE_5__*,TYPE_5__*,int ,TYPE_4__*) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static char *
FUNC_12(ngx_conf_t *VAR_16, void *VAR_17, void *VAR_18)
{
    ngx_http_grpc_loc_conf_t *VAR_19 = VAR_17;
    ngx_http_grpc_loc_conf_t *VAR_20 = VAR_18;

    ngx_int_t VAR_21;
    ngx_hash_init_t VAR_22;
    ngx_http_core_loc_conf_t *VAR_23;

    FUNC_3(VAR_20->upstream.local,
                              VAR_19->upstream.local, ((void*)0));

    FUNC_7(VAR_20->upstream.socket_keepalive,
                              VAR_19->upstream.socket_keepalive, 0);

    FUNC_6(VAR_20->upstream.next_upstream_tries,
                              VAR_19->upstream.next_upstream_tries, 0);

    FUNC_2(VAR_20->upstream.connect_timeout,
                              VAR_19->upstream.connect_timeout, 60000);

    FUNC_2(VAR_20->upstream.send_timeout,
                              VAR_19->upstream.send_timeout, 60000);

    FUNC_2(VAR_20->upstream.read_timeout,
                              VAR_19->upstream.read_timeout, 60000);

    FUNC_2(VAR_20->upstream.next_upstream_timeout,
                              VAR_19->upstream.next_upstream_timeout, 0);

    FUNC_4(VAR_20->upstream.buffer_size,
                              VAR_19->upstream.buffer_size,
                              (size_t) VAR_15);

    FUNC_1(VAR_20->upstream.ignore_headers,
                              VAR_19->upstream.ignore_headers,
                              VAR_0);

    FUNC_1(VAR_20->upstream.next_upstream,
                              VAR_19->upstream.next_upstream,
                              (VAR_0
                               |VAR_3
                               |VAR_5));

    if (VAR_20->upstream.next_upstream & VAR_4) {
        VAR_20->upstream.next_upstream = VAR_0
                                       |VAR_4;
    }

    FUNC_7(VAR_20->upstream.intercept_errors,
                              VAR_19->upstream.intercept_errors, 0);
    VAR_22.max_size = 512;
    VAR_22.bucket_size = FUNC_0(64, VAR_10);
    VAR_22.name = "grpc_headers_hash";

    if (FUNC_11(VAR_16, &VAR_20->upstream,
            &VAR_19->upstream, VAR_14, &VAR_22)
        != VAR_6)
    {
        return VAR_1;
    }

    VAR_23 = FUNC_8(VAR_16, VAR_11);

    if (VAR_23->noname && VAR_20->upstream.upstream == ((void*)0)) {
        VAR_20->upstream.upstream = VAR_19->upstream.upstream;
        VAR_20->host = VAR_19->host;



    }

    if (VAR_23->lmt_excpt && VAR_23->handler == ((void*)0) && VAR_20->upstream.upstream) {
        VAR_23->handler = VAR_12;
    }

    if (VAR_20->headers_source == ((void*)0)) {
        VAR_20->headers = VAR_19->headers;
        VAR_20->headers_source = VAR_19->headers_source;
        VAR_20->host_set = VAR_19->host_set;
    }

    VAR_21 = FUNC_9(VAR_16, VAR_20, &VAR_20->headers,
                                    VAR_13);
    if (VAR_21 != VAR_6) {
        return VAR_1;
    }






    if (VAR_19->headers.hash.buckets == ((void*)0)
        && VAR_20->headers_source == VAR_19->headers_source)
    {
        VAR_19->headers = VAR_20->headers;
        VAR_19->host_set = VAR_20->host_set;
    }

    return VAR_2;
}
