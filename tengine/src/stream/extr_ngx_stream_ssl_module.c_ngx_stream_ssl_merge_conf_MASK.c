
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_12__ ;


struct TYPE_47__ {int ctx; int log; } ;
struct TYPE_48__ {scalar_t__ len; } ;
struct TYPE_44__ {int verify; int verify_depth; TYPE_12__* session_ticket_keys; TYPE_8__ ssl; int session_tickets; int session_timeout; int * shm_zone; int builtin_session_cache; TYPE_12__* certificates; TYPE_9__ ecdh_curve; TYPE_9__ dhparam; TYPE_9__ crl; TYPE_9__ trusted_certificate; TYPE_9__ client_certificate; int prefer_server_ciphers; TYPE_9__ ciphers; TYPE_12__* passwords; TYPE_12__* certificate_keys; scalar_t__ certificate_values; int protocols; int line; int file; int listen; int sni_force; int handshake_timeout; } ;
typedef TYPE_1__ ngx_stream_ssl_conf_t ;
typedef int ngx_str_t ;
struct TYPE_45__ {TYPE_8__* data; int (* handler ) (TYPE_8__*) ;} ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
struct TYPE_46__ {int log; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_43__ {scalar_t__ nelts; scalar_t__ elts; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_12__*,TYPE_12__*,int *) ;
 int FUNC_6 (TYPE_9__,TYPE_9__,char*) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 TYPE_2__* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_8__*,TYPE_12__*,TYPE_12__*,TYPE_12__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,TYPE_8__*,TYPE_9__*,int ) ;
 int FUNC_13 (TYPE_8__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_8__*,TYPE_9__*,int) ;
 scalar_t__ FUNC_15 (TYPE_8__*,int ,int *) ;
 scalar_t__ FUNC_16 (TYPE_3__*,TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_17 (TYPE_3__*,TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*,TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_19 (TYPE_8__*,int *,TYPE_12__*,int ,int *,int ) ;
 scalar_t__ FUNC_20 (TYPE_3__*,TYPE_8__*,TYPE_12__*) ;
 scalar_t__ FUNC_21 (TYPE_3__*,TYPE_8__*,TYPE_9__*,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_22 (TYPE_3__*,TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static char *
FUNC_23(ngx_conf_t *VAR_16, void *VAR_17, void *VAR_18)
{
    ngx_stream_ssl_conf_t *VAR_19 = VAR_17;
    ngx_stream_ssl_conf_t *VAR_20 = VAR_18;

    ngx_pool_cleanup_t *VAR_21;

    FUNC_4(VAR_20->handshake_timeout,
                         VAR_19->handshake_timeout, 60000);

    FUNC_8(VAR_20->session_timeout,
                         VAR_19->session_timeout, 300);

    FUNC_8(VAR_20->prefer_server_ciphers,
                         VAR_19->prefer_server_ciphers, 0);

    FUNC_3(VAR_20->protocols, VAR_19->protocols,
                         (VAR_0|VAR_9
                          |VAR_10|VAR_11));

    FUNC_7(VAR_20->verify, VAR_19->verify, 0);
    FUNC_7(VAR_20->verify_depth, VAR_19->verify_depth, 1);

    FUNC_5(VAR_20->certificates, VAR_19->certificates, ((void*)0));
    FUNC_5(VAR_20->certificate_keys, VAR_19->certificate_keys,
                         ((void*)0));

    FUNC_5(VAR_20->passwords, VAR_19->passwords, ((void*)0));

    FUNC_6(VAR_20->dhparam, VAR_19->dhparam, "");

    FUNC_6(VAR_20->client_certificate, VAR_19->client_certificate,
                         "");
    FUNC_6(VAR_20->trusted_certificate,
                         VAR_19->trusted_certificate, "");
    FUNC_6(VAR_20->crl, VAR_19->crl, "");

    FUNC_6(VAR_20->ecdh_curve, VAR_19->ecdh_curve,
                         VAR_4);

    FUNC_6(VAR_20->ciphers, VAR_19->ciphers, VAR_3);






    VAR_20->ssl.log = VAR_16->log;

    if (!VAR_20->listen) {
        return VAR_2;
    }

    if (VAR_20->certificates == ((void*)0)) {
        FUNC_9(VAR_5, VAR_16->log, 0,
                      "no \"ssl_certificate\" is defined for "
                      "the \"listen ... ssl\" directive in %s:%ui",
                      VAR_20->file, VAR_20->line);
        return VAR_1;
    }

    if (VAR_20->certificate_keys == ((void*)0)) {
        FUNC_9(VAR_5, VAR_16->log, 0,
                      "no \"ssl_certificate_key\" is defined for "
                      "the \"listen ... ssl\" directive in %s:%ui",
                      VAR_20->file, VAR_20->line);
        return VAR_1;
    }

    if (VAR_20->certificate_keys->nelts < VAR_20->certificates->nelts) {
        FUNC_9(VAR_5, VAR_16->log, 0,
                      "no \"ssl_certificate_key\" is defined "
                      "for certificate \"%V\" and "
                      "the \"listen ... ssl\" directive in %s:%ui",
                      ((ngx_str_t *) VAR_20->certificates->elts)
                      + VAR_20->certificates->nelts - 1,
                      VAR_20->file, VAR_20->line);
        return VAR_1;
    }

    if (FUNC_15(&VAR_20->ssl, VAR_20->protocols, ((void*)0)) != VAR_7) {
        return VAR_1;
    }

    VAR_21 = FUNC_10(VAR_16->pool, 0);
    if (VAR_21 == ((void*)0)) {
        FUNC_13(&VAR_20->ssl);
        return VAR_1;
    }

    VAR_21->handler = FUNC_13;
    VAR_21->data = &VAR_20->ssl;
    if (FUNC_22(VAR_16, VAR_20) != VAR_7) {
        return VAR_1;
    }

    if (VAR_20->certificate_values) {
        FUNC_9(VAR_5, VAR_16->log, 0,
                      "variables in "
                      "\"ssl_certificate\" and \"ssl_certificate_key\" "
                      "directives are not supported on this platform");
        return VAR_1;


    } else {



        if (FUNC_11(VAR_16, &VAR_20->ssl, VAR_20->certificates,
                                 VAR_20->certificate_keys, VAR_20->passwords)
            != VAR_7)
        {
            return VAR_1;
        }
    }

    if (FUNC_12(VAR_16, &VAR_20->ssl, &VAR_20->ciphers,
                        VAR_20->prefer_server_ciphers)
        != VAR_7)
    {
        return VAR_1;
    }

    if (VAR_20->verify) {

        if (VAR_20->client_certificate.len == 0 && VAR_20->verify != 3) {
            FUNC_9(VAR_5, VAR_16->log, 0,
                          "no ssl_client_certificate for ssl_client_verify");
            return VAR_1;
        }

        if (FUNC_14(VAR_16, &VAR_20->ssl,
                                       &VAR_20->client_certificate,
                                       VAR_20->verify_depth)
            != VAR_7)
        {
            return VAR_1;
        }

        if (FUNC_21(VAR_16, &VAR_20->ssl,
                                        &VAR_20->trusted_certificate,
                                        VAR_20->verify_depth)
            != VAR_7)
        {
            return VAR_1;
        }

        if (FUNC_16(VAR_16, &VAR_20->ssl, &VAR_20->crl) != VAR_7) {
            return VAR_1;
        }
    }

    if (FUNC_17(VAR_16, &VAR_20->ssl, &VAR_20->dhparam) != VAR_7) {
        return VAR_1;
    }

    if (FUNC_18(VAR_16, &VAR_20->ssl, &VAR_20->ecdh_curve) != VAR_7) {
        return VAR_1;
    }

    FUNC_8(VAR_20->builtin_session_cache,
                         VAR_19->builtin_session_cache, VAR_8);

    if (VAR_20->shm_zone == ((void*)0)) {
        VAR_20->shm_zone = VAR_19->shm_zone;
    }

    if (FUNC_19(&VAR_20->ssl, &VAR_15,
                              VAR_20->certificates, VAR_20->builtin_session_cache,
                              VAR_20->shm_zone, VAR_20->session_timeout)
        != VAR_7)
    {
        return VAR_1;
    }

    FUNC_8(VAR_20->session_tickets,
                         VAR_19->session_tickets, 1);







    FUNC_5(VAR_20->session_ticket_keys,
                         VAR_19->session_ticket_keys, ((void*)0));

    if (FUNC_20(VAR_16, &VAR_20->ssl, VAR_20->session_ticket_keys)
        != VAR_7)
    {
        return VAR_1;
    }

    return VAR_2;
}
