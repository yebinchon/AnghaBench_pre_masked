
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_19__ {int job_type; int id; } ;
struct TYPE_23__ {int bgw_type; TYPE_4__ fd; } ;
struct TYPE_18__ {int hypertable_id; } ;
struct TYPE_22__ {TYPE_3__ fd; } ;
struct TYPE_17__ {int hypertable_id; } ;
struct TYPE_21__ {TYPE_2__ fd; } ;
struct TYPE_16__ {int hypertable_id; } ;
struct TYPE_20__ {TYPE_1__ fd; } ;
struct TYPE_15__ {int owner_uid; } ;
typedef int Oid ;
typedef int ContinuousAgg ;
typedef TYPE_5__ BgwPolicyReorder ;
typedef TYPE_6__ BgwPolicyDropChunks ;
typedef TYPE_7__ BgwPolicyCompressChunks ;
typedef TYPE_8__ BgwJob ;


 int VAR_0 ;






 int FUNC_0 (int ) ;

 int FUNC_1 (int ,char*,int ) ;
 TYPE_7__* FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int ) ;
 TYPE_10__* FUNC_5 () ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_8__*) ;

Oid
FUNC_11(BgwJob *VAR_1)
{
 switch (VAR_1->bgw_type)
 {
  case 129:
   return FUNC_5()->owner_uid;
  case 131:
  {
   BgwPolicyReorder *VAR_2 = FUNC_4(VAR_1->fd.id);

   if (VAR_2 == ((void*)0))
    FUNC_1(VAR_0, "reorder policy for job with id \"%d\" not found", VAR_1->fd.id);

   return FUNC_9(FUNC_8(VAR_2->fd.hypertable_id));
  }
  case 132:
  {
   BgwPolicyDropChunks *VAR_3 = FUNC_3(VAR_1->fd.id);

   if (VAR_3 == ((void*)0))
    FUNC_1(VAR_0, "drop_chunks policy for job with id \"%d\" not found", VAR_1->fd.id);

   return FUNC_9(FUNC_8(VAR_3->fd.hypertable_id));
  }
  case 133:
  {
   ContinuousAgg *VAR_4 = FUNC_6(VAR_1->fd.id);

   if (VAR_4 == ((void*)0))
    FUNC_1(VAR_0, "continuous aggregate for job with id \"%d\" not found", VAR_1->fd.id);

   return FUNC_9(FUNC_7(VAR_4));
  }
  case 134:
  {
   BgwPolicyCompressChunks *VAR_5 = FUNC_2(VAR_1->fd.id);
   if (VAR_5 == ((void*)0))
    FUNC_1(VAR_0, "compress chunks policy for job with id \"%d\" not found", VAR_1->fd.id);
   return FUNC_9(FUNC_8(VAR_5->fd.hypertable_id));
  }
  case 130:
   if (&FUNC_10 != ((void*)0))
    return FUNC_10(VAR_1);
   break;
  case 128:
   break;
 }
 FUNC_1(VAR_0, "unknown job type \"%s\" in finding owner", FUNC_0(VAR_1->fd.job_type));
}
