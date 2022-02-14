
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {double d; int u64; } ;
typedef TYPE_1__ U64double ;
struct TYPE_6__ {int* gen; int valid; } ;
typedef TYPE_2__ RandomState ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(RandomState *VAR_0, double VAR_1)
{
  uint32_t VAR_2 = 0x11090601;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
    U64double VAR_4;
    uint32_t VAR_5 = 1u << (VAR_2&255);
    VAR_2 >>= 8;
    VAR_4.d = VAR_1 = VAR_1 * 3.14159265358979323846 + 2.7182818284590452354;
    if (VAR_4.u64 < VAR_5) VAR_4.u64 += VAR_5;
    VAR_0->gen[VAR_3] = VAR_4.u64;
  }
  VAR_0->valid = 1;
  for (VAR_3 = 0; VAR_3 < 10; VAR_3++)
    FUNC_0(VAR_0);
}
