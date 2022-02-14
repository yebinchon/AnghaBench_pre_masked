
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int shutdown; int handshake; TYPE_2__* session; } ;
struct TYPE_10__ {void* dnstls_events; TYPE_1__ dnstls_data; struct TYPE_10__* encrypted; } ;
typedef TYPE_2__ DnsStream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ) ;

int FUNC_8(DnsStream *VAR_7, uint32_t VAR_8) {
        int VAR_9;

        FUNC_0(VAR_7);
        FUNC_0(VAR_7->encrypted);
        FUNC_0(VAR_7->dnstls_data.session);

        if (VAR_7->dnstls_data.shutdown) {
                VAR_9 = FUNC_2(VAR_7->dnstls_data.session, VAR_6);
                if (VAR_9 == VAR_5) {
                        VAR_7->dnstls_events = FUNC_5(VAR_7->dnstls_data.session) == 1 ? VAR_4 : VAR_3;
                        return -VAR_1;
                } else if (VAR_9 < 0)
                        FUNC_7("Failed to invoke gnutls_bye: %s", FUNC_6(VAR_9));

                VAR_7->dnstls_events = 0;
                VAR_7->dnstls_data.shutdown = 0;
                FUNC_1(VAR_7);
                return VAR_0;
        } else if (VAR_7->dnstls_data.handshake < 0) {
                VAR_7->dnstls_data.handshake = FUNC_4(VAR_7->dnstls_data.session);
                if (VAR_7->dnstls_data.handshake == VAR_5) {
                        VAR_7->dnstls_events = FUNC_5(VAR_7->dnstls_data.session) == 1 ? VAR_4 : VAR_3;
                        return -VAR_1;
                } else if (VAR_7->dnstls_data.handshake < 0) {
                        FUNC_7("Failed to invoke gnutls_handshake: %s", FUNC_6(VAR_7->dnstls_data.handshake));
                        if (FUNC_3(VAR_7->dnstls_data.handshake))
                                return -VAR_2;
                }

                VAR_7->dnstls_events = 0;
        }

        return 0;
}
