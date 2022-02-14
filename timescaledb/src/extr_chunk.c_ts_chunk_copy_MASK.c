
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * cube; int * constraints; } ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

Chunk *
FUNC_4(Chunk *VAR_0)
{
 Chunk *VAR_1;

 VAR_1 = FUNC_1(sizeof(Chunk));
 FUNC_0(VAR_1, VAR_0, sizeof(Chunk));

 if (((void*)0) != VAR_0->constraints)
  VAR_1->constraints = FUNC_2(VAR_0->constraints);

 if (((void*)0) != VAR_0->cube)
  VAR_1->cube = FUNC_3(VAR_0->cube);

 return VAR_1;
}
