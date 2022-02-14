
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int job_id; } ;
struct TYPE_8__ {TYPE_2__ fd; } ;
struct TYPE_5__ {int job_id; } ;
struct TYPE_7__ {TYPE_1__ fd; } ;
typedef TYPE_3__ BgwPolicyReorder ;
typedef TYPE_4__ BgwPolicyDropChunks ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

void
FUNC_3(int32 VAR_0)
{





 void *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_0(((BgwPolicyReorder *) VAR_1)->fd.job_id);

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_0(((BgwPolicyDropChunks *) VAR_1)->fd.job_id);
}
