
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zcs_bytes; } ;
typedef TYPE_1__ zio_cksum_salt_t ;
typedef int uint8_t ;
typedef int salt_block ;
typedef void EdonRState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *,int,int *) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int *,int) ;
 int VAR_2 ;
 void* FUNC_4 (int,int ) ;

void *
FUNC_5(const zio_cksum_salt_t *VAR_3)
{
 EdonRState *VAR_4;
 uint8_t VAR_5[VAR_0];
 FUNC_0(VAR_0 == 2 * (VAR_1 / 8));
 FUNC_1(VAR_1, VAR_3->zcs_bytes, sizeof (VAR_3->zcs_bytes) * 8,
     VAR_5);
 FUNC_1(VAR_1, VAR_5, VAR_1, VAR_5 +
     VAR_1 / 8);





 VAR_4 = FUNC_4(sizeof (*VAR_4), VAR_2);
 FUNC_2(VAR_4, VAR_1);
 FUNC_3(VAR_4, VAR_5, sizeof (VAR_5) * 8);
 return (VAR_4);
}
