
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int parsed; int is_default; } ;
typedef TYPE_1__ WithClauseResult ;
typedef int Oid ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*) ;

int64
FUNC_3(Oid VAR_1, WithClauseResult *VAR_2)
{
 char *VAR_3;

 FUNC_0(!VAR_2[VAR_0].is_default);

 VAR_3 = FUNC_1(VAR_2[VAR_0].parsed);

 return FUNC_2(VAR_3, VAR_1, "refresh_lag");
}
