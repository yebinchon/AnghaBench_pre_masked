
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
struct drr_begin {scalar_t__ drr_fromguid; int drr_toguid; int drr_versioninfo; } ;
typedef int dsl_dataset_t ;
struct TYPE_4__ {int drc_begin_nvl; struct drr_begin* drc_drrb; } ;
typedef TYPE_1__ dmu_recv_cookie_t ;
struct TYPE_5__ {TYPE_1__* drba_cookie; } ;
typedef TYPE_2__ dmu_recv_begin_arg_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *,int ,int *,int **) ;
 int FUNC_4 (int ,int ,int **,int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_6(dmu_recv_begin_arg_t *VAR_7, dsl_dataset_t *VAR_8)
{
 uint64_t *VAR_9;
 uint64_t VAR_10;
 dmu_recv_cookie_t *VAR_11 = VAR_7->drba_cookie;
 struct drr_begin *VAR_12 = VAR_11->drc_drrb;
 int VAR_13 = FUNC_0(VAR_12->drr_versioninfo);
 int VAR_14 = 0;
 boolean_t VAR_15 = VAR_3;
 uint64_t *VAR_16;
 uint_t VAR_17;




 if (VAR_12->drr_fromguid == 0)
  return (VAR_15);

 FUNC_1(FUNC_3(VAR_8,
     VAR_6, &VAR_10, &VAR_9));

 if (FUNC_4(VAR_11->drc_begin_nvl,
     VAR_0, &VAR_16, &VAR_17) ==
     0) {






  if (!FUNC_2(VAR_9, VAR_10,
      VAR_16, VAR_17)) {
   VAR_14 = VAR_5;
  }
 } else if (VAR_13 & VAR_4) {






  VAR_14 = FUNC_4(VAR_11->drc_begin_nvl,
      VAR_1, &VAR_16, &VAR_17);

  if (VAR_14 != 0 || !FUNC_2(VAR_9,
      VAR_10, VAR_16, VAR_17)) {
   VAR_14 = VAR_5;
  }
 } else if (!FUNC_5(VAR_9, VAR_10,
     VAR_12->drr_toguid)) {






  VAR_14 = VAR_5;
 }

 if (VAR_14 != 0)
  VAR_15 = VAR_2;
 return (VAR_15);
}
