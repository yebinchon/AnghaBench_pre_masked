
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int value; } ;
struct TYPE_12__ {TYPE_1__ request; } ;
struct TYPE_11__ {int mutex; } ;
typedef int Messenger ;
typedef TYPE_2__ MSISession ;
typedef TYPE_3__ MSIMessage ;
typedef int MSICall ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;



 int FUNC_10 (int *,int ,int ) ;

void FUNC_11 (Messenger *VAR_3, uint32_t VAR_4, const uint8_t *VAR_5, uint16_t VAR_6, void *VAR_7)
{
    FUNC_0("Got msi message");

    MSISession *VAR_8 = VAR_7;
    MSIMessage VAR_9;

    if (FUNC_6 (&VAR_9, VAR_5, VAR_6) == -1) {
        FUNC_1("Error parsing message");
        FUNC_10(VAR_3, VAR_4, VAR_0);
        return;
    } else {
        FUNC_0("Successfully parsed message");
    }

    FUNC_8(VAR_8->mutex);
    MSICall *VAR_10 = FUNC_2(VAR_8, VAR_4);

    if (VAR_10 == ((void*)0)) {
        if (VAR_9.request.value != 130) {
            FUNC_10(VAR_3, VAR_4, VAR_1);
            FUNC_9(VAR_8->mutex);
            return;
        }

        VAR_10 = FUNC_7(VAR_8, VAR_4);

        if (VAR_10 == ((void*)0)) {
            FUNC_10(VAR_3, VAR_4, VAR_2);
            FUNC_9(VAR_8->mutex);
            return;
        }
    }

    switch (VAR_9.request.value) {
        case 130:
            FUNC_3(VAR_10, &VAR_9);
            break;

        case 128:
            FUNC_5(VAR_10, &VAR_9);
            break;

        case 129:
            FUNC_4(VAR_10, &VAR_9);
            break;
    }

    FUNC_9(VAR_8->mutex);
}
