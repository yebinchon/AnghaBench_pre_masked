
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int fp; } ;
typedef TYPE_1__ BuildCtx ;


 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(BuildCtx *VAR_0, uint32_t *VAR_1, uint32_t VAR_2)
{
  uint32_t VAR_3;
  FUNC_0(VAR_0->fp, "static const uint32_t fold_hash[%d] = {\n0x%08x",
   VAR_2+1, VAR_1[0]);
  for (VAR_3 = 1; VAR_3 < VAR_2+1; VAR_3++)
    FUNC_0(VAR_0->fp, ",\n0x%08x", VAR_1[VAR_3]);
  FUNC_0(VAR_0->fp, "\n};\n\n");
}
