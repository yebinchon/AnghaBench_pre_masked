
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ func_oid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ FuncStrategy ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static FuncStrategy *
FUNC_1(Oid VAR_4)
{
 if (VAR_1.func_oid == VAR_0)
  FUNC_0(&VAR_1, "first", 2, VAR_2);
 if (VAR_3.func_oid == VAR_0)
  FUNC_0(&VAR_3, "last", 2, VAR_2);
 if (VAR_1.func_oid == VAR_4)
  return &VAR_1;
 if (VAR_3.func_oid == VAR_4)
  return &VAR_3;
 return ((void*)0);
}
