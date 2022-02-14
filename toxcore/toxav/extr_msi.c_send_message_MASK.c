
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int cast ;
struct TYPE_8__ {scalar_t__ value; scalar_t__ exists; } ;
struct TYPE_7__ {scalar_t__ value; scalar_t__ exists; } ;
struct TYPE_6__ {scalar_t__ value; scalar_t__ exists; } ;
struct TYPE_9__ {TYPE_3__ capabilities; TYPE_2__ error; TYPE_1__ request; } ;
typedef int Messenger ;
typedef TYPE_4__ MSIMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_4 (int ,scalar_t__*,scalar_t__*,int,scalar_t__*) ;

int FUNC_5 (Messenger *VAR_4, uint32_t VAR_5, const MSIMessage *VAR_6)
{

    FUNC_2(VAR_4);

    uint8_t VAR_7 [VAR_3];

    uint8_t *VAR_8 = VAR_7;
    uint16_t VAR_9 = 0;

    if (VAR_6->request.exists) {
        uint8_t VAR_10 = VAR_6->request.value;
        VAR_8 = FUNC_4(VAR_2, VAR_8, &VAR_10,
                                  sizeof(VAR_10), &VAR_9);
    } else {
        FUNC_0("Must have request field");
        return -1;
    }

    if (VAR_6->error.exists) {
        uint8_t VAR_11 = VAR_6->error.value;
        VAR_8 = FUNC_4(VAR_1, VAR_8, &VAR_11,
                                  sizeof(VAR_11), &VAR_9);
    }

    if (VAR_6->capabilities.exists) {
        VAR_8 = FUNC_4(VAR_0, VAR_8, &VAR_6->capabilities.value,
                                  sizeof(VAR_6->capabilities.value), &VAR_9);
    }

    if (VAR_8 == VAR_7) {
        FUNC_1("Parsing message failed; empty message");
        return -1;
    }

    *VAR_8 = 0;
    VAR_9 ++;

    if (FUNC_3(VAR_4, VAR_5, VAR_7, VAR_9)) {
        FUNC_0("Sent message");
        return 0;
    }

    return -1;
}
