
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
 int VAR_5 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;

void
FUNC_4(nvlist_t *VAR_7, int VAR_8, uint64_t VAR_9,
    uint64_t VAR_10)
{
 if (VAR_8 != VAR_5) {
  FUNC_0(&VAR_6.fmri_set_failed.value.ui64);
  return;
 }

 if (FUNC_3(VAR_7, VAR_4, VAR_8) != 0) {
  FUNC_0(&VAR_6.fmri_set_failed.value.ui64);
  return;
 }

 if (FUNC_1(VAR_7, VAR_0, VAR_1) != 0) {
  FUNC_0(&VAR_6.fmri_set_failed.value.ui64);
  return;
 }

 if (FUNC_2(VAR_7, VAR_2, VAR_9) != 0) {
  FUNC_0(&VAR_6.fmri_set_failed.value.ui64);
 }

 if (VAR_10 != 0) {
  if (FUNC_2(VAR_7, VAR_3, VAR_10) != 0) {
   FUNC_0(
       &VAR_6.fmri_set_failed.value.ui64);
  }
 }
}
