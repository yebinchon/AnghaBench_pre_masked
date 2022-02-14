
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* mcode; } ;
struct TYPE_5__ {int g; TYPE_1__ cb; int L; } ;
typedef int DWORD ;
typedef TYPE_2__ CTState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int *,size_t,int,int ) ;
 int FUNC_1 (void*,size_t,int ,int *) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,char*) ;
 void* FUNC_5 (int ,size_t) ;
 void* FUNC_6 (int *,size_t,int,int,int,int ) ;
 int FUNC_7 (void*,size_t,int) ;

__attribute__((used)) static void FUNC_8(CTState *VAR_13)
{
  size_t VAR_14 = (size_t)VAR_1;
  void *VAR_15;
  if (VAR_0 == 0)
    FUNC_3(VAR_13->L, VAR_2);
  VAR_15 = FUNC_5(VAR_13->L, VAR_14);

  VAR_13->cb.mcode = VAR_15;
  FUNC_2(VAR_13->g, VAR_15);
  FUNC_4(VAR_15, (char *)VAR_15 + VAR_14);
}
