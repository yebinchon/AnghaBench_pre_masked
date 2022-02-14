
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_10__ {scalar_t__ ertv_nsec; scalar_t__ ertv_sec; int member_0; } ;
struct TYPE_8__ {scalar_t__ zc_pool_guid; scalar_t__ zc_vdev_guid; } ;
struct TYPE_9__ {TYPE_3__ zc_when; TYPE_1__ zc_data; int zc_present; } ;
typedef TYPE_2__ zfs_case_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef TYPE_3__ er_timeval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int ,scalar_t__**,int*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_8(zpool_handle_t *VAR_5, void *VAR_6)
{
 zfs_case_t *VAR_7;
 uint64_t VAR_8;
 uint64_t *VAR_9;
 er_timeval_t VAR_10 = { 0 };
 nvlist_t *VAR_11, *VAR_12;
 uint_t VAR_13 = 0;
 int VAR_14;

 VAR_8 = FUNC_7(VAR_5, VAR_3, ((void*)0));



 for (VAR_7 = FUNC_2(VAR_4); VAR_7 != ((void*)0);
     VAR_7 = FUNC_3(VAR_4, VAR_7)) {
  if (VAR_7->zc_data.zc_pool_guid == VAR_8 &&
      VAR_7->zc_data.zc_vdev_guid == 0)
   VAR_7->zc_present = VAR_0;
 }

 if ((VAR_11 = FUNC_6(VAR_5, ((void*)0))) == ((void*)0)) {
  FUNC_5(VAR_5);
  return (-1);
 }

 (void) FUNC_1(VAR_11, VAR_1,
     &VAR_9, &VAR_13);
 if (VAR_13 == 2) {
  VAR_10.ertv_sec = VAR_9[0];
  VAR_10.ertv_nsec = VAR_9[1];
  for (VAR_7 = FUNC_2(VAR_4); VAR_7 != ((void*)0);
      VAR_7 = FUNC_3(VAR_4, VAR_7)) {
   if (VAR_7->zc_data.zc_pool_guid == VAR_8 &&
       VAR_7->zc_data.zc_vdev_guid == 0) {
    VAR_7->zc_when = VAR_10;
   }
  }
 }

 VAR_14 = FUNC_0(VAR_11, VAR_2, &VAR_12);
 if (VAR_14) {
  FUNC_5(VAR_5);
  return (-1);
 }

 FUNC_4(VAR_8, VAR_12, &VAR_10);

 FUNC_5(VAR_5);

 return (0);
}
