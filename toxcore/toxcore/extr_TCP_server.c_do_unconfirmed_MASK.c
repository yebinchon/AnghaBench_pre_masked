
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int packet ;
struct TYPE_8__ {scalar_t__ status; int recv_nonce; int shared_key; int next_packet_length; int sock; } ;
struct TYPE_7__ {TYPE_2__* unconfirmed_connection_queue; } ;
typedef TYPE_1__ TCP_Server ;
typedef TYPE_2__ TCP_Secure_Connection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(TCP_Server *VAR_2, uint32_t VAR_3)
{
    TCP_Secure_Connection *VAR_4 = &VAR_2->unconfirmed_connection_queue[VAR_3];

    if (VAR_4->status != VAR_1)
        return -1;

    uint8_t VAR_5[VAR_0];
    int VAR_6 = FUNC_2(VAR_4->sock, &VAR_4->next_packet_length, VAR_4->shared_key, VAR_4->recv_nonce,
              VAR_5, sizeof(VAR_5));

    if (VAR_6 == 0) {
        return -1;
    } else if (VAR_6 == -1) {
        FUNC_1(VAR_4);
        return -1;
    } else {
        return FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6);
    }
}
