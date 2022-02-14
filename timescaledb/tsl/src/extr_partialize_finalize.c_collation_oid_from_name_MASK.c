
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static Oid
FUNC_4(char *VAR_2, char *VAR_3)
{
 List *VAR_4 = VAR_1;
 if (((void*)0) == VAR_3)
  return VAR_0;
 if (((void*)0) != VAR_2)
  VAR_4 = FUNC_2(FUNC_3(VAR_2));
 VAR_4 = FUNC_1(VAR_4, FUNC_3(VAR_3));
 return FUNC_0(VAR_4, 0);
}
