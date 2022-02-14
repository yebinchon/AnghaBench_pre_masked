
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_23__ {int num_tablespaces; int * tablespaces; } ;
typedef TYPE_4__ Tablespaces ;
typedef int Tablespace ;
struct TYPE_28__ {int cube; } ;
struct TYPE_21__ {scalar_t__ num_slices; int id; } ;
struct TYPE_27__ {TYPE_2__ fd; } ;
struct TYPE_22__ {int id; } ;
struct TYPE_26__ {TYPE_3__ fd; } ;
struct TYPE_25__ {scalar_t__ num_slices; } ;
struct TYPE_20__ {int id; } ;
struct TYPE_24__ {int space; TYPE_1__ fd; } ;
typedef TYPE_5__ Hypertable ;
typedef TYPE_6__ DimensionVec ;
typedef TYPE_7__ DimensionSlice ;
typedef TYPE_8__ Dimension ;
typedef TYPE_9__ Chunk ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 TYPE_8__* FUNC_2 (int ,int ) ;
 TYPE_8__* FUNC_3 (int ,int ) ;
 TYPE_6__* FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 TYPE_7__* FUNC_6 (int ,int ) ;
 TYPE_4__* FUNC_7 (int ) ;

Tablespace *
FUNC_8(Hypertable *VAR_0, Chunk *VAR_1)
{
 Dimension *VAR_2;
 DimensionVec *VAR_3;
 DimensionSlice *VAR_4;
 Tablespaces *VAR_5 = FUNC_7(VAR_0->fd.id);
 int VAR_6 = 0;

 if (((void*)0) == VAR_5 || VAR_5->num_tablespaces == 0)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0->space, 0);

 if (((void*)0) == VAR_2)
  VAR_2 = FUNC_3(VAR_0->space, 0);

 FUNC_0(((void*)0) != VAR_2 && (FUNC_1(VAR_2) || VAR_2->fd.num_slices > 0));

 VAR_3 = FUNC_4(VAR_2);

 FUNC_0(((void*)0) != VAR_3 && (FUNC_1(VAR_2) || VAR_3->num_slices > 0));

 VAR_4 = FUNC_6(VAR_1->cube, VAR_2->fd.id);

 FUNC_0(((void*)0) != VAR_4);





 VAR_6 = FUNC_5(VAR_3, VAR_4->fd.id);

 FUNC_0(VAR_6 >= 0);


 return &VAR_5->tablespaces[VAR_6 % VAR_5->num_tablespaces];
}
