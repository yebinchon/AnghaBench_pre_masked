
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int indisvalid; int indisclustered; int indisready; int indislive; } ;
struct TYPE_9__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef int IndexValidity ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_4 (int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static bool
FUNC_10(Oid VAR_4, IndexValidity VAR_5)
{
 Relation VAR_6;
 HeapTuple VAR_7;
 HeapTuple VAR_8;
 Form_pg_index VAR_9;
 bool VAR_10;


 VAR_6 = FUNC_9(VAR_2, VAR_3);

 VAR_7 = FUNC_5(VAR_1, FUNC_4(VAR_4));

 if (!FUNC_3(VAR_7))
  FUNC_6(VAR_0, "cache lookup failed when marking index %u", VAR_4);

 VAR_8 = FUNC_8(VAR_7);
 VAR_9 = (Form_pg_index) FUNC_2(VAR_8);

 VAR_10 = VAR_9->indisvalid;


 switch (VAR_5)
 {
  case 128:
   FUNC_0(VAR_9->indislive);
   FUNC_0(VAR_9->indisready);
   VAR_9->indisvalid = 1;
   break;
  case 129:
   VAR_9->indisvalid = 0;
   VAR_9->indisclustered = 0;
   break;
 }


 FUNC_1(VAR_6, &VAR_7->t_self, VAR_8);

 FUNC_7(VAR_6, VAR_3);
 return VAR_10;
}
