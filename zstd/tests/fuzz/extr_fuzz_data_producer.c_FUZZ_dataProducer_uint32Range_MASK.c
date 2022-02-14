
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ size; scalar_t__* data; } ;
typedef TYPE_1__ FUZZ_dataProducer_t ;


 int FUNC_0 (int) ;

uint32_t FUNC_1(FUZZ_dataProducer_t *VAR_0, uint32_t VAR_1,
                                  uint32_t VAR_2) {
    FUNC_0(VAR_1 <= VAR_2);

    uint32_t VAR_3 = VAR_2 - VAR_1;
    uint32_t VAR_4 = VAR_3;
    uint32_t VAR_5 = 0;

    while (VAR_4 > 0 && VAR_0->size > 0) {
      uint8_t VAR_6 = *(VAR_0->data + VAR_0->size - 1);
      VAR_0->size -= 1;
      VAR_5 = (VAR_5 << 8) | VAR_6;
      VAR_4 >>= 8;
    }

    if (VAR_3 == 0xffffffff) {
      return VAR_5;
    }

    return VAR_1 + VAR_5 % (VAR_3 + 1);
}
