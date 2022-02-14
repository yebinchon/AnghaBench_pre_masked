
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64 ;
typedef scalar_t__ int32 ;
typedef int TupleDesc ;
struct TYPE_2__ {scalar_t__ current_time; } ;
typedef int Relation ;
typedef int Datum ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* VAR_0 ;
 int FUNC_4 (int ,int ,int *,int*) ;
 TYPE_1__* FUNC_5 () ;

__attribute__((used)) static bool
FUNC_6(Relation VAR_1, char *VAR_2)
{
 TupleDesc VAR_3 = FUNC_3(VAR_1);
 static int32 VAR_4 = 0;
 Datum VAR_5[4];
 bool VAR_6[4] = { 0, 0, 0 };

 VAR_5[0] = FUNC_1(VAR_4++);
 VAR_5[1] = FUNC_2((int64) FUNC_5()->current_time);
 VAR_5[2] = FUNC_0(VAR_0);
 VAR_5[3] = FUNC_0(VAR_2);

 FUNC_4(VAR_1, VAR_3, VAR_5, VAR_6);

 return 1;
}
