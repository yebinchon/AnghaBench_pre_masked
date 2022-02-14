
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drr_freeobjects {scalar_t__ drr_firstobj; scalar_t__ drr_numobjs; int drr_toguid; } ;
struct TYPE_8__ {scalar_t__ dsc_pending_op; int dsc_toguid; TYPE_5__* dsc_drr; int dsc_os; } ;
typedef TYPE_2__ dmu_send_cookie_t ;
typedef int dmu_replay_record_t ;
struct TYPE_10__ {int dn_maxblkid; } ;
struct TYPE_7__ {struct drr_freeobjects drr_freeobjects; } ;
struct TYPE_9__ {int drr_type; TYPE_1__ drr_u; } ;


 TYPE_6__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(dmu_send_cookie_t *VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 struct drr_freeobjects *VAR_9 = &(VAR_6->dsc_drr->drr_u.drr_freeobjects);
 uint64_t VAR_10 = VAR_0 *
     (FUNC_0(VAR_6->dsc_os)->dn_maxblkid + 1);







 if (VAR_10 > 0) {
  if (VAR_10 < VAR_7)
   return (0);

  if (VAR_10 < VAR_7 + VAR_8)
   VAR_8 = VAR_10 - VAR_7;
 }
 if (VAR_6->dsc_pending_op != VAR_4 &&
     VAR_6->dsc_pending_op != VAR_3) {
  if (FUNC_3(VAR_6, ((void*)0), 0) != 0)
   return (FUNC_1(VAR_2));
  VAR_6->dsc_pending_op = VAR_4;
 }
 if (VAR_8 == 0)
  VAR_8 = VAR_5 - VAR_7;

 if (VAR_6->dsc_pending_op == VAR_3) {




  if (VAR_9->drr_firstobj + VAR_9->drr_numobjs == VAR_7) {
   VAR_9->drr_numobjs += VAR_8;
   return (0);
  } else {

   if (FUNC_3(VAR_6, ((void*)0), 0) != 0)
    return (FUNC_1(VAR_2));
   VAR_6->dsc_pending_op = VAR_4;
  }
 }


 FUNC_2(VAR_6->dsc_drr, sizeof (dmu_replay_record_t));
 VAR_6->dsc_drr->drr_type = VAR_1;
 VAR_9->drr_firstobj = VAR_7;
 VAR_9->drr_numobjs = VAR_8;
 VAR_9->drr_toguid = VAR_6->dsc_toguid;

 VAR_6->dsc_pending_op = VAR_3;

 return (0);
}
