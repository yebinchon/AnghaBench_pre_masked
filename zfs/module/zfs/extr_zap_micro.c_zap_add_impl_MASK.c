
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int zap_ismicro; } ;
typedef TYPE_1__ zap_t ;
struct TYPE_14__ {TYPE_1__* zn_zap; int zn_hash; } ;
typedef TYPE_2__ zap_name_t ;
typedef int uint64_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,int,void const*,void*,int *) ;
 int FUNC_3 (TYPE_2__*,int const) ;
 int FUNC_4 (TYPE_1__**,void*,int *,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int * FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (char const*) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,char const*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,void*) ;

__attribute__((used)) static int
FUNC_11(zap_t *VAR_3, const char *VAR_4,
    int VAR_5, uint64_t VAR_6,
    const void *VAR_7, dmu_tx_t *VAR_8, void *VAR_9)
{
 const uint64_t *VAR_10 = VAR_7;
 int VAR_11 = 0;

 zap_name_t *VAR_12 = FUNC_8(VAR_3, VAR_4, 0);
 if (VAR_12 == ((void*)0)) {
  FUNC_10(VAR_3, VAR_9);
  return (FUNC_1(VAR_1));
 }
 if (!VAR_3->zap_ismicro) {
  VAR_11 = FUNC_2(VAR_12, VAR_5, VAR_6, VAR_7, VAR_9, VAR_8);
  VAR_3 = VAR_12->zn_zap;
 } else if (VAR_5 != 8 || VAR_6 != 1 ||
     FUNC_7(VAR_4) >= VAR_2 ||
     !FUNC_5(VAR_12, VAR_12->zn_hash)) {
  VAR_11 = FUNC_4(&VAR_12->zn_zap, VAR_9, VAR_8, 0);
  if (VAR_11 == 0) {
   VAR_11 = FUNC_2(VAR_12, VAR_5, VAR_6, VAR_7,
       VAR_9, VAR_8);
  }
  VAR_3 = VAR_12->zn_zap;
 } else {
  if (FUNC_6(VAR_12) != ((void*)0)) {
   VAR_11 = FUNC_1(VAR_0);
  } else {
   FUNC_3(VAR_12, *VAR_10);
  }
 }
 FUNC_0(VAR_3 == VAR_12->zn_zap);
 FUNC_9(VAR_12);
 if (VAR_3 != ((void*)0))
  FUNC_10(VAR_3, VAR_9);
 return (VAR_11);
}
