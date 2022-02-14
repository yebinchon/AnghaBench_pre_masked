
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* mcode; } ;
struct TYPE_5__ {int g; TYPE_1__ cb; } ;
typedef TYPE_2__ CTState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (void*,size_t) ;

void FUNC_4(CTState *VAR_2)
{
  size_t VAR_3 = (size_t)VAR_0;
  void *VAR_4 = VAR_2->cb.mcode;
  if (VAR_4 == ((void*)0)) return;






  FUNC_2(VAR_2->g, VAR_4, VAR_3);

}
