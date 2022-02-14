
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_2__ {scalar_t__ zri_count; char* zri_name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_1(int VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5;

 if (VAR_2 > 3)
  (void) FUNC_0("\n");

 if (VAR_1[0].zri_count == 0)
  return;

 for (VAR_4 = 1, VAR_5 = 10; VAR_1[0].zri_count >= VAR_5; VAR_5 *= 10)
  VAR_4++;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].zri_count || VAR_2 >= 3)
   (void) FUNC_0("\t\t%s %*llu\n",
       VAR_1[VAR_3].zri_name, VAR_4,
       (u_longlong_t)VAR_1[VAR_3].zri_count);
 (void) FUNC_0("\n");
}
