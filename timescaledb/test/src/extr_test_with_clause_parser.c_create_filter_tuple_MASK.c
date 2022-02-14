
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {int * arg; int * defname; int * defnamespace; } ;
struct TYPE_7__ {int natts; } ;
typedef int HeapTuple ;
typedef TYPE_2__ DefElem ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int *,int*) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static HeapTuple
FUNC_6(TupleDesc VAR_0, DefElem *VAR_1, bool VAR_2)
{
 Datum *VAR_3 = FUNC_5(sizeof(*VAR_3) * VAR_0->natts);
 bool *VAR_4 = FUNC_5(sizeof(*VAR_4) * VAR_0->natts);

 FUNC_0(VAR_0->natts >= 4);

 if (VAR_1->defnamespace != ((void*)0))
  VAR_3[0] = FUNC_2(VAR_1->defnamespace);
 else
  VAR_4[0] = 1;

 if (VAR_1->defname != ((void*)0))
  VAR_3[1] = FUNC_2(VAR_1->defname);
 else
  VAR_4[1] = 1;

 if (VAR_1->arg != ((void*)0))
  VAR_3[2] = FUNC_2(FUNC_3(VAR_1));
 else
  VAR_4[2] = 1;

 VAR_3[3] = FUNC_1(VAR_2);
 return FUNC_4(VAR_0, VAR_3, VAR_4);
}
