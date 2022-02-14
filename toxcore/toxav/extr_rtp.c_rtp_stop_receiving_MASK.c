
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int payload_type; int friend_number; int m; } ;
typedef TYPE_1__ RTPSession ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;

int FUNC_2(RTPSession *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return -1;

    FUNC_1(VAR_0->m, VAR_0->friend_number, VAR_0->payload_type, ((void*)0), ((void*)0));

    FUNC_0("Stopped receiving on session: %p", VAR_0);
    return 0;
}
