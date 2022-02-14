
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_40__ {TYPE_5__* data; int (* handler ) (TYPE_5__*) ;} ;
typedef TYPE_1__ ngx_pool_cleanup_t ;
struct TYPE_43__ {int ctx; int log; } ;
struct TYPE_44__ {scalar_t__ len; } ;
struct TYPE_41__ {scalar_t__ starttls; scalar_t__ verify; scalar_t__ verify_depth; TYPE_9__* session_ticket_keys; TYPE_5__ ssl; scalar_t__ session_tickets; scalar_t__ session_timeout; int * shm_zone; scalar_t__ builtin_session_cache; TYPE_9__* certificates; TYPE_6__ ecdh_curve; TYPE_6__ dhparam; scalar_t__ prefer_server_ciphers; TYPE_6__ ciphers; TYPE_6__ crl; TYPE_6__ trusted_certificate; TYPE_6__ client_certificate; TYPE_9__* passwords; TYPE_9__* certificate_keys; int protocols; int line; int * file; scalar_t__ enable; scalar_t__ listen; } ;
typedef TYPE_2__ ngx_mail_ssl_conf_t ;
struct TYPE_42__ {int log; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_45__ {scalar_t__ nelts; scalar_t__ elts; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_9__*,TYPE_9__*,int *) ;
 int FUNC_3 (TYPE_6__,TYPE_6__,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int ,int ,int ,char*,...) ;
 int VAR_13 ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,TYPE_5__*,TYPE_9__*,TYPE_9__*,TYPE_9__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_5__*,TYPE_6__*,scalar_t__) ;
 int FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_5__*,TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int ,int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*,TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*,TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_16 (TYPE_5__*,int *,TYPE_9__*,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_17 (TYPE_3__*,TYPE_5__*,TYPE_9__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*,TYPE_5__*,TYPE_6__*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_19(ngx_conf_t *VAR_14, void *VAR_15, void *VAR_16)
{
    ngx_mail_ssl_conf_t *VAR_17 = VAR_15;
    ngx_mail_ssl_conf_t *VAR_18 = VAR_16;

    char *VAR_19;
    ngx_pool_cleanup_t *VAR_20;

    FUNC_5(VAR_18->enable, VAR_17->enable, 0);
    FUNC_4(VAR_18->starttls, VAR_17->starttls,
                         VAR_6);

    FUNC_5(VAR_18->session_timeout,
                         VAR_17->session_timeout, 300);

    FUNC_5(VAR_18->prefer_server_ciphers,
                         VAR_17->prefer_server_ciphers, 0);

    FUNC_1(VAR_18->protocols, VAR_17->protocols,
                         (VAR_0|VAR_9
                          |VAR_10|VAR_11));

    FUNC_4(VAR_18->verify, VAR_17->verify, 0);
    FUNC_4(VAR_18->verify_depth, VAR_17->verify_depth, 1);

    FUNC_2(VAR_18->certificates, VAR_17->certificates, ((void*)0));
    FUNC_2(VAR_18->certificate_keys, VAR_17->certificate_keys,
                         ((void*)0));

    FUNC_2(VAR_18->passwords, VAR_17->passwords, ((void*)0));

    FUNC_3(VAR_18->dhparam, VAR_17->dhparam, "");

    FUNC_3(VAR_18->ecdh_curve, VAR_17->ecdh_curve,
                         VAR_4);

    FUNC_3(VAR_18->client_certificate,
                         VAR_17->client_certificate, "");
    FUNC_3(VAR_18->trusted_certificate,
                         VAR_17->trusted_certificate, "");
    FUNC_3(VAR_18->crl, VAR_17->crl, "");

    FUNC_3(VAR_18->ciphers, VAR_17->ciphers, VAR_3);


    VAR_18->ssl.log = VAR_14->log;

    if (VAR_18->listen) {
        VAR_19 = "listen ... ssl";

    } else if (VAR_18->enable) {
        VAR_19 = "ssl";

    } else if (VAR_18->starttls != VAR_6) {
        VAR_19 = "starttls";

    } else {
        return VAR_2;
    }

    if (VAR_18->file == ((void*)0)) {
        VAR_18->file = VAR_17->file;
        VAR_18->line = VAR_17->line;
    }

    if (VAR_18->certificates == ((void*)0)) {
        FUNC_6(VAR_5, VAR_14->log, 0,
                      "no \"ssl_certificate\" is defined for "
                      "the \"%s\" directive in %s:%ui",
                      VAR_19, VAR_18->file, VAR_18->line);
        return VAR_1;
    }

    if (VAR_18->certificate_keys == ((void*)0)) {
        FUNC_6(VAR_5, VAR_14->log, 0,
                      "no \"ssl_certificate_key\" is defined for "
                      "the \"%s\" directive in %s:%ui",
                      VAR_19, VAR_18->file, VAR_18->line);
        return VAR_1;
    }

    if (VAR_18->certificate_keys->nelts < VAR_18->certificates->nelts) {
        FUNC_6(VAR_5, VAR_14->log, 0,
                      "no \"ssl_certificate_key\" is defined "
                      "for certificate \"%V\" and "
                      "the \"%s\" directive in %s:%ui",
                      ((ngx_str_t *) VAR_18->certificates->elts)
                      + VAR_18->certificates->nelts - 1,
                      VAR_19, VAR_18->file, VAR_18->line);
        return VAR_1;
    }

    if (FUNC_12(&VAR_18->ssl, VAR_18->protocols, ((void*)0)) != VAR_7) {
        return VAR_1;
    }

    VAR_20 = FUNC_7(VAR_14->pool, 0);
    if (VAR_20 == ((void*)0)) {
        FUNC_10(&VAR_18->ssl);
        return VAR_1;
    }

    VAR_20->handler = FUNC_10;
    VAR_20->data = &VAR_18->ssl;

    if (FUNC_8(VAR_14, &VAR_18->ssl, VAR_18->certificates,
                             VAR_18->certificate_keys, VAR_18->passwords)
        != VAR_7)
    {
        return VAR_1;
    }

    if (VAR_18->verify) {

        if (VAR_18->client_certificate.len == 0 && VAR_18->verify != 3) {
            FUNC_6(VAR_5, VAR_14->log, 0,
                          "no ssl_client_certificate for ssl_client_verify");
            return VAR_1;
        }

        if (FUNC_11(VAR_14, &VAR_18->ssl,
                                       &VAR_18->client_certificate,
                                       VAR_18->verify_depth)
            != VAR_7)
        {
            return VAR_1;
        }

        if (FUNC_18(VAR_14, &VAR_18->ssl,
                                        &VAR_18->trusted_certificate,
                                        VAR_18->verify_depth)
            != VAR_7)
        {
            return VAR_1;
        }

        if (FUNC_13(VAR_14, &VAR_18->ssl, &VAR_18->crl) != VAR_7) {
            return VAR_1;
        }
    }

    if (FUNC_9(VAR_14, &VAR_18->ssl, &VAR_18->ciphers,
                        VAR_18->prefer_server_ciphers)
        != VAR_7)
    {
        return VAR_1;
    }

    if (FUNC_14(VAR_14, &VAR_18->ssl, &VAR_18->dhparam) != VAR_7) {
        return VAR_1;
    }

    if (FUNC_15(VAR_14, &VAR_18->ssl, &VAR_18->ecdh_curve) != VAR_7) {
        return VAR_1;
    }

    FUNC_5(VAR_18->builtin_session_cache,
                         VAR_17->builtin_session_cache, VAR_8);

    if (VAR_18->shm_zone == ((void*)0)) {
        VAR_18->shm_zone = VAR_17->shm_zone;
    }

    if (FUNC_16(&VAR_18->ssl, &VAR_13,
                              VAR_18->certificates, VAR_18->builtin_session_cache,
                              VAR_18->shm_zone, VAR_18->session_timeout)
        != VAR_7)
    {
        return VAR_1;
    }

    FUNC_5(VAR_18->session_tickets,
                         VAR_17->session_tickets, 1);







    FUNC_2(VAR_18->session_ticket_keys,
                         VAR_17->session_ticket_keys, ((void*)0));

    if (FUNC_17(VAR_14, &VAR_18->ssl, VAR_18->session_ticket_keys)
        != VAR_7)
    {
        return VAR_1;
    }

    return VAR_2;
}
