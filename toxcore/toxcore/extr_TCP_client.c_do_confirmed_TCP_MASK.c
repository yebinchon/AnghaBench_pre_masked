
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int packet ;
struct TYPE_7__ {void* status; int recv_nonce; int shared_key; int next_packet_length; int sock; int last_pinged; scalar_t__ ping_id; scalar_t__ ping_request_id; } ;
typedef TYPE_1__ TCP_Client_Connection ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int *,int ,int ,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(TCP_Client_Connection *VAR_4)
{
    FUNC_4(VAR_4);
    FUNC_6(VAR_4);
    FUNC_5(VAR_4);

    uint8_t VAR_5[VAR_0];
    int VAR_6;

    if (FUNC_1(VAR_4->last_pinged, VAR_2)) {
        uint64_t VAR_7 = FUNC_2();

        if (!VAR_7)
            ++VAR_7;

        VAR_4->ping_request_id = VAR_4->ping_id = VAR_7;
        FUNC_5(VAR_4);
        VAR_4->last_pinged = FUNC_7();
    }

    if (VAR_4->ping_id && FUNC_1(VAR_4->last_pinged, VAR_3)) {
        VAR_4->status = VAR_1;
        return 0;
    }

    while ((VAR_6 = FUNC_3(VAR_4->sock, &VAR_4->next_packet_length, VAR_4->shared_key,
                  VAR_4->recv_nonce, VAR_5, sizeof(VAR_5)))) {
        if (VAR_6 == -1) {
            VAR_4->status = VAR_1;
            break;
        }

        if (FUNC_0(VAR_4, VAR_5, VAR_6) == -1) {
            VAR_4->status = VAR_1;
            break;
        }
    }

    return 0;
}
