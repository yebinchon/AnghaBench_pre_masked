
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int job_type; } ;
struct TYPE_5__ {TYPE_1__ fd; int bgw_type; } ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int FormData_bgw_job ;
typedef TYPE_2__ BgwJob ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,size_t,int) ;

__attribute__((used)) static BgwJob *
FUNC_3(HeapTuple VAR_0, size_t VAR_1, MemoryContext VAR_2)
{
 BgwJob *VAR_3;





 FUNC_0(VAR_1 >= sizeof(BgwJob));
 VAR_3 = (BgwJob *) FUNC_2(VAR_0, VAR_2, VAR_1, sizeof(FormData_bgw_job));
 VAR_3->bgw_type = FUNC_1(&VAR_3->fd.job_type);

 return VAR_3;
}
