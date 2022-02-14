
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ last_packet_length; int last_packet_sent; int last_packet; int sock; } ;
typedef TYPE_1__ TCP_Client_Connection ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_1(TCP_Client_Connection *VAR_1)
{
    if (VAR_1->last_packet_length == 0) {
        return 0;
    }

    uint16_t VAR_2 = VAR_1->last_packet_length - VAR_1->last_packet_sent;
    int VAR_3 = FUNC_0(VAR_1->sock, VAR_1->last_packet + VAR_1->last_packet_sent, VAR_2, VAR_0);

    if (VAR_3 <= 0)
        return -1;

    if (VAR_3 == VAR_2) {
        VAR_1->last_packet_length = 0;
        VAR_1->last_packet_sent = 0;
        return 0;
    }

    VAR_1->last_packet_sent += VAR_3;
    return -1;
}
