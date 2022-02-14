
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int get_all_cb_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int (*) (int *,void*),int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int ,int *,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_8, void *VAR_9)
{
 get_all_cb_t *VAR_10 = VAR_9;

 if (!(FUNC_2(VAR_8) & VAR_7)) {
  FUNC_1(VAR_8);
  return (0);
 }

 if (FUNC_5(VAR_8, VAR_3) == VAR_1) {
  FUNC_1(VAR_8);
  return (0);
 }

 if (FUNC_5(VAR_8, VAR_5) ==
     VAR_2) {
  FUNC_1(VAR_8);
  return (0);
 }





 if (FUNC_5(VAR_8, VAR_4) &&
     FUNC_4(VAR_8, VAR_6,
     ((void*)0), 0, ((void*)0), ((void*)0), 0, VAR_0) == 0) {
  FUNC_1(VAR_8);
  return (0);
 }

 FUNC_0(VAR_10, VAR_8);
 if (FUNC_3(VAR_8, FUNC_6, VAR_10) != 0) {
  FUNC_1(VAR_8);
  return (-1);
 }
 return (0);
}
