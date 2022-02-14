
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int end; int start; int type; } ;
typedef TYPE_1__ TimeRange ;
struct TYPE_11__ {int * name; int * schema; } ;
struct TYPE_10__ {int data; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__ SchemaAndName ;
typedef int Oid ;
typedef int * Name ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int *,int *,int,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *,int*) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(SchemaAndName VAR_1, SchemaAndName VAR_2,
       Name VAR_3, TimeRange VAR_4)
{
 int VAR_5;
 StringInfo VAR_6 = FUNC_6();
 Oid VAR_7;
 bool VAR_8;
 char *VAR_9;
 char *VAR_10;

 FUNC_5(VAR_4.type, &VAR_7, &VAR_8);

 VAR_9 = FUNC_1(VAR_7, VAR_4.start);
 VAR_10 = FUNC_1(VAR_7, VAR_4.end);

 FUNC_3(VAR_6,
      "INSERT INTO %s.%s SELECT * FROM %s.%s AS I "
      "WHERE I.%s >= %s AND I.%s < %s;",
      FUNC_7(FUNC_0(*VAR_2.schema)),
      FUNC_7(FUNC_0(*VAR_2.name)),
      FUNC_7(FUNC_0(*VAR_1.schema)),
      FUNC_7(FUNC_0(*VAR_1.name)),
      FUNC_7(FUNC_0(*VAR_3)),
      FUNC_8(VAR_9),
      FUNC_7(FUNC_0(*VAR_3)),
      FUNC_8(VAR_10));

 VAR_5 = FUNC_2(VAR_6->data,
        0 ,
        ((void*)0) ,
        ((void*)0) ,
        ((void*)0) ,
        0 ,
        0
 );
 if (VAR_5 < 0)
  FUNC_4(VAR_0, "could materialize values into the materialization table");
}
