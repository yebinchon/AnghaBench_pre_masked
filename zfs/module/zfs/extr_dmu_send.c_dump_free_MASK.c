
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drr_free {scalar_t__ drr_object; scalar_t__ drr_offset; scalar_t__ drr_length; int drr_toguid; } ;
struct TYPE_7__ {scalar_t__ dsc_last_data_object; scalar_t__ dsc_last_data_offset; scalar_t__ dsc_pending_op; int dsc_toguid; TYPE_5__* dsc_drr; } ;
typedef TYPE_2__ dmu_send_cookie_t ;
typedef int dmu_replay_record_t ;
struct TYPE_6__ {struct drr_free drr_free; } ;
struct TYPE_8__ {int drr_type; TYPE_1__ drr_u; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(dmu_send_cookie_t *VAR_6, uint64_t VAR_7, uint64_t VAR_8,
    uint64_t VAR_9)
{
 struct drr_free *VAR_10 = &(VAR_6->dsc_drr->drr_u.drr_free);
 FUNC_0(VAR_7 > VAR_6->dsc_last_data_object ||
     (VAR_7 == VAR_6->dsc_last_data_object &&
     VAR_8 > VAR_6->dsc_last_data_offset));
 if (VAR_6->dsc_pending_op != VAR_4 &&
     VAR_6->dsc_pending_op != VAR_3) {
  if (FUNC_3(VAR_6, ((void*)0), 0) != 0)
   return (FUNC_1(VAR_2));
  VAR_6->dsc_pending_op = VAR_4;
 }

 if (VAR_6->dsc_pending_op == VAR_3) {




  if (VAR_10->drr_object == VAR_7 && VAR_10->drr_offset +
      VAR_10->drr_length == VAR_8) {
   if (VAR_8 + VAR_9 < VAR_8 || VAR_9 == VAR_5)
    VAR_10->drr_length = VAR_5;
   else
    VAR_10->drr_length += VAR_9;
   return (0);
  } else {

   if (FUNC_3(VAR_6, ((void*)0), 0) != 0)
    return (FUNC_1(VAR_2));
   VAR_6->dsc_pending_op = VAR_4;
  }
 }

 FUNC_2(VAR_6->dsc_drr, sizeof (dmu_replay_record_t));
 VAR_6->dsc_drr->drr_type = VAR_1;
 VAR_10->drr_object = VAR_7;
 VAR_10->drr_offset = VAR_8;
 if (VAR_8 + VAR_9 < VAR_8)
  VAR_10->drr_length = VAR_0;
 else
  VAR_10->drr_length = VAR_9;
 VAR_10->drr_toguid = VAR_6->dsc_toguid;
 if (VAR_9 == VAR_0) {
  if (FUNC_3(VAR_6, ((void*)0), 0) != 0)
   return (FUNC_1(VAR_2));
 } else {
  VAR_6->dsc_pending_op = VAR_3;
 }

 return (0);
}
