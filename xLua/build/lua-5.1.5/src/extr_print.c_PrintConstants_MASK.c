
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sizek; } ;
typedef TYPE_1__ Proto ;


 int FUNC_0 (TYPE_1__ const*,int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(const Proto* VAR_0)
{
 int VAR_1,VAR_2=VAR_0->sizek;
 FUNC_2("constants (%d) for %p:\n",VAR_2,FUNC_1(VAR_0));
 for (VAR_1=0; VAR_1<VAR_2; VAR_1++)
 {
  FUNC_2("\t%d\t",VAR_1+1);
  FUNC_0(VAR_0,VAR_1);
  FUNC_2("\n");
 }
}
