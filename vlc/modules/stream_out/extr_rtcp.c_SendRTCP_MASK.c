
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {int packets; int bytes; int counter; int length; int handle; int * payload; } ;
typedef TYPE_1__ rtcp_sender_t ;
struct TYPE_6__ {int i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_2__ block_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ,int *,int,int ) ;

void FUNC_6 (rtcp_sender_t *restrict VAR_0, const block_t *VAR_1)
{
    if ((VAR_0 == ((void*)0))
     || (VAR_1->i_buffer < 12))
        return;


    VAR_0->packets++;
    VAR_0->bytes += VAR_1->i_buffer;
    VAR_0->counter += VAR_1->i_buffer;


    if ((VAR_0->counter / 80) < VAR_0->length)
        return;

    uint8_t *VAR_2 = VAR_0->payload;
    uint32_t VAR_3 = FUNC_0 (VAR_2 + 8);
    uint64_t VAR_4 = FUNC_1 ();
    if ((VAR_4 >> 32) < (VAR_3 + 5))
        return;

    FUNC_4 (VAR_2 + 4, VAR_1->p_buffer + 8, 4);
    FUNC_3 (VAR_2 + 8, VAR_4);
    FUNC_4 (VAR_2 + 16, VAR_1->p_buffer + 4, 4);
    FUNC_2 (VAR_2 + 20, VAR_0->packets);
    FUNC_2 (VAR_2 + 24, VAR_0->bytes);
    FUNC_4 (VAR_2 + 28 + 4, VAR_1->p_buffer + 8, 4);

    if (FUNC_5 (VAR_0->handle, VAR_2, VAR_0->length, 0) == (ssize_t)VAR_0->length)
        VAR_0->counter = 0;
}
