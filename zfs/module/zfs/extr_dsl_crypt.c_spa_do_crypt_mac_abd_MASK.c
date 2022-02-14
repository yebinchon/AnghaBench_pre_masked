
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_4__ {int dck_key; } ;
typedef TYPE_1__ dsl_crypto_key_t ;
typedef scalar_t__ boolean_t ;
typedef int abd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_7 (int *,int *,int ,int *,int) ;

int
FUNC_8(boolean_t VAR_3, spa_t *VAR_4, uint64_t VAR_5, abd_t *VAR_6,
    uint_t VAR_7, uint8_t *VAR_8)
{
 int VAR_9;
 dsl_crypto_key_t *VAR_10 = ((void*)0);
 uint8_t *VAR_11 = FUNC_1(VAR_6, VAR_7);
 uint8_t VAR_12[VAR_2];


 VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_1, &VAR_10);
 if (VAR_9 != 0)
  goto error;


 VAR_9 = FUNC_7(&VAR_10->dck_key, VAR_11, VAR_7,
     VAR_12, VAR_2);
 if (VAR_9 != 0)
  goto error;

 FUNC_2(VAR_6, VAR_11, VAR_7);
 FUNC_5(VAR_4, VAR_10, VAR_1);





 if (VAR_3) {
  FUNC_4(VAR_12, VAR_8, VAR_2);
  return (0);
 }

 if (FUNC_3(VAR_12, VAR_8, VAR_2) != 0)
  return (FUNC_0(VAR_0));

 return (0);

error:
 if (VAR_10 != ((void*)0))
  FUNC_5(VAR_4, VAR_10, VAR_1);
 FUNC_2(VAR_6, VAR_11, VAR_7);
 return (VAR_9);
}
