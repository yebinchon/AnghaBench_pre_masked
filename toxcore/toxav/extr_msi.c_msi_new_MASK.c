
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * messenger; int mutex; } ;
typedef int Messenger ;
typedef TYPE_1__ MSISession ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 int VAR_1 ;

MSISession *FUNC_7 (Messenger *VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        FUNC_1("Could not init session on empty messenger!");
        return ((void*)0);
    }

    MSISession *VAR_3 = FUNC_2 (sizeof (MSISession), 1);

    if (VAR_3 == ((void*)0)) {
        FUNC_1("Allocation failed! Program might misbehave!");
        return ((void*)0);
    }

    if (FUNC_3(VAR_3->mutex) != 0) {
        FUNC_1("Failed to init mutex! Program might misbehave");
        FUNC_4(VAR_3);
        return ((void*)0);
    }

    VAR_3->messenger = VAR_2;

    FUNC_6(VAR_2, VAR_0, VAR_3);


    FUNC_5(VAR_2, VAR_1, VAR_3);

    FUNC_0("New msi session: %p ", VAR_3);
    return VAR_3;
}
