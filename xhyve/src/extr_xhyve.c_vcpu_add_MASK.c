
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int mt_vcpu; int mt_thr; } ;
struct TYPE_4__ {int rip; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *,int *,int ,TYPE_2__*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int) ;

void
FUNC_4(int VAR_5, int VAR_6, uint64_t VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_5 == VAR_0);







 VAR_8 = FUNC_3(VAR_6);
 FUNC_1(VAR_8 == 0);

 FUNC_0(((unsigned) VAR_6), &VAR_1);

 VAR_2[VAR_6].mt_vcpu = VAR_6;

 VAR_4[VAR_6].rip = VAR_7;

 VAR_8 = FUNC_2(&VAR_2[VAR_6].mt_thr, ((void*)0), VAR_3,
  &VAR_2[VAR_6]);

 FUNC_1(VAR_8 == 0);
}
