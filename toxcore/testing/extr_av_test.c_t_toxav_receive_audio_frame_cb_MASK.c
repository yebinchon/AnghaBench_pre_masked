
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_5__ {size_t size; int data; } ;
typedef TYPE_1__ frame ;
typedef int ToxAV ;
struct TYPE_6__ {int arb_mutex; int arb; } ;
typedef TYPE_2__ CallControl ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,int const*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;

void FUNC_6(ToxAV *VAR_0, uint32_t VAR_1,
                                    int16_t const *VAR_2,
                                    size_t VAR_3,
                                    uint8_t VAR_4,
                                    uint32_t VAR_5,
                                    void *VAR_6)
{
    CallControl *VAR_7 = VAR_6;
    frame *VAR_8 = FUNC_1(sizeof(uint16_t) + VAR_3 * sizeof(int16_t) * VAR_4);
    FUNC_2(VAR_8->data, VAR_2, VAR_3 * sizeof(int16_t) * VAR_4);
    VAR_8->size = VAR_3;

    FUNC_3(VAR_7->arb_mutex);
    FUNC_0(FUNC_5(VAR_7->arb, VAR_8));
    FUNC_4(VAR_7->arb_mutex);
}
