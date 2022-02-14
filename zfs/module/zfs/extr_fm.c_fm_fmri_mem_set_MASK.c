
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_4__ {int ui64; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct TYPE_6__ {TYPE_2__ fmri_set_failed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_8 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,char const*) ;
 scalar_t__ FUNC_3 (int *,int ,char**,int) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;

void
FUNC_6(nvlist_t *VAR_9, int VAR_10, const nvlist_t *VAR_11,
    const char *VAR_12, const char *VAR_13, uint64_t VAR_14)
{
 if (VAR_10 != VAR_7) {
  FUNC_0(&VAR_8.fmri_set_failed.value.ui64);
  return;
 }

 if (!VAR_13 && (VAR_14 != (uint64_t)-1)) {
  FUNC_0(&VAR_8.fmri_set_failed.value.ui64);
  return;
 }

 if (FUNC_5(VAR_9, VAR_6, VAR_10) != 0) {
  FUNC_0(&VAR_8.fmri_set_failed.value.ui64);
  return;
 }

 if (FUNC_2(VAR_9, VAR_4, VAR_5) != 0) {
  FUNC_0(&VAR_8.fmri_set_failed.value.ui64);
  return;
 }

 if (VAR_11 != ((void*)0)) {
  if (FUNC_1(VAR_9, VAR_0,
      (nvlist_t *)VAR_11) != 0) {
   FUNC_0(
       &VAR_8.fmri_set_failed.value.ui64);
  }
 }

 if (FUNC_2(VAR_9, VAR_3, VAR_12) != 0) {
  FUNC_0(&VAR_8.fmri_set_failed.value.ui64);
 }

 if (VAR_13 != ((void*)0)) {
  if (FUNC_3(VAR_9, VAR_2,
      (char **)&VAR_13, 1) != 0) {
   FUNC_0(
       &VAR_8.fmri_set_failed.value.ui64);
  }
  if (VAR_14 != (uint64_t)-1 && FUNC_4(VAR_9,
      VAR_1, VAR_14) != 0) {
   FUNC_0(
       &VAR_8.fmri_set_failed.value.ui64);
  }
 }
}
