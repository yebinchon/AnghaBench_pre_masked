
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int func_oid; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ FuncStrategy ;


 int FUNC_0 (int *,int,int *,int) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 () ;

__attribute__((used)) static FuncStrategy *
FUNC_4(FuncStrategy *VAR_0, char *VAR_1, int VAR_2, Oid VAR_3[])
{
 List *VAR_4 = FUNC_1(FUNC_2(FUNC_3()), FUNC_2(VAR_1));
 VAR_0->func_oid = FUNC_0(VAR_4, VAR_2, VAR_3, 0);
 return VAR_0;
}
