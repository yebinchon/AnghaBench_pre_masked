
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kr_savelen; scalar_t__ kr_saveoffset; int * kr_areq; int kr_callreq; } ;
typedef TYPE_1__ kcf_dual_req_t ;
typedef int crypto_call_req_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int,int ) ;

kcf_dual_req_t *
FUNC_3(crypto_call_req_t *VAR_0)
{
 kcf_dual_req_t *VAR_1;

 VAR_1 = FUNC_2(sizeof (kcf_dual_req_t), FUNC_0(VAR_0));

 if (VAR_1 == ((void*)0))
  return (((void*)0));


 if (VAR_0 != ((void*)0))
  VAR_1->kr_callreq = *VAR_0;
 else
  FUNC_1(&(VAR_1->kr_callreq), sizeof (crypto_call_req_t));
 VAR_1->kr_areq = ((void*)0);
 VAR_1->kr_saveoffset = 0;
 VAR_1->kr_savelen = 0;

 return (VAR_1);
}
