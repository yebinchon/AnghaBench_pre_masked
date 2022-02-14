
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int column_name; } ;
struct TYPE_5__ {TYPE_1__ fd; int * partitioning; } ;
typedef TYPE_2__ Dimension ;


 char* FUNC_0 (int ) ;

__attribute__((used)) static char *
FUNC_1(Dimension *VAR_0)
{
 if (VAR_0 == ((void*)0) || VAR_0->partitioning != ((void*)0))
  return ((void*)0);

 return FUNC_0(VAR_0->fd.column_name);
}
