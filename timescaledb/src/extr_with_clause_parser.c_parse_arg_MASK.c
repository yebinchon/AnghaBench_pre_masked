
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type_id; } ;
typedef TYPE_1__ WithClauseDefinition ;
struct TYPE_9__ {int defname; int defnamespace; int * arg; } ;
struct TYPE_8__ {int typname; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_type ;
typedef TYPE_3__ DefElem ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,char*,scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;
 char* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,char*,int ,int ,...) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ,int ,int ) ;
 int FUNC_16 (char*,int ,int ,...) ;
 int FUNC_17 (scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static Datum
FUNC_18(WithClauseDefinition VAR_4, DefElem *VAR_5)
{
 char *VAR_6;
 Datum VAR_7;
 Oid VAR_8;
 Oid VAR_9;

 if (!FUNC_6(VAR_4.type_id))
  FUNC_12(VAR_2, "argument \"%s.%s\" not implemented", VAR_5->defnamespace, VAR_5->defname);

 if (VAR_5->arg != ((void*)0))
  VAR_6 = FUNC_11(VAR_5);
 else if (VAR_4.type_id == VAR_0)


  VAR_6 = "true";
 else
  FUNC_13(VAR_2,
    (FUNC_14(VAR_1),
     FUNC_16("parameter \"%s.%s\" must have a value", VAR_5->defnamespace, VAR_5->defname)));

 FUNC_17(VAR_4.type_id, &VAR_8, &VAR_9);

 FUNC_0(FUNC_6(VAR_8));

 FUNC_9();
 {
  VAR_7 = FUNC_5(VAR_8, VAR_6, VAR_9, -1);
 }
 FUNC_7();
 {
  Form_pg_type VAR_10;
  HeapTuple VAR_11 = FUNC_10(VAR_3, FUNC_4(VAR_4.type_id));
  if (!FUNC_2(VAR_11))
   FUNC_12(VAR_2,
     "cache lookup failed for type of %s.%s '%u'",
     VAR_5->defnamespace,
     VAR_5->defname,
     VAR_4.type_id);

  VAR_10 = (Form_pg_type) FUNC_1(VAR_11);

  FUNC_13(VAR_2,
    (FUNC_14(VAR_1),
     FUNC_16("invalid value for %s.%s '%s'", VAR_5->defnamespace, VAR_5->defname, VAR_6),
     FUNC_15("%s.%s must be a valid %s",
       VAR_5->defnamespace,
       VAR_5->defname,
       FUNC_3(VAR_10->typname))));
 }
 FUNC_8();
 return VAR_7;
}
