
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {TYPE_1__* chunk_rel; } ;
struct TYPE_12__ {int parallel_aware; int parallel_workers; scalar_t__ parallel_safe; int param_info; int pathtarget; TYPE_1__* parent; int pathtype; } ;
struct TYPE_14__ {TYPE_10__ path; int custom_paths; int * methods; scalar_t__ flags; } ;
struct TYPE_16__ {int reverse; TYPE_2__ cpath; int compressed_pathkeys; TYPE_5__* info; } ;
struct TYPE_15__ {scalar_t__ parallel_safe; int param_info; } ;
struct TYPE_13__ {int reltarget; } ;
typedef int PlannerInfo ;
typedef TYPE_3__ Path ;
typedef TYPE_4__ DecompressChunkPath ;
typedef TYPE_5__ CompressionInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_10__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static DecompressChunkPath *
FUNC_4(PlannerInfo *VAR_4, CompressionInfo *VAR_5, int VAR_6,
        Path *VAR_7)
{
 DecompressChunkPath *VAR_8;

 VAR_8 = (DecompressChunkPath *) FUNC_3(sizeof(DecompressChunkPath), VAR_1);

 VAR_8->info = VAR_5;

 VAR_8->cpath.path.pathtype = VAR_2;
 VAR_8->cpath.path.parent = VAR_5->chunk_rel;
 VAR_8->cpath.path.pathtarget = VAR_5->chunk_rel->reltarget;

 VAR_8->cpath.path.param_info = VAR_7->param_info;

 VAR_8->cpath.flags = 0;
 VAR_8->cpath.methods = &VAR_3;

 FUNC_0(VAR_6 == 0 || VAR_7->parallel_safe);

 VAR_8->cpath.path.parallel_aware = 0;
 VAR_8->cpath.path.parallel_safe = VAR_7->parallel_safe;
 VAR_8->cpath.path.parallel_workers = VAR_6;

 VAR_8->cpath.custom_paths = FUNC_2(VAR_7);
 VAR_8->reverse = 0;
 VAR_8->compressed_pathkeys = VAR_0;
 FUNC_1(&VAR_8->cpath.path, VAR_7);

 return VAR_8;
}
