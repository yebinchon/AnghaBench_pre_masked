
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int znode_phys_t ;
typedef int uint64_t ;
typedef int sa_handle_t ;
typedef int objset_t ;
struct TYPE_3__ {scalar_t__ doi_bonus_type; int doi_bonus_size; } ;
typedef TYPE_1__ dmu_object_info_t ;
typedef int dmu_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ,void*,int **) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,int ,int *,int ,int **) ;

__attribute__((used)) static int
FUNC_5(objset_t *VAR_4, uint64_t VAR_5, sa_handle_t **VAR_6,
    dmu_buf_t **VAR_7, void *VAR_8)
{
 dmu_object_info_t VAR_9;
 int VAR_10;

 if ((VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_8, VAR_7)) != 0)
  return (VAR_10);

 FUNC_1(*VAR_7, &VAR_9);
 if ((VAR_9.doi_bonus_type != VAR_0 &&
     VAR_9.doi_bonus_type != VAR_1) ||
     (VAR_9.doi_bonus_type == VAR_1 &&
     VAR_9.doi_bonus_size < sizeof (znode_phys_t))) {
  FUNC_3(*VAR_7, VAR_8);
  return (FUNC_0(VAR_2));
 }

 VAR_10 = FUNC_4(VAR_4, VAR_5, ((void*)0), VAR_3, VAR_6);
 if (VAR_10 != 0) {
  FUNC_3(*VAR_7, VAR_8);
  return (VAR_10);
 }

 return (0);
}
