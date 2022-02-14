
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int pathtype; int type; } ;
struct TYPE_9__ {TYPE_2__ path; int custom_paths; int * methods; } ;
struct TYPE_11__ {TYPE_1__ cpath; int hypertable_relid; int hypertable_rti; int * mtpath; } ;
typedef TYPE_2__ Path ;
typedef int Oid ;
typedef int ModifyTablePath ;
typedef int Index ;
typedef TYPE_3__ ChunkDispatchPath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int) ;

Path *
FUNC_3(ModifyTablePath *VAR_3, Path *VAR_4, Index VAR_5,
         Oid VAR_6)
{
 ChunkDispatchPath *VAR_7 = (ChunkDispatchPath *) FUNC_2(sizeof(ChunkDispatchPath));

 FUNC_1(&VAR_7->cpath.path, VAR_4, sizeof(Path));
 VAR_7->cpath.path.type = VAR_0;
 VAR_7->cpath.path.pathtype = VAR_1;
 VAR_7->cpath.methods = &VAR_2;
 VAR_7->cpath.custom_paths = FUNC_0(VAR_4);
 VAR_7->mtpath = VAR_3;
 VAR_7->hypertable_rti = VAR_5;
 VAR_7->hypertable_relid = VAR_6;

 return &VAR_7->cpath.path;
}
