
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {scalar_t__ atttypid; scalar_t__ atttypmod; scalar_t__ attcollation; int attname; scalar_t__ attisdropped; } ;
struct TYPE_6__ {int natts; } ;
typedef scalar_t__ Relation ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int Index ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int AttrNumber ;


 int VAR_0 ;
 int * VAR_1 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,char*,int ) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (char*,char*) ;

void
FUNC_8(Relation VAR_2, Relation VAR_3, Index VAR_4,
        List **VAR_5)
{
 List *VAR_6 = VAR_1;
 TupleDesc VAR_7 = FUNC_1(VAR_2);
 TupleDesc VAR_8 = FUNC_1(VAR_3);
 int VAR_9 = VAR_7->natts;
 int VAR_10 = VAR_8->natts;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
 {
  Form_pg_attribute VAR_12;
  char *VAR_13;
  Oid VAR_14;
  int32 VAR_15;
  Oid VAR_16;
  int VAR_17;

  VAR_12 = FUNC_3(VAR_7, VAR_11);
  if (VAR_12->attisdropped)
  {

   VAR_6 = FUNC_5(VAR_6, ((void*)0));
   continue;
  }
  VAR_13 = FUNC_0(VAR_12->attname);
  VAR_14 = VAR_12->atttypid;
  VAR_15 = VAR_12->atttypmod;
  VAR_16 = VAR_12->attcollation;





  if (VAR_2 == VAR_3)
  {
   VAR_6 = FUNC_5(VAR_6,
         FUNC_6(VAR_4,
           (AttrNumber)(VAR_11 + 1),
           VAR_14,
           VAR_15,
           VAR_16,
           0));
   continue;
  }
  if (VAR_11 < VAR_10 && (VAR_12 = FUNC_3(VAR_8, VAR_11)) != ((void*)0) &&
   !VAR_12->attisdropped && FUNC_7(VAR_13, FUNC_0(VAR_12->attname)) == 0)
   VAR_17 = VAR_11;
  else
  {
   for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
   {
    VAR_12 = FUNC_3(VAR_8, VAR_17);
    if (!VAR_12->attisdropped && FUNC_7(VAR_13, FUNC_0(VAR_12->attname)) == 0)
     break;
   }
   if (VAR_17 >= VAR_10)
    FUNC_4(VAR_0,
      "could not find inherited attribute \"%s\" of relation \"%s\"",
      VAR_13,
      FUNC_2(VAR_3));
  }


  if (VAR_14 != VAR_12->atttypid || VAR_15 != VAR_12->atttypmod)
   FUNC_4(VAR_0,
     "attribute \"%s\" of relation \"%s\" does not match parent's type",
     VAR_13,
     FUNC_2(VAR_3));
  if (VAR_16 != VAR_12->attcollation)
   FUNC_4(VAR_0,
     "attribute \"%s\" of relation \"%s\" does not match parent's collation",
     VAR_13,
     FUNC_2(VAR_3));

  VAR_6 = FUNC_5(VAR_6,
        FUNC_6(VAR_4,
          (AttrNumber)(VAR_17 + 1),
          VAR_14,
          VAR_15,
          VAR_16,
          0));
 }

 *VAR_5 = VAR_6;
}
