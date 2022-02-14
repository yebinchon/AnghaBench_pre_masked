
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drr_redact {scalar_t__ drr_object; scalar_t__ drr_offset; scalar_t__ drr_length; int drr_toguid; } ;
struct TYPE_7__ {scalar_t__ dsc_pending_op; int dsc_toguid; TYPE_5__* dsc_drr; } ;
typedef TYPE_2__ dmu_send_cookie_t ;
typedef int dmu_replay_record_t ;
struct TYPE_6__ {struct drr_redact drr_redact; } ;
struct TYPE_8__ {int drr_type; TYPE_1__ drr_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(dmu_send_cookie_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6,
    uint64_t VAR_7)
{
 struct drr_redact *VAR_8 = &VAR_4->dsc_drr->drr_u.drr_redact;







 if (VAR_4->dsc_pending_op != VAR_2 &&
     VAR_4->dsc_pending_op != VAR_3) {
  if (FUNC_2(VAR_4, ((void*)0), 0) != 0)
   return (FUNC_0(VAR_1));
  VAR_4->dsc_pending_op = VAR_2;
 }

 if (VAR_4->dsc_pending_op == VAR_3) {




  if (VAR_8->drr_object == VAR_5 && VAR_8->drr_offset +
      VAR_8->drr_length == VAR_6) {
   VAR_8->drr_length += VAR_7;
   return (0);
  } else {

   if (FUNC_2(VAR_4, ((void*)0), 0) != 0)
    return (FUNC_0(VAR_1));
   VAR_4->dsc_pending_op = VAR_2;
  }
 }

 FUNC_1(VAR_4->dsc_drr, sizeof (dmu_replay_record_t));
 VAR_4->dsc_drr->drr_type = VAR_0;
 VAR_8->drr_object = VAR_5;
 VAR_8->drr_offset = VAR_6;
 VAR_8->drr_length = VAR_7;
 VAR_8->drr_toguid = VAR_4->dsc_toguid;
 VAR_4->dsc_pending_op = VAR_3;

 return (0);
}
