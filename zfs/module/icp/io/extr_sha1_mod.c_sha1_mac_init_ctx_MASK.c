
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int hc_ocontext; int hc_icontext; } ;
typedef TYPE_1__ sha1_hmac_ctx_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*,int*,int) ;
 int FUNC_3 (int*,int ) ;

__attribute__((used)) static void
FUNC_4(sha1_hmac_ctx_t *VAR_2, void *VAR_3, uint_t VAR_4)
{
 uint32_t VAR_5[VAR_1];
 uint32_t VAR_6[VAR_1];
 uint_t VAR_7;

 FUNC_3(VAR_5, VAR_0);
 FUNC_3(VAR_6, VAR_0);

 FUNC_2(VAR_3, VAR_5, VAR_4);
 FUNC_2(VAR_3, VAR_6, VAR_4);


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5[VAR_7] ^= 0x36363636;
  VAR_6[VAR_7] ^= 0x5c5c5c5c;
 }


 FUNC_0(&VAR_2->hc_icontext);
 FUNC_1(&VAR_2->hc_icontext, (uint8_t *)VAR_5, VAR_0);


 FUNC_0(&VAR_2->hc_ocontext);
 FUNC_1(&VAR_2->hc_ocontext, (uint8_t *)VAR_6, VAR_0);
}
