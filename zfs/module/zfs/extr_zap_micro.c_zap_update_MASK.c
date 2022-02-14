
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_15__ {int zap_ismicro; } ;
typedef TYPE_1__ zap_t ;
struct TYPE_16__ {TYPE_1__* zn_zap; } ;
typedef TYPE_2__ zap_name_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int mzap_ent_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {int mze_value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_12__* FUNC_1 (TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,int,int,int,char const*) ;
 int FUNC_4 (TYPE_2__*,int,int,void const*,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int const) ;
 int FUNC_6 (TYPE_1__**,int ,int *,int ) ;
 int * FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (int *,int,int *,int ,int ,int ,int ,TYPE_1__**) ;
 TYPE_2__* FUNC_10 (TYPE_1__*,char const*,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;

int
FUNC_13(objset_t *VAR_5, uint64_t VAR_6, const char *VAR_7,
    int VAR_8, uint64_t VAR_9, const void *VAR_10, dmu_tx_t *VAR_11)
{
 zap_t *VAR_12;
 const uint64_t *VAR_13 = VAR_10;

 int VAR_14 =
     FUNC_9(VAR_5, VAR_6, VAR_11, VAR_3, VAR_4, VAR_4, VAR_1, &VAR_12);
 if (VAR_14 != 0)
  return (VAR_14);
 zap_name_t *VAR_15 = FUNC_10(VAR_12, VAR_7, 0);
 if (VAR_15 == ((void*)0)) {
  FUNC_12(VAR_12, VAR_1);
  return (FUNC_2(VAR_0));
 }
 if (!VAR_12->zap_ismicro) {
  VAR_14 = FUNC_4(VAR_15, VAR_8, VAR_9, VAR_10,
      VAR_1, VAR_11);
  VAR_12 = VAR_15->zn_zap;
 } else if (VAR_8 != 8 || VAR_9 != 1 ||
     FUNC_8(VAR_7) >= VAR_2) {
  FUNC_3("upgrading obj %llu: intsz=%u numint=%llu name=%s\n",
      VAR_6, VAR_8, VAR_9, VAR_7);
  VAR_14 = FUNC_6(&VAR_15->zn_zap, VAR_1, VAR_11, 0);
  if (VAR_14 == 0) {
   VAR_14 = FUNC_4(VAR_15, VAR_8, VAR_9,
       VAR_10, VAR_1, VAR_11);
  }
  VAR_12 = VAR_15->zn_zap;
 } else {
  mzap_ent_t *VAR_16 = FUNC_7(VAR_15);
  if (VAR_16 != ((void*)0)) {
   FUNC_1(VAR_12, VAR_16)->mze_value = *VAR_13;
  } else {
   FUNC_5(VAR_15, *VAR_13);
  }
 }
 FUNC_0(VAR_12 == VAR_15->zn_zap);
 FUNC_11(VAR_15);
 if (VAR_12 != ((void*)0))
  FUNC_12(VAR_12, VAR_1);
 return (VAR_14);
}
