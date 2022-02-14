
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int crypto_data_t ;
struct TYPE_2__ {int ac_flags; } ;
typedef TYPE_1__ aes_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (void*,char*,size_t,int *,int ,int ,int ,int ) ;
 int FUNC_1 (void*,char*,size_t,int *,int ,int ,int ,int ) ;
 int FUNC_2 (void*,char*,size_t,int *,int ,int ,int ) ;
 int FUNC_3 (void*,char*,size_t,int *,int ,int ) ;
 int FUNC_4 (void*,char*,size_t,int *,int ,int ,int ,int ) ;

int
FUNC_5(void *VAR_12, char *VAR_13, size_t VAR_14,
    crypto_data_t *VAR_15)
{
 aes_ctx_t *VAR_16 = VAR_12;
 int VAR_17;

 if (VAR_16->ac_flags & VAR_5) {
  VAR_17 = FUNC_2(VAR_12, VAR_13, VAR_14, VAR_15,
      VAR_0, VAR_10, VAR_11);
  if (VAR_17 == VAR_3)
   VAR_17 = VAR_4;
 } else if (VAR_16->ac_flags & VAR_2) {
  VAR_17 = FUNC_1(VAR_12, VAR_13, VAR_14,
      VAR_15, VAR_0, VAR_10, VAR_8,
      VAR_11);
 } else if (VAR_16->ac_flags & (VAR_6|VAR_7)) {
  VAR_17 = FUNC_4(VAR_12, VAR_13, VAR_14,
      VAR_15, VAR_0, VAR_10, VAR_8,
      VAR_11);
 } else if (VAR_16->ac_flags & VAR_1) {
  VAR_17 = FUNC_0(VAR_12, VAR_13, VAR_14, VAR_15,
      VAR_0, VAR_9, VAR_8,
      VAR_11);
 } else {
  VAR_17 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15,
      VAR_0, VAR_9);
  if (VAR_17 == VAR_3)
   VAR_17 = VAR_4;
 }
 return (VAR_17);
}
