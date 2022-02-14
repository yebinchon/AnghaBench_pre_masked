
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int sock_t ;
struct TYPE_6__ {scalar_t__ status; scalar_t__ next_packet_length; int sock; } ;
struct TYPE_5__ {size_t incomming_connection_queue_index; TYPE_2__* incomming_connection_queue; } ;
typedef TYPE_1__ TCP_Server ;
typedef TYPE_2__ TCP_Secure_Connection ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(TCP_Server *VAR_3, sock_t VAR_4)
{
    if (!FUNC_4(VAR_4))
        return -1;

    if (!FUNC_2(VAR_4)) {
        FUNC_1(VAR_4);
        return -1;
    }

    if (!FUNC_3(VAR_4)) {
        FUNC_1(VAR_4);
        return -1;
    }

    uint16_t VAR_5 = VAR_3->incomming_connection_queue_index % VAR_0;

    TCP_Secure_Connection *VAR_6 = &VAR_3->incomming_connection_queue[VAR_5];

    if (VAR_6->status != VAR_2)
        FUNC_0(VAR_6);

    VAR_6->status = VAR_1;
    VAR_6->sock = VAR_4;
    VAR_6->next_packet_length = 0;

    ++VAR_3->incomming_connection_queue_index;
    return VAR_5;
}
