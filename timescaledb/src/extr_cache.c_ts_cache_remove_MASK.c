
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numelements; } ;
struct TYPE_5__ {TYPE_1__ stats; int htab; } ;
typedef TYPE_2__ Cache ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,int*) ;

bool
FUNC_1(Cache *VAR_1, void *VAR_2)
{
 bool VAR_3;

 FUNC_0(VAR_1->htab, VAR_2, VAR_0, &VAR_3);

 if (VAR_3)
  VAR_1->stats.numelements--;

 return VAR_3;
}
