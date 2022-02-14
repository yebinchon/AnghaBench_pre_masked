
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int (* zfs_iter_f ) (TYPE_1__*,void*) ;
struct TYPE_16__ {scalar_t__ zfs_type; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_17__ {char* member_0; scalar_t__ zc_simple; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ,TYPE_3__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_1__*,int ,TYPE_3__*) ;

int
FUNC_9(zfs_handle_t *VAR_5, boolean_t VAR_6, zfs_iter_f VAR_7,
    void *VAR_8, uint64_t VAR_9, uint64_t VAR_10)
{
 zfs_cmd_t VAR_11 = {"\0"};
 zfs_handle_t *VAR_12;
 int VAR_13;
 nvlist_t *VAR_14 = ((void*)0);

 if (VAR_5->zfs_type == VAR_4 ||
     VAR_5->zfs_type == VAR_3)
  return (0);

 VAR_11.zc_simple = VAR_6;

 if (FUNC_5(VAR_5->zfs_hdl, &VAR_11, 0) != 0)
  return (-1);

 if (VAR_9 != 0) {
  VAR_14 = FUNC_1();
  FUNC_0(VAR_14, VAR_1, VAR_9);
 }
 if (VAR_10 != 0) {
  if (VAR_14 == ((void*)0))
   VAR_14 = FUNC_1();
  FUNC_0(VAR_14, VAR_0, VAR_10);
 }

 if (VAR_14 != ((void*)0) &&
     FUNC_7(VAR_5->zfs_hdl, &VAR_11, VAR_14) != 0) {
  FUNC_6(&VAR_11);
  FUNC_2(VAR_14);
  return (-1);
 }

 while ((VAR_13 = FUNC_8(VAR_5, VAR_2,
     &VAR_11)) == 0) {

  if (VAR_6)
   VAR_12 = FUNC_4(VAR_5, &VAR_11);
  else
   VAR_12 = FUNC_3(VAR_5->zfs_hdl, &VAR_11);
  if (VAR_12 == ((void*)0))
   continue;

  if ((VAR_13 = VAR_7(VAR_12, VAR_8)) != 0) {
   FUNC_6(&VAR_11);
   FUNC_2(VAR_14);
   return (VAR_13);
  }
 }
 FUNC_6(&VAR_11);
 FUNC_2(VAR_14);
 return ((VAR_13 < 0) ? VAR_13 : 0);
}
