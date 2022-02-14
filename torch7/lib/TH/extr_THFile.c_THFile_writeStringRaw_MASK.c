
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
struct TYPE_5__ {size_t (* writeString ) (TYPE_2__*,char const*,size_t) ;} ;
typedef TYPE_2__ THFile ;


 size_t FUNC_0 (TYPE_2__*,char const*,size_t) ;

size_t FUNC_1(THFile *VAR_0, const char *VAR_1, size_t VAR_2)
{
  return VAR_0->vtable->writeString(VAR_0, VAR_1, VAR_2);
}
