
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int numline; size_t sizebc; } ;
typedef size_t MSize ;
typedef int LexState ;
typedef TYPE_1__ GCproto ;


 int FUNC_0 (int *,void*,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(LexState *VAR_0, GCproto *VAR_1, MSize VAR_2)
{
  void *VAR_3 = (void *)FUNC_3(VAR_1);
  FUNC_0(VAR_0, VAR_3, VAR_2);

  if (FUNC_1(VAR_0) && VAR_1->numline >= 256) {
    MSize VAR_4, VAR_5 = VAR_1->sizebc-1;
    if (VAR_1->numline < 65536) {
      uint16_t *VAR_6 = (uint16_t *)VAR_3;
      for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) VAR_6[VAR_4] = (uint16_t)((VAR_6[VAR_4] >> 8)|(VAR_6[VAR_4] << 8));
    } else {
      uint32_t *VAR_7 = (uint32_t *)VAR_3;
      for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) VAR_7[VAR_4] = FUNC_2(VAR_7[VAR_4]);
    }
  }
}
