
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Var ;
typedef int TargetEntry ;
struct TYPE_9__ {int varattno_map; TYPE_2__* info; } ;
struct TYPE_8__ {int relid; } ;
struct TYPE_7__ {TYPE_1__* compressed_rel; TYPE_3__* compressed_rte; } ;
struct TYPE_6__ {int relid; } ;
typedef int Expr ;
typedef TYPE_4__ DecompressChunkPath ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (int *,int,int *,int) ;
 int * FUNC_6 (int ,scalar_t__,scalar_t__,int,int ,int ) ;

__attribute__((used)) static TargetEntry *
FUNC_7(DecompressChunkPath *VAR_3, char *VAR_4, int VAR_5,
           int VAR_6)
{
 Var *VAR_7;
 AttrNumber VAR_8 = FUNC_2(VAR_3->info->compressed_rte->relid, VAR_4);
 if (VAR_8 == VAR_2)
  FUNC_1(VAR_0, "lookup failed for column \"%s\"", VAR_4);






 FUNC_0(FUNC_3(VAR_3->info->compressed_rte->relid, VAR_8) == VAR_1);
 VAR_7 = FUNC_6(VAR_3->info->compressed_rel->relid, VAR_8, VAR_1, -1, 0, 0);
 VAR_3->varattno_map = FUNC_4(VAR_3->varattno_map, VAR_5);

 return FUNC_5((Expr *) VAR_7, VAR_6, ((void*)0), 0);
}
