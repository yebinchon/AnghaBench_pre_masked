
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct RTPHeader {int ve; int pt; void* cpart; void* tlen; void* ssrc; void* timestamp; void* sequnum; scalar_t__ ma; scalar_t__ cc; scalar_t__ xe; scalar_t__ pe; } ;
typedef int rdata ;
struct TYPE_3__ {int payload_type; scalar_t__ sequnum; int friend_number; int m; int ssrc; } ;
typedef TYPE_1__ RTPSession ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int*,int const*,scalar_t__) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int ,int ,int*,scalar_t__) ;
 int FUNC_7 (int ) ;

int FUNC_8 (RTPSession *VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    if (!VAR_2) {
        FUNC_0("No session!");
        return -1;
    }

    uint8_t VAR_5[VAR_4 + sizeof(struct RTPHeader) + 1];
    FUNC_5(VAR_5, 0, sizeof(VAR_5));

    VAR_5[0] = VAR_2->payload_type;

    struct RTPHeader *VAR_6 = (struct RTPHeader *)(VAR_5 + 1);

    VAR_6->ve = 2;
    VAR_6->pe = 0;
    VAR_6->xe = 0;
    VAR_6->cc = 0;

    VAR_6->ma = 0;
    VAR_6->pt = VAR_2->payload_type % 128;

    VAR_6->sequnum = FUNC_3(VAR_2->sequnum);
    VAR_6->timestamp = FUNC_2(FUNC_1());
    VAR_6->ssrc = FUNC_2(VAR_2->ssrc);

    VAR_6->cpart = 0;
    VAR_6->tlen = FUNC_3(VAR_4);

    if (VAR_0 > VAR_4 + sizeof(struct RTPHeader) + 1) {






        FUNC_4(VAR_5 + 1 + sizeof(struct RTPHeader), VAR_3, VAR_4);

        if (-1 == FUNC_6(VAR_2->m, VAR_2->friend_number, VAR_5, sizeof(VAR_5)))
            FUNC_0("RTP send failed (len: %d)! std error: %s", sizeof(VAR_5), FUNC_7(VAR_1));
    } else {






        uint16_t VAR_7 = 0;
        uint16_t VAR_8 = VAR_0 - (sizeof(struct RTPHeader) + 1);

        while ((VAR_4 - VAR_7) + sizeof(struct RTPHeader) + 1 > VAR_0) {
            FUNC_4(VAR_5 + 1 + sizeof(struct RTPHeader), VAR_3 + VAR_7, VAR_8);

            if (-1 == FUNC_6(VAR_2->m, VAR_2->friend_number,
                                               VAR_5, VAR_8 + sizeof(struct RTPHeader) + 1))
                FUNC_0("RTP send failed (len: %d)! std error: %s",
                               VAR_8 + sizeof(struct RTPHeader) + 1, FUNC_7(VAR_1));

            VAR_7 += VAR_8;
            VAR_6->cpart = FUNC_3(VAR_7);
        }


        VAR_8 = VAR_4 - VAR_7;

        if (VAR_8) {
            FUNC_4(VAR_5 + 1 + sizeof(struct RTPHeader), VAR_3 + VAR_7, VAR_8);

            if (-1 == FUNC_6(VAR_2->m, VAR_2->friend_number, VAR_5,
                                               VAR_8 + sizeof(struct RTPHeader) + 1))
                FUNC_0("RTP send failed (len: %d)! std error: %s",
                               VAR_8 + sizeof(struct RTPHeader) + 1, FUNC_7(VAR_1));
        }
    }

    VAR_2->sequnum ++;
    return 0;
}
