
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name2; int name1; int pool; int value; int op; } ;
typedef TYPE_1__ zvol_task_t ;
typedef int zvol_async_op_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static zvol_task_t *
FUNC_3(zvol_async_op_t VAR_2, const char *VAR_3, const char *VAR_4,
    uint64_t VAR_5)
{
 zvol_task_t *VAR_6;
 char *VAR_7;


 if (VAR_3[0] == '$')
  return (((void*)0));

 VAR_6 = FUNC_0(sizeof (zvol_task_t), VAR_0);
 VAR_6->op = VAR_2;
 VAR_6->value = VAR_5;
 VAR_7 = FUNC_1(VAR_3, '/');
 FUNC_2(VAR_6->pool, VAR_3, VAR_7 ? (VAR_7 - VAR_3 + 1) : VAR_1);

 FUNC_2(VAR_6->name1, VAR_3, VAR_1);
 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_6->name2, VAR_4, VAR_1);

 return (VAR_6);
}
