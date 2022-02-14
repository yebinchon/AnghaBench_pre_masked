
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int errbuf ;
struct TYPE_14__ {int shutdown; TYPE_4__* ssl; } ;
struct TYPE_15__ {scalar_t__ dnstls_events; TYPE_3__ dnstls_data; TYPE_2__* server; struct TYPE_15__* encrypted; } ;
struct TYPE_12__ {int * session; } ;
struct TYPE_13__ {TYPE_1__ dnstls_data; } ;
typedef int SSL_SESSION ;
typedef TYPE_4__ DnsStream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (scalar_t__,char*) ;

int FUNC_12(DnsStream *VAR_8, int VAR_9) {
        int VAR_10, VAR_11;
        SSL_SESSION *VAR_12;

        FUNC_7(VAR_8);
        FUNC_7(VAR_8->encrypted);
        FUNC_7(VAR_8->dnstls_data.ssl);

        if (VAR_8->server) {
                VAR_12 = FUNC_4(VAR_8->dnstls_data.ssl);
                if (VAR_12) {
                        if (VAR_8->server->dnstls_data.session)
                                FUNC_3(VAR_8->server->dnstls_data.session);

                        VAR_8->server->dnstls_data.session = VAR_12;
                }
        }

        if (VAR_9 == VAR_3) {
                FUNC_0();
                VAR_11 = FUNC_6(VAR_8->dnstls_data.ssl);
                if (VAR_11 == 0) {
                        if (!VAR_8->dnstls_data.shutdown) {
                                VAR_8->dnstls_data.shutdown = 1;
                                FUNC_8(VAR_8);
                        }

                        VAR_8->dnstls_events = 0;

                        VAR_11 = FUNC_9(VAR_8);
                        if (VAR_11 < 0)
                                return VAR_11;

                        return -VAR_0;
                } else if (VAR_11 < 0) {
                        VAR_10 = FUNC_5(VAR_8->dnstls_data.ssl, VAR_11);
                        if (FUNC_2(VAR_10, VAR_5, VAR_6)) {
                                VAR_8->dnstls_events = VAR_10 == VAR_5 ? VAR_1 : VAR_2;
                                VAR_11 = FUNC_9(VAR_8);
                                if (VAR_11 < 0 && VAR_11 != -VAR_0)
                                        return VAR_11;

                                if (!VAR_8->dnstls_data.shutdown) {
                                        VAR_8->dnstls_data.shutdown = 1;
                                        FUNC_8(VAR_8);
                                }
                                return -VAR_0;
                        } else if (VAR_10 == VAR_4) {
                                if (VAR_7 > 0)
                                        FUNC_11(VAR_7, "Failed to invoke SSL_shutdown, ignoring: %m");
                        } else {
                                char VAR_13[256];

                                FUNC_1(VAR_10, VAR_13, sizeof(VAR_13));
                                FUNC_10("Failed to invoke SSL_shutdown, ignoring: %s", VAR_13);
                        }
                }

                VAR_8->dnstls_events = 0;
                VAR_11 = FUNC_9(VAR_8);
                if (VAR_11 < 0)
                        return VAR_11;
        }

        return 0;
}
