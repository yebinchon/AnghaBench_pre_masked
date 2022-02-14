
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {int* payload; int handle; scalar_t__ length; } ;
typedef TYPE_1__ rtcp_sender_t ;


 int FUNC_0 () ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*,scalar_t__,int ) ;

void FUNC_7 (rtcp_sender_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    uint8_t *VAR_1 = VAR_0->payload;
    uint64_t VAR_2 = FUNC_0 ();
    FUNC_1 (VAR_1 + 8, VAR_2);


    VAR_1 += VAR_0->length;
    VAR_1[0] = (2 << 6) | 1;
    VAR_1[1] = 203;
    FUNC_2 (VAR_1 + 2, 1);
    FUNC_4 (VAR_1 + 4, VAR_0->payload + 4, 4);
    VAR_0->length += 8;



    FUNC_6 (VAR_0->handle, VAR_0->payload, VAR_0->length, 0);
    FUNC_5 (VAR_0->handle);
    FUNC_3 (VAR_0);
}
