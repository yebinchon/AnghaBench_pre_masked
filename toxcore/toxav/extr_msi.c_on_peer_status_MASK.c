
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int mutex; } ;
typedef int Messenger ;
typedef TYPE_1__ MSISession ;
typedef int MSICall ;


 int FUNC_0 (char*,int ) ;
 int * FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(Messenger *VAR_1, uint32_t VAR_2, uint8_t VAR_3, void *VAR_4)
{
    (void)VAR_1;
    MSISession *VAR_5 = VAR_4;

    switch (VAR_3) {
        case 0: {
            FUNC_0("Friend %d is now offline", VAR_2);

            FUNC_4(VAR_5->mutex);
            MSICall *VAR_6 = FUNC_1(VAR_5, VAR_2);

            if (VAR_6 == ((void*)0)) {
                FUNC_5(VAR_5->mutex);
                return;
            }

            FUNC_2(VAR_6, VAR_0);
            FUNC_3(VAR_6);
            FUNC_5(VAR_5->mutex);
        }
        break;

        default:
            break;
    }
}
