
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sizep; struct TYPE_6__** p; } ;
typedef TYPE_1__ Proto ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_3(const Proto* VAR_0, int VAR_1)
{
 int VAR_2,VAR_3=VAR_0->sizep;
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 if (VAR_1) FUNC_1(VAR_0);
 for (VAR_2=0; VAR_2<VAR_3; VAR_2++) FUNC_3(VAR_0->p[VAR_2],VAR_1);
}
