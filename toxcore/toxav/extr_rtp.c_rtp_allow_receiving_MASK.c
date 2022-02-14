
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int payload_type; int friend_number; int m; } ;
typedef TYPE_1__ RTPSession ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ,TYPE_1__*) ;

int FUNC_3(RTPSession *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return -1;

    if (FUNC_2(VAR_1->m, VAR_1->friend_number, VAR_1->payload_type,
                              VAR_0, VAR_1) == -1) {
        FUNC_1("Failed to register rtp receive handler");
        return -1;
    }

    FUNC_0("Started receiving on session: %p", VAR_1);
    return 0;
}
