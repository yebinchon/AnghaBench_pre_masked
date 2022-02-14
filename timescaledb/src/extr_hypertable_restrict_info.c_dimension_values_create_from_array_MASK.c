
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int consttype; int constvalue; } ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int DimensionValues ;
typedef int Datum ;
typedef TYPE_1__ Const ;
typedef int ArrayIterator ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int*) ;
 int * FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ) ;

__attribute__((used)) static DimensionValues *
FUNC_8(Const *VAR_3, bool VAR_4)
{
 ArrayIterator VAR_5 = FUNC_2(FUNC_0(VAR_3->constvalue), 0, ((void*)0));
 Datum VAR_6 = (Datum) ((void*)0);
 bool VAR_7;
 List *VAR_8 = VAR_2;
 Oid VAR_9;

 while (FUNC_3(VAR_5, &VAR_6, &VAR_7))
 {
  if (!VAR_7)
   VAR_8 = FUNC_7(VAR_8, FUNC_1(VAR_6));
 }


 VAR_9 = FUNC_6(VAR_3->consttype);
 if (VAR_9 == VAR_1)
  FUNC_5(VAR_0, "Couldn't get base element type from array type: %d", VAR_3->consttype);

 return FUNC_4(VAR_8, VAR_9, VAR_4);
}
