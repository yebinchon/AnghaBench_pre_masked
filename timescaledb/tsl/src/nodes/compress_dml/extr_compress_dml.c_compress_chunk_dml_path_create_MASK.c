
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int pathtarget; int parent; int pathtype; int type; } ;
struct TYPE_9__ {TYPE_2__ path; int custom_paths; int * methods; } ;
struct TYPE_11__ {TYPE_1__ cpath; int chunk_relid; } ;
typedef TYPE_2__ Path ;
typedef int Oid ;
typedef TYPE_3__ CompressChunkDmlPath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static Path *
FUNC_3(Path *VAR_3, Oid VAR_4)
{
 CompressChunkDmlPath *VAR_5 = (CompressChunkDmlPath *) FUNC_2(sizeof(CompressChunkDmlPath));

 FUNC_1(&VAR_5->cpath.path, VAR_3, sizeof(Path));
 VAR_5->cpath.path.type = VAR_0;
 VAR_5->cpath.path.pathtype = VAR_1;
 VAR_5->cpath.path.parent = VAR_3->parent;
 VAR_5->cpath.path.pathtarget = VAR_3->pathtarget;

 VAR_5->cpath.methods = &VAR_2;
 VAR_5->cpath.custom_paths = FUNC_0(VAR_3);
 VAR_5->chunk_relid = VAR_4;

 return &VAR_5->cpath.path;
}
