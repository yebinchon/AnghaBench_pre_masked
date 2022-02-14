
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int id; } ;
struct TYPE_17__ {TYPE_1__ fd; int constraints; } ;
struct TYPE_16__ {int early_abort; } ;
struct TYPE_15__ {int num_dimensions; } ;
typedef int Point ;
typedef TYPE_2__ Hyperspace ;
typedef TYPE_3__ ChunkScanCtx ;
typedef TYPE_4__ Chunk ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_5 (int ,int ,int ) ;

Chunk *
FUNC_6(Hyperspace *VAR_1, Point *VAR_2)
{
 Chunk *VAR_3;
 ChunkScanCtx VAR_4;


 FUNC_4(&VAR_4, VAR_1, VAR_2);


 VAR_4.early_abort = 1;


 FUNC_1(&VAR_4, VAR_2);


 VAR_3 = FUNC_3(&VAR_4);

 FUNC_2(&VAR_4);

 if (((void*)0) != VAR_3)
 {

  FUNC_0(VAR_3, 0);






  VAR_3->constraints = FUNC_5(VAR_3->fd.id,
                  VAR_1->num_dimensions,
                  VAR_0);
 }

 return VAR_3;
}
