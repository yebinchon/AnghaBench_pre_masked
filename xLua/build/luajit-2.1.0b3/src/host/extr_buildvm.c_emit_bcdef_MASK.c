
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int npc; int* bc_ofs; int fp; } ;
typedef TYPE_1__ BuildCtx ;


 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(BuildCtx *VAR_0)
{
  int VAR_1;
  FUNC_0(VAR_0->fp, "/* This is a generated file. DO NOT EDIT! */\n\n");
  FUNC_0(VAR_0->fp, "LJ_DATADEF const uint16_t lj_bc_ofs[] = {\n");
  for (VAR_1 = 0; VAR_1 < VAR_0->npc; VAR_1++) {
    if (VAR_1 != 0)
      FUNC_0(VAR_0->fp, ",\n");
    FUNC_0(VAR_0->fp, "%d", VAR_0->bc_ofs[VAR_1]);
  }
}
