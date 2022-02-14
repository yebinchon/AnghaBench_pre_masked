
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zc_pool_guid; scalar_t__ zc_vdev_guid; } ;
struct TYPE_7__ {int zc_when; int zc_present; TYPE_1__ zc_data; } ;
typedef TYPE_2__ zfs_case_t ;
typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int er_timeval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,size_t*) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(uint64_t VAR_6, nvlist_t *VAR_7, er_timeval_t *VAR_8)
{
 uint64_t VAR_9 = 0;
 uint_t VAR_10, VAR_11;
 nvlist_t **VAR_12;
 zfs_case_t *VAR_13;

 (void) FUNC_1(VAR_7, VAR_2, &VAR_9);




 for (VAR_13 = FUNC_2(VAR_5); VAR_13 != ((void*)0);
     VAR_13 = FUNC_3(VAR_5, VAR_13)) {
  if (VAR_13->zc_data.zc_pool_guid == VAR_6 &&
      VAR_13->zc_data.zc_vdev_guid == VAR_9) {
   VAR_13->zc_present = VAR_0;
   VAR_13->zc_when = *VAR_8;
  }
 }




 if (FUNC_0(VAR_7, VAR_1, &VAR_12,
     &VAR_11) == 0) {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
   FUNC_4(VAR_6, VAR_12[VAR_10], VAR_8);
 }

 if (FUNC_0(VAR_7, VAR_3, &VAR_12,
     &VAR_11) == 0) {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
   FUNC_4(VAR_6, VAR_12[VAR_10], VAR_8);
 }

 if (FUNC_0(VAR_7, VAR_4, &VAR_12,
     &VAR_11) == 0) {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
   FUNC_4(VAR_6, VAR_12[VAR_10], VAR_8);
 }
}
