
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_13__ {scalar_t__ handshake; int shutdown; TYPE_4__* session; } ;
struct TYPE_14__ {TYPE_3__ dnstls_data; TYPE_2__* server; struct TYPE_14__* encrypted; } ;
struct TYPE_11__ {TYPE_6__ session_data; } ;
struct TYPE_12__ {TYPE_1__ dnstls_data; } ;
typedef TYPE_4__ DnsStream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7(DnsStream *VAR_5, int VAR_6) {
        int VAR_7;

        FUNC_1(VAR_5);
        FUNC_1(VAR_5->encrypted);
        FUNC_1(VAR_5->dnstls_data.session);


        if (VAR_5->server && VAR_5->server->dnstls_data.session_data.size == 0 && VAR_5->dnstls_data.handshake == VAR_3)
                FUNC_4(VAR_5->dnstls_data.session, &VAR_5->server->dnstls_data.session_data);

        if (FUNC_0(VAR_6, VAR_1, 0)) {
                VAR_7 = FUNC_3(VAR_5->dnstls_data.session, VAR_4);
                if (VAR_7 == VAR_2) {
                        if (!VAR_5->dnstls_data.shutdown) {
                                VAR_5->dnstls_data.shutdown = 1;
                                FUNC_2(VAR_5);
                                return -VAR_0;
                        }
                } else if (VAR_7 < 0)
                        FUNC_6("Failed to invoke gnutls_bye: %s", FUNC_5(VAR_7));
        }

        return 0;
}
