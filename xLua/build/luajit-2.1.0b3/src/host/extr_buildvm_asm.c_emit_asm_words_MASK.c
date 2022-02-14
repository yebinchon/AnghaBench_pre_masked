
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ BuildCtx ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char,int ) ;

__attribute__((used)) static void FUNC_3(BuildCtx *VAR_0, uint8_t *VAR_1, int VAR_2)
{
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4) {
    uint32_t VAR_4 = *(uint32_t *)(VAR_1+VAR_3);



    if ((VAR_3 & 15) == 0)
      FUNC_0(VAR_0->fp, "\t.long 0x%08x", VAR_4);
    else
      FUNC_0(VAR_0->fp, ",0x%08x", VAR_4);
    if ((VAR_3 & 15) == 12) FUNC_2('\n', VAR_0->fp);
  }
  if ((VAR_2 & 15) != 0) FUNC_2('\n', VAR_0->fp);
}
