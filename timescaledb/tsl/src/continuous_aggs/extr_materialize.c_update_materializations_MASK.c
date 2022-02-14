
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_8__ {scalar_t__ start; scalar_t__ end; int type; } ;
typedef int SchemaAndName ;
typedef int Name ;
typedef int List ;
typedef TYPE_1__ InternalTimeRange ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 void* FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__) ;
 int FUNC_7 (TYPE_1__,TYPE_1__) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;

void
FUNC_10(SchemaAndName VAR_3, SchemaAndName VAR_4,
      Name VAR_5, InternalTimeRange VAR_6,
      int64 VAR_7, List *VAR_8)
{
 InternalTimeRange VAR_9 = {
  .type = VAR_6.type,
 };
 InternalTimeRange VAR_10 = VAR_6;

 bool VAR_11 = FUNC_4(VAR_8, &VAR_9);
 bool VAR_12 = VAR_11;
 int VAR_13 = FUNC_1();
 if (VAR_13 != VAR_1)
  FUNC_3(VAR_0, "could not connect to SPI in materializer");



 if (VAR_6.start > VAR_6.end)
  VAR_6.start = VAR_6.end;

 if (VAR_11)
 {
  FUNC_0(VAR_9.start <= VAR_9.end);

  FUNC_9(&VAR_9, VAR_7);


  VAR_9.start =
   FUNC_5(VAR_9.start, VAR_6.start);
  VAR_9.end = FUNC_5(VAR_9.end, VAR_6.end);


  VAR_12 =
   !FUNC_7(VAR_9, VAR_6);

  VAR_10.start =
   FUNC_5(VAR_9.start, VAR_6.start);
 }
 if (!VAR_11 || !VAR_12)
 {
  FUNC_8(VAR_3,
         VAR_4,
         VAR_5,
         FUNC_6(
          VAR_10));
 }
 else
 {
  FUNC_8(VAR_3,
         VAR_4,
         VAR_5,
         FUNC_6(VAR_9));

  FUNC_8(VAR_3,
         VAR_4,
         VAR_5,
         FUNC_6(VAR_6));
 }

 VAR_13 = FUNC_2();
 FUNC_0(VAR_13 == VAR_2);
 return;
}
