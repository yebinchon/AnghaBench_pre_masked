
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vhpet {int freq_sbt; TYPE_1__* timer; } ;
typedef int sbintime_t ;
struct TYPE_2__ {scalar_t__ comprate; int compval; int callout_sbt; int arg; int callout; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ,int *,int ) ;
 int FUNC_1 (struct vhpet*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct vhpet *VAR_2, int VAR_3, uint32_t VAR_4, sbintime_t VAR_5)
{
 sbintime_t VAR_6;

 if (VAR_2->timer[VAR_3].comprate != 0)
  FUNC_1(VAR_2, VAR_3, VAR_4);
 else {






 }

 VAR_6 = (VAR_2->timer[VAR_3].compval - VAR_4) * VAR_2->freq_sbt;
 VAR_2->timer[VAR_3].callout_sbt = VAR_5 + VAR_6;
 FUNC_0(&VAR_2->timer[VAR_3].callout, VAR_2->timer[VAR_3].callout_sbt,
     0, VAR_1, &VAR_2->timer[VAR_3].arg, VAR_0);
}
