
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pt; } ;
struct RTPMessage {TYPE_1__ header; } ;
struct TYPE_4__ {int queue_mutex; int j_buf; } ;
typedef TYPE_2__ ACSession ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct RTPMessage*) ;
 int FUNC_2 (int ,struct RTPMessage*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

int FUNC_5(void *VAR_1, struct RTPMessage *VAR_2)
{
    if (!VAR_1 || !VAR_2)
        return -1;

    if ((VAR_2->header.pt & 0x7f) == (VAR_0 + 2) % 128) {
        FUNC_0("Got dummy!");
        FUNC_1(VAR_2);
        return 0;
    }

    if ((VAR_2->header.pt & 0x7f) != VAR_0 % 128) {
        FUNC_0("Invalid payload type!");
        FUNC_1(VAR_2);
        return -1;
    }

    ACSession *VAR_3 = VAR_1;

    FUNC_3(VAR_3->queue_mutex);
    int VAR_4 = FUNC_2(VAR_3->j_buf, VAR_2);
    FUNC_4(VAR_3->queue_mutex);

    if (VAR_4 == -1) {
        FUNC_0("Could not queue the message!");
        FUNC_1(VAR_2);
        return -1;
    }

    return 0;
}
