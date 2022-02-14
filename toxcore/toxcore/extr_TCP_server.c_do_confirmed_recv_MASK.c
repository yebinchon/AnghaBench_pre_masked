
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int packet ;
struct TYPE_7__ {int recv_nonce; int shared_key; int next_packet_length; int sock; } ;
struct TYPE_6__ {TYPE_2__* accepted_connection_array; } ;
typedef TYPE_1__ TCP_Server ;
typedef TYPE_2__ TCP_Secure_Connection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t,int *,int) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int ,int *,int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_3(TCP_Server *VAR_1, uint32_t VAR_2)
{
    TCP_Secure_Connection *VAR_3 = &VAR_1->accepted_connection_array[VAR_2];

    uint8_t VAR_4[VAR_0];
    int VAR_5;

    while ((VAR_5 = FUNC_2(VAR_3->sock, &VAR_3->next_packet_length, VAR_3->shared_key,
                  VAR_3->recv_nonce, VAR_4, sizeof(VAR_4)))) {
        if (VAR_5 == -1) {
            FUNC_1(VAR_1, VAR_2);
            break;
        }

        if (FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5) == -1) {
            FUNC_1(VAR_1, VAR_2);
            break;
        }
    }
}
