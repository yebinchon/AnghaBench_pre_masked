
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int exists; int value; } ;
struct TYPE_6__ {TYPE_1__ error; } ;
typedef int Messenger ;
typedef TYPE_2__ MSIMessage ;
typedef int MSIError ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,TYPE_2__*) ;

int FUNC_4 (Messenger *VAR_1, uint32_t VAR_2, MSIError VAR_3)
{

    FUNC_1(VAR_1);

    FUNC_0("Sending error: %d to friend: %d", VAR_3, VAR_2);

    MSIMessage VAR_4;
    FUNC_2(&VAR_4, VAR_0);

    VAR_4.error.exists = 1;
    VAR_4.error.value = VAR_3;

    FUNC_3 (VAR_1, VAR_2, &VAR_4);
    return 0;
}
