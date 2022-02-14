
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pt; } ;
struct RTPMessage {TYPE_1__ header; } ;
struct TYPE_4__ {void* linfts; int lcfd; int queue_mutex; int vbuf_raw; } ;
typedef TYPE_2__ VCSession ;


 int FUNC_0 (char*) ;
 void* FUNC_1 () ;
 int FUNC_2 (struct RTPMessage*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct RTPMessage* FUNC_5 (int ,struct RTPMessage*) ;
 int VAR_0 ;

int FUNC_6(void *VAR_1, struct RTPMessage *VAR_2)
{



    if (!VAR_1 || !VAR_2)
        return -1;

    if (VAR_2->header.pt == (VAR_0 + 2) % 128) {
        FUNC_0("Got dummy!");
        FUNC_2(VAR_2);
        return 0;
    }

    if (VAR_2->header.pt != VAR_0 % 128) {
        FUNC_0("Invalid payload type!");
        FUNC_2(VAR_2);
        return -1;
    }

    VCSession *VAR_3 = VAR_1;

    FUNC_3(VAR_3->queue_mutex);
    FUNC_2(FUNC_5(VAR_3->vbuf_raw, VAR_2));
    {

        uint32_t VAR_4 = FUNC_1() - VAR_3->linfts;
        VAR_3->lcfd = VAR_4 > 100 ? VAR_3->lcfd : VAR_4;
        VAR_3->linfts = FUNC_1();
    }
    FUNC_4(VAR_3->queue_mutex);

    return 0;
}
