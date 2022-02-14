
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* name; scalar_t__ handle; } ;
typedef int THFile ;
typedef TYPE_1__ THDiskFile ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(THFile *VAR_0)
{
  THDiskFile *VAR_1 = (THDiskFile*)(VAR_0);
  if(VAR_1->handle)
    FUNC_1(VAR_1->handle);
  FUNC_0(VAR_1->name);
  FUNC_0(VAR_1);
}
