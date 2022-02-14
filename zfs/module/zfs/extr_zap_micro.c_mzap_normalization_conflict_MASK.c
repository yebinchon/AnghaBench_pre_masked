
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int zap_avl; } ;
struct TYPE_13__ {scalar_t__ zap_normflags; TYPE_1__ zap_m; } ;
typedef TYPE_2__ zap_t ;
typedef int zap_name_t ;
struct TYPE_14__ {scalar_t__ mze_hash; } ;
typedef TYPE_3__ mzap_ent_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_15__ {int mze_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_9__* FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static boolean_t
FUNC_5(zap_t *VAR_5, zap_name_t *VAR_6, mzap_ent_t *VAR_7)
{
 int VAR_8 = VAR_1;
 boolean_t VAR_9 = VAR_2;

 if (VAR_5->zap_normflags == 0)
  return (VAR_2);

again:
 for (mzap_ent_t *VAR_10 = FUNC_1(&VAR_5->zap_m.zap_avl, VAR_7, VAR_8);
     VAR_10 && VAR_10->mze_hash == VAR_7->mze_hash;
     VAR_10 = FUNC_1(&VAR_5->zap_m.zap_avl, VAR_10, VAR_8)) {

  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_3(VAR_5, FUNC_0(VAR_5, VAR_7)->mze_name,
       VAR_4);
   VAR_9 = VAR_3;
  }
  if (FUNC_2(VAR_6, FUNC_0(VAR_5, VAR_10)->mze_name)) {
   if (VAR_9)
    FUNC_4(VAR_6);
   return (VAR_3);
  }
 }

 if (VAR_8 == VAR_1) {
  VAR_8 = VAR_0;
  goto again;
 }

 if (VAR_9)
  FUNC_4(VAR_6);
 return (VAR_2);
}
