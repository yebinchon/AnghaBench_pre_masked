
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zap_ismicro; } ;
typedef TYPE_1__ zap_t ;
typedef int zap_name_t ;
typedef int uint64_t ;
typedef int mzap_ent_t ;
typedef int matchtype_t ;
typedef int boolean_t ;
struct TYPE_8__ {int mze_value; int mze_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,void*,char*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int) ;
 int * FUNC_6 (TYPE_1__*,char const*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(zap_t *VAR_4, const char *VAR_5,
    uint64_t VAR_6, uint64_t VAR_7, void *VAR_8,
    matchtype_t VAR_9, char *VAR_10, int VAR_11,
    boolean_t *VAR_12)
{
 int VAR_13 = 0;

 zap_name_t *VAR_14 = FUNC_6(VAR_4, VAR_5, VAR_9);
 if (VAR_14 == ((void*)0))
  return (FUNC_1(VAR_2));

 if (!VAR_4->zap_ismicro) {
  VAR_13 = FUNC_2(VAR_14, VAR_6, VAR_7, VAR_8,
      VAR_10, VAR_11, VAR_12);
 } else {
  mzap_ent_t *VAR_15 = FUNC_4(VAR_14);
  if (VAR_15 == ((void*)0)) {
   VAR_13 = FUNC_1(VAR_1);
  } else {
   if (VAR_7 < 1) {
    VAR_13 = FUNC_1(VAR_3);
   } else if (VAR_6 != 8) {
    VAR_13 = FUNC_1(VAR_0);
   } else {
    *(uint64_t *)VAR_8 =
        FUNC_0(VAR_4, VAR_15)->mze_value;
    (void) FUNC_5(VAR_10,
        FUNC_0(VAR_4, VAR_15)->mze_name, VAR_11);
    if (VAR_12) {
     *VAR_12 = FUNC_3(VAR_4,
         VAR_14, VAR_15);
    }
   }
  }
 }
 FUNC_7(VAR_14);
 return (VAR_13);
}
