
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int end; int start; int type; } ;
typedef TYPE_1__ TimeRange ;
struct TYPE_10__ {int * name; int * schema; } ;
struct TYPE_9__ {int data; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__ SchemaAndName ;
typedef int Oid ;
typedef int * Name ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int *,int *,int,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *,int*) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(SchemaAndName VAR_1, Name VAR_2,
       TimeRange VAR_3)
{
 int VAR_4;
 StringInfo VAR_5 = FUNC_6();
 Oid VAR_6;
 bool VAR_7;
 char *VAR_8;
 char *VAR_9;

 FUNC_5(VAR_3.type, &VAR_6, &VAR_7);

 VAR_8 = FUNC_1(VAR_6, VAR_3.start);
 VAR_9 = FUNC_1(VAR_6, VAR_3.end);

 FUNC_3(VAR_5,
      "DELETE FROM %s.%s AS D WHERE "
      "D.%s >= %s AND D.%s < %s;",
      FUNC_7(FUNC_0(*VAR_1.schema)),
      FUNC_7(FUNC_0(*VAR_1.name)),
      FUNC_7(FUNC_0(*VAR_2)),
      FUNC_8(VAR_8),
      FUNC_7(FUNC_0(*VAR_2)),
      FUNC_8(VAR_9));

 VAR_4 = FUNC_2(VAR_5->data,
        0 ,
        ((void*)0),
        ((void*)0),
        ((void*)0) ,
        0 ,
        0 );
 if (VAR_4 < 0)
  FUNC_4(VAR_0, "could not delete old values from materialization table");
}
