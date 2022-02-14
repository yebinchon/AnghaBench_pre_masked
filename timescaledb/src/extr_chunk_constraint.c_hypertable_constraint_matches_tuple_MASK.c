
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int Datum ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int *,int*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static bool
FUNC_5(TupleInfo *VAR_2, const char *VAR_3)
{
 bool VAR_4[VAR_1];
 Datum VAR_5[VAR_1];
 const char *VAR_6;

 FUNC_3(VAR_2->tuple, VAR_2->desc, VAR_5, VAR_4);

 if (VAR_4[FUNC_0(VAR_0)])
  return 0;

 VAR_6 = FUNC_2(*FUNC_1(
  VAR_5[FUNC_0(VAR_0)]));

 if (FUNC_4(VAR_3, VAR_6) == 0)
  return 1;

 return 0;
}
