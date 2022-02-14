
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* cc_provider_private; } ;
typedef TYPE_1__ crypto_ctx_t ;
struct TYPE_6__ {int ac_flags; scalar_t__ ac_keysched_len; int ac_keysched; } ;
typedef TYPE_2__ aes_ctx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(crypto_ctx_t *VAR_2)
{
 aes_ctx_t *VAR_3 = VAR_2->cc_provider_private;

 if (VAR_3 != ((void*)0)) {
  if (VAR_3->ac_flags & VAR_1) {
   FUNC_0(VAR_3->ac_keysched_len != 0);
   FUNC_1(VAR_3->ac_keysched, VAR_3->ac_keysched_len);
   FUNC_3(VAR_3->ac_keysched,
       VAR_3->ac_keysched_len);
  }
  FUNC_2(VAR_3);
  VAR_2->cc_provider_private = ((void*)0);
 }

 return (VAR_0);
}
