
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_memory; } ;
struct TYPE_5__ {unsigned long ulong_max; unsigned long used_memory; TYPE_1__ settings; } ;
typedef TYPE_2__ json_state ;


 void* FUNC_0 (unsigned long,int) ;
 void* FUNC_1 (unsigned long) ;

__attribute__((used)) static void * FUNC_2 (json_state * VAR_0, unsigned long VAR_1, int VAR_2)
{
   void * VAR_3;

   if ((VAR_0->ulong_max - VAR_0->used_memory) < VAR_1)
      return 0;

   if (VAR_0->settings.max_memory
         && (VAR_0->used_memory += VAR_1) > VAR_0->settings.max_memory)
   {
      return 0;
   }

   if (! (VAR_3 = VAR_2 ? FUNC_0 (VAR_1, 1) : FUNC_1 (VAR_1)))
      return 0;

   return VAR_3;
}
