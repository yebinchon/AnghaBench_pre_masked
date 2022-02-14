
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
struct TYPE_5__ {int (* seek ) (TYPE_2__*,size_t) ;} ;
typedef TYPE_2__ THFile ;


 int FUNC_0 (TYPE_2__*,size_t) ;

void FUNC_1(THFile *VAR_0, size_t VAR_1)
{
  VAR_0->vtable->seek(VAR_0, VAR_1);
}
