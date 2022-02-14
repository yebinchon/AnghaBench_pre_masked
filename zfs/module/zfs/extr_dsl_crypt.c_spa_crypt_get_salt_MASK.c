
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_4__ {int dck_key; } ;
typedef TYPE_1__ dsl_crypto_key_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(spa_t *VAR_1, uint64_t VAR_2, uint8_t *VAR_3)
{
 int VAR_4;
 dsl_crypto_key_t *VAR_5 = ((void*)0);


 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_5);
 if (VAR_4 != 0)
  goto error;

 VAR_4 = FUNC_2(&VAR_5->dck_key, VAR_3);
 if (VAR_4 != 0)
  goto error;

 FUNC_0(VAR_1, VAR_5, VAR_0);
 return (0);

error:
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_1, VAR_5, VAR_0);
 return (VAR_4);
}
