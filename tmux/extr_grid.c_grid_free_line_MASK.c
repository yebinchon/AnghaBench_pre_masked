
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct grid {TYPE_1__* linedata; } ;
struct TYPE_2__ {int * extddata; int * celldata; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct grid *VAR_0, u_int VAR_1)
{
 FUNC_0(VAR_0->linedata[VAR_1].celldata);
 VAR_0->linedata[VAR_1].celldata = ((void*)0);
 FUNC_0(VAR_0->linedata[VAR_1].extddata);
 VAR_0->linedata[VAR_1].extddata = ((void*)0);
}
