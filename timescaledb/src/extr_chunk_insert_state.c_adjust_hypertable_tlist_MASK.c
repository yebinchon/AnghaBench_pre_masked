
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_11__ {int* attrMap; TYPE_1__* outdesc; } ;
typedef TYPE_2__ TupleConversionMap ;
struct TYPE_12__ {int resno; int resname; } ;
typedef TYPE_3__ TargetEntry ;
struct TYPE_13__ {int attisdropped; int attname; } ;
struct TYPE_10__ {int natts; } ;
typedef int List ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Expr ;
typedef int Datum ;
typedef int Const ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int * FUNC_6 (int ,int,int ,int,int ,int,int) ;
 TYPE_3__* FUNC_7 (int *,int,int ,int) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static List *
FUNC_10(List *VAR_5, TupleConversionMap *VAR_6)
{
 List *VAR_7 = VAR_4;
 TupleDesc VAR_8 = VAR_6->outdesc;
 AttrNumber *VAR_9 = VAR_6->attrMap;
 AttrNumber VAR_10;

 for (VAR_10 = 1; VAR_10 <= VAR_8->natts; VAR_10++)
 {
  Form_pg_attribute VAR_11 = FUNC_2(VAR_8, VAR_10 - 1);
  TargetEntry *VAR_12;

  if (VAR_9[VAR_10 - 1] != VAR_2)
  {
   FUNC_0(!VAR_11->attisdropped);





   VAR_12 = (TargetEntry *) FUNC_5(VAR_5, VAR_9[VAR_10 - 1] - 1);
   if (FUNC_8(&VAR_11->attname, VAR_12->resname) != 0)
    FUNC_3(VAR_0, "invalid translation of ON CONFLICT update statements");
   VAR_12->resno = VAR_10;
  }
  else
  {
   Const *VAR_13;





   FUNC_0(VAR_11->attisdropped);
   VAR_13 = FUNC_6(VAR_1,
        -1,
        VAR_3,
        sizeof(int32),
        (Datum) 0,
        1,
        1 );
   VAR_12 = FUNC_7((Expr *) VAR_13,
          VAR_10,
          FUNC_9(FUNC_1(VAR_11->attname)),
          0);
  }
  VAR_7 = FUNC_4(VAR_7, VAR_12);
 }
 return VAR_7;
}
