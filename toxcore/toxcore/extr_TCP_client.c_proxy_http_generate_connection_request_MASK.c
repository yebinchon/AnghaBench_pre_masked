
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ip ;
struct TYPE_4__ {int port; int ip; } ;
struct TYPE_5__ {int last_packet_length; scalar_t__ last_packet_sent; scalar_t__ last_packet; TYPE_1__ ip_port; } ;
typedef TYPE_2__ TCP_Client_Connection ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int const,char*,char*,char*,int const,char*,char*,int const,char*) ;

__attribute__((used)) static int FUNC_3(TCP_Client_Connection *VAR_2)
{
    char VAR_3[] = "CONNECT ";
    char VAR_4[] = " HTTP/1.1\nHost: ";
    char VAR_5[] = "\r\n\r\n";

    char VAR_6[VAR_0];

    if (!FUNC_0(&VAR_2->ip_port.ip, VAR_6, sizeof(VAR_6))) {
        return 0;
    }

    const uint16_t VAR_7 = FUNC_1(VAR_2->ip_port.port);
    const int VAR_8 = FUNC_2((char *)VAR_2->last_packet, VAR_1, "%s%s:%hu%s%s:%hu%s", VAR_3, VAR_6, VAR_7, VAR_4,
                                 VAR_6, VAR_7, VAR_5);

    if (VAR_8 < 0 || VAR_1 < VAR_8) {
        return 0;
    }

    VAR_2->last_packet_length = VAR_8;
    VAR_2->last_packet_sent = 0;

    return 1;
}
