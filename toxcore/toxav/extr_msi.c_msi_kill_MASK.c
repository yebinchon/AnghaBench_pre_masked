
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct Messenger {int dummy; } ;
struct TYPE_10__ {struct TYPE_10__* next; int friend_number; } ;
struct TYPE_9__ {int mutex; scalar_t__ messenger; int calls_head; scalar_t__ calls; } ;
typedef TYPE_1__ MSISession ;
typedef int MSIMessage ;
typedef TYPE_2__ MSICall ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct Messenger*,int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;
 int FUNC_10 (scalar_t__,int ,int *) ;

int FUNC_11 (MSISession *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_1("Tried to terminate non-existing session");
        return -1;
    }

    FUNC_5((struct Messenger *) VAR_1->messenger, ((void*)0), ((void*)0));

    if (FUNC_8(VAR_1->mutex) != 0) {
        FUNC_1 ("Failed to aquire lock on msi mutex");
        return -1;
    }

    if (VAR_1->calls) {
        MSIMessage VAR_2;
        FUNC_6(&VAR_2, VAR_0);

        MSICall *VAR_3 = FUNC_3(VAR_1, VAR_1->calls_head);

        while (VAR_3) {
            FUNC_10(VAR_1->messenger, VAR_3->friend_number, &VAR_2);
            MSICall *VAR_4 = VAR_3;
            VAR_3 = VAR_3->next;
            FUNC_4(VAR_4);
        }
    }

    FUNC_9(VAR_1->mutex);
    FUNC_7(VAR_1->mutex);

    FUNC_0("Terminated session: %p", VAR_1);
    FUNC_2 (VAR_1);
    return 0;
}
