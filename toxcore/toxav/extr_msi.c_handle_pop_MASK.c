
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int state; int error; int friend_number; int session; } ;
struct TYPE_9__ {int value; scalar_t__ exists; } ;
struct TYPE_10__ {TYPE_1__ error; } ;
typedef TYPE_2__ MSIMessage ;
typedef TYPE_3__ MSICall ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;




 int VAR_0 ;
 int VAR_1 ;

void FUNC_8 (MSICall *VAR_2, const MSIMessage *VAR_3)
{
    FUNC_5(VAR_2);

    FUNC_0("Session: %p Handling 'pop', friend id: %d", VAR_2->session, VAR_2->friend_number);



    if (VAR_3->error.exists) {
        FUNC_3("Friend detected an error: %d", VAR_3->error.value);
        VAR_2->error = VAR_3->error.value;
        FUNC_6(VAR_2, VAR_1);

    } else switch (VAR_2->state) {
            case 130: {
                FUNC_1("Handling what should be impossible case");
                FUNC_4();
            }
            break;

            case 131: {

                FUNC_2("Friend hung up on us");
                FUNC_6(VAR_2, VAR_0);
            }
            break;

            case 128: {

                FUNC_2("Friend rejected our call");
                FUNC_6(VAR_2, VAR_0);
            }
            break;

            case 129: {

                FUNC_2("Friend canceled call invite");
                FUNC_6(VAR_2, VAR_0);
            }
            break;
        }

    FUNC_7 (VAR_2);
}
