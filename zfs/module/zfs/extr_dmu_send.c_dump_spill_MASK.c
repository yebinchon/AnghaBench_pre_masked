
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* uint64_t ;
struct drr_spill {void* drr_compressed_size; int drr_mac; int drr_iv; int drr_salt; int drr_compressiontype; int drr_flags; int drr_toguid; void* drr_length; void* drr_object; } ;
struct TYPE_16__ {scalar_t__ dsc_pending_op; scalar_t__ dsc_fromtxg; int dsc_featureflags; int dsc_toguid; TYPE_9__* dsc_drr; } ;
typedef TYPE_2__ dmu_send_cookie_t ;
typedef int dmu_replay_record_t ;
struct TYPE_17__ {scalar_t__ blk_birth; } ;
typedef TYPE_3__ blkptr_t ;
struct TYPE_15__ {struct drr_spill drr_spill; } ;
struct TYPE_18__ {int drr_type; TYPE_1__ drr_u; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__ const*) ;
 void* FUNC_2 (TYPE_3__ const*) ;
 void* FUNC_3 (TYPE_3__ const*) ;
 int FUNC_4 (TYPE_3__ const*) ;
 scalar_t__ FUNC_5 (TYPE_3__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_9__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,void*,void*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (TYPE_3__ const*,int ) ;
 int FUNC_10 (TYPE_3__ const*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(dmu_send_cookie_t *VAR_7, const blkptr_t *VAR_8, uint64_t VAR_9,
    void *VAR_10)
{
 struct drr_spill *VAR_11 = &(VAR_7->dsc_drr->drr_u.drr_spill);
 uint64_t VAR_12 = FUNC_2(VAR_8);
 uint64_t VAR_13 = VAR_12;

 if (VAR_7->dsc_pending_op != VAR_5) {
  if (FUNC_8(VAR_7, ((void*)0), 0) != 0)
   return (FUNC_6(VAR_4));
  VAR_7->dsc_pending_op = VAR_5;
 }


 FUNC_7(VAR_7->dsc_drr, sizeof (dmu_replay_record_t));
 VAR_7->dsc_drr->drr_type = VAR_2;
 VAR_11->drr_object = VAR_9;
 VAR_11->drr_length = VAR_12;
 VAR_11->drr_toguid = VAR_7->dsc_toguid;


 if (VAR_6 &&
     (VAR_8->blk_birth <= VAR_7->dsc_fromtxg)) {
  VAR_11->drr_flags |= VAR_3;
 }


 if (VAR_7->dsc_featureflags & VAR_0) {
  FUNC_0(FUNC_4(VAR_8));

  if (FUNC_5(VAR_8))
   VAR_11->drr_flags |= VAR_1;
  VAR_11->drr_compressiontype = FUNC_1(VAR_8);
  VAR_11->drr_compressed_size = FUNC_3(VAR_8);
  FUNC_10(VAR_8, VAR_11->drr_salt, VAR_11->drr_iv);
  FUNC_9(VAR_8, VAR_11->drr_mac);
  VAR_13 = VAR_11->drr_compressed_size;
 }

 if (FUNC_8(VAR_7, VAR_10, VAR_13) != 0)
  return (FUNC_6(VAR_4));
 return (0);
}
