
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_16__ {scalar_t__ len; } ;
struct TYPE_17__ {TYPE_11__ value; } ;
struct TYPE_27__ {scalar_t__ len; } ;
struct TYPE_15__ {TYPE_9__ value; } ;
struct TYPE_25__ {scalar_t__ len; } ;
struct TYPE_26__ {TYPE_7__ value; } ;
struct TYPE_23__ {scalar_t__ len; } ;
struct TYPE_24__ {TYPE_5__ value; } ;
struct TYPE_21__ {scalar_t__ len; } ;
struct TYPE_22__ {TYPE_3__ value; } ;
struct TYPE_19__ {scalar_t__ len; } ;
struct TYPE_20__ {TYPE_1__ value; } ;
struct TYPE_18__ {int log_socket_errors; int transform_underscores_in_resp_headers; int pool_size; int buffer_size; int send_lowat; int read_timeout; int send_timeout; int connect_timeout; int keepalive_timeout; int use_default_type; int check_client_abort; int http10_buffering; int enable_code_cache; int force_read_body; int ssl_crl; int ssl_trusted_certificate; int ssl_verify_depth; int ssl_ciphers; int ssl_protocols; int body_filter_src_key; int body_filter_handler; TYPE_12__ body_filter_src; int header_filter_src_key; int header_filter_handler; TYPE_10__ header_filter_src; int log_chunkname; int log_src_key; int log_handler; TYPE_8__ log_src; int content_chunkname; int content_src_key; int content_handler; TYPE_6__ content_src; int access_chunkname; int access_src_key; int access_handler; TYPE_4__ access_src; int rewrite_chunkname; int rewrite_src_key; int rewrite_handler; TYPE_2__ rewrite_src; } ;
typedef TYPE_13__ ngx_http_lua_loc_conf_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int *,TYPE_13__*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_9, void *VAR_10, void *VAR_11)
{
    ngx_http_lua_loc_conf_t *VAR_12 = VAR_10;
    ngx_http_lua_loc_conf_t *VAR_13 = VAR_11;

    if (VAR_13->rewrite_src.value.len == 0) {
        VAR_13->rewrite_src = VAR_12->rewrite_src;
        VAR_13->rewrite_handler = VAR_12->rewrite_handler;
        VAR_13->rewrite_src_key = VAR_12->rewrite_src_key;
        VAR_13->rewrite_chunkname = VAR_12->rewrite_chunkname;
    }

    if (VAR_13->access_src.value.len == 0) {
        VAR_13->access_src = VAR_12->access_src;
        VAR_13->access_handler = VAR_12->access_handler;
        VAR_13->access_src_key = VAR_12->access_src_key;
        VAR_13->access_chunkname = VAR_12->access_chunkname;
    }

    if (VAR_13->content_src.value.len == 0) {
        VAR_13->content_src = VAR_12->content_src;
        VAR_13->content_handler = VAR_12->content_handler;
        VAR_13->content_src_key = VAR_12->content_src_key;
        VAR_13->content_chunkname = VAR_12->content_chunkname;
    }

    if (VAR_13->log_src.value.len == 0) {
        VAR_13->log_src = VAR_12->log_src;
        VAR_13->log_handler = VAR_12->log_handler;
        VAR_13->log_src_key = VAR_12->log_src_key;
        VAR_13->log_chunkname = VAR_12->log_chunkname;
    }

    if (VAR_13->header_filter_src.value.len == 0) {
        VAR_13->header_filter_src = VAR_12->header_filter_src;
        VAR_13->header_filter_handler = VAR_12->header_filter_handler;
        VAR_13->header_filter_src_key = VAR_12->header_filter_src_key;
    }

    if (VAR_13->body_filter_src.value.len == 0) {
        VAR_13->body_filter_src = VAR_12->body_filter_src;
        VAR_13->body_filter_handler = VAR_12->body_filter_handler;
        VAR_13->body_filter_src_key = VAR_12->body_filter_src_key;
    }
    FUNC_5(VAR_13->force_read_body, VAR_12->force_read_body, 0);
    FUNC_5(VAR_13->enable_code_cache, VAR_12->enable_code_cache, 1);
    FUNC_5(VAR_13->http10_buffering, VAR_12->http10_buffering, 1);
    FUNC_5(VAR_13->check_client_abort, VAR_12->check_client_abort, 0);
    FUNC_5(VAR_13->use_default_type, VAR_12->use_default_type, 1);

    FUNC_1(VAR_13->keepalive_timeout,
                              VAR_12->keepalive_timeout, 60000);

    FUNC_1(VAR_13->connect_timeout,
                              VAR_12->connect_timeout, 60000);

    FUNC_1(VAR_13->send_timeout,
                              VAR_12->send_timeout, 60000);

    FUNC_1(VAR_13->read_timeout,
                              VAR_12->read_timeout, 60000);

    FUNC_2(VAR_13->send_lowat,
                              VAR_12->send_lowat, 0);

    FUNC_2(VAR_13->buffer_size,
                              VAR_12->buffer_size,
                              (size_t) VAR_8);

    FUNC_4(VAR_13->pool_size, VAR_12->pool_size, 30);

    FUNC_5(VAR_13->transform_underscores_in_resp_headers,
                         VAR_12->transform_underscores_in_resp_headers, 1);

    FUNC_5(VAR_13->log_socket_errors, VAR_12->log_socket_errors, 1);

    return VAR_2;
}
