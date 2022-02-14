
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
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
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 TYPE_3__ VAR_8 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;

void
FUNC_5(nvlist_t *VAR_9, int VAR_10, const nvlist_t *VAR_11,
    uint32_t VAR_12, uint8_t *VAR_13, const char *VAR_14)
{
 uint64_t *VAR_15 = &VAR_8.fmri_set_failed.value.ui64;

 if (VAR_10 < VAR_0) {
  FUNC_0(VAR_15);
  return;
 }

 if (FUNC_4(VAR_9, VAR_7, VAR_10) != 0) {
  FUNC_0(VAR_15);
  return;
 }

 if (FUNC_2(VAR_9, VAR_5,
     VAR_6) != 0) {
  FUNC_0(VAR_15);
  return;
 }

 if (VAR_11 != ((void*)0) && FUNC_1(VAR_9, VAR_1,
     (nvlist_t *)VAR_11) != 0)
  FUNC_0(VAR_15);

 if (FUNC_3(VAR_9, VAR_2, VAR_12) != 0)
  FUNC_0(VAR_15);

 if (VAR_13 != ((void*)0) && FUNC_4(VAR_9, VAR_3,
     *VAR_13) != 0)
  FUNC_0(VAR_15);

 if (VAR_14 == ((void*)0) || FUNC_2(VAR_9,
     VAR_4, (char *)VAR_14) != 0)
   FUNC_0(VAR_15);
}
