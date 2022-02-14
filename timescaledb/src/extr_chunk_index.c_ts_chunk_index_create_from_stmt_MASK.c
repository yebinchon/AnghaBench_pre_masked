
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {int * idxname; } ;
struct TYPE_6__ {int objectId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__ IndexStmt ;


 TYPE_1__ FUNC_0 (int ,TYPE_2__*,int ,int,int,int,int) ;
 int VAR_0 ;
 int * FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int ,char*,int ,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

Oid
FUNC_5(IndexStmt *VAR_1, int32 VAR_2, Oid VAR_3,
        int32 VAR_4, Oid VAR_5)
{
 ObjectAddress VAR_6;
 char *VAR_7 = FUNC_3(VAR_5);

 if (VAR_7 == ((void*)0))
  return VAR_0;

 if (((void*)0) != VAR_1->idxname)
  VAR_1->idxname = FUNC_1(FUNC_3(VAR_3),
            VAR_7,
            FUNC_4(VAR_3));

 VAR_6 = FUNC_0(VAR_3,
          VAR_1,
          VAR_0,
          0,
          1,
          0,
          1);

 FUNC_2(VAR_2,
        FUNC_3(VAR_6.objectId),
        VAR_4,
        VAR_7);

 return VAR_6.objectId;
}
