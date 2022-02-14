
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mcarea; } ;
typedef TYPE_1__ jit_State ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_2 (TYPE_1__*,uintptr_t,size_t,int ) ;
 int FUNC_3 (TYPE_1__*,void*,size_t) ;
 scalar_t__ FUNC_4 (void*) ;

__attribute__((used)) static void *FUNC_5(jit_State *VAR_4, size_t VAR_5)
{
  uintptr_t VAR_6 = (uintptr_t)(void *)VAR_3 & ~(uintptr_t)0xffff;

  const uintptr_t VAR_7 = (1u << (VAR_0-1)) - (1u << 21);

  uintptr_t VAR_8 = VAR_4->mcarea ? (uintptr_t)VAR_4->mcarea - VAR_5 : 0;
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
    if (FUNC_4(VAR_8)) {
      void *VAR_10 = FUNC_2(VAR_4, VAR_8, VAR_5, VAR_2);

      if (FUNC_4(VAR_10) &&
   ((uintptr_t)VAR_10 + VAR_5 - VAR_6 < VAR_7 || VAR_6 - (uintptr_t)VAR_10 < VAR_7))
 return VAR_10;
      if (VAR_10) FUNC_3(VAR_4, VAR_10, VAR_5);
    }

    do {
      VAR_8 = FUNC_0(VAR_4, VAR_0-16) << 16;
    } while (!(VAR_8 + VAR_5 < VAR_7+VAR_7));
    VAR_8 = VAR_6 + VAR_8 - VAR_7;
  }
  FUNC_1(VAR_4, VAR_1);
  return ((void*)0);
}
