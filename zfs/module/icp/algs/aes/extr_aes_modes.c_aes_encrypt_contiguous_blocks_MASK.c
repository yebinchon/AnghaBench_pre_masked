
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
 int FUNC_0 (void*,char*,size_t,int *,int ,int ,int ,int ) ;
 int FUNC_1 (void*,char*,size_t,int *,int ,int ,int ,int ) ;
 int FUNC_2 (void*,char*,size_t,int *,int ,int ,int ) ;
 int FUNC_3 (void*,char*,size_t,int *,int ,int ) ;
 int FUNC_4 (void*,char*,size_t,int *,int ,int ,int ,int ) ;

int
FUNC_5(void *VAR_9, char *VAR_10, size_t VAR_11,
    crypto_data_t *VAR_12)
{
 aes_ctx_t *VAR_13 = VAR_9;
 int VAR_14;

 if (VAR_13->ac_flags & VAR_3) {
  VAR_14 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12,
      VAR_0, VAR_7, VAR_8);
 } else if (VAR_13->ac_flags & VAR_2) {
  VAR_14 = FUNC_1(VAR_9, VAR_10, VAR_11,
      VAR_12, VAR_0, VAR_7, VAR_6,
      VAR_8);
 } else if (VAR_13->ac_flags & (VAR_4|VAR_5)) {
  VAR_14 = FUNC_4(VAR_9, VAR_10, VAR_11,
      VAR_12, VAR_0, VAR_7, VAR_6,
      VAR_8);
 } else if (VAR_13->ac_flags & VAR_1) {
  VAR_14 = FUNC_0(VAR_9,
      VAR_10, VAR_11, VAR_12, VAR_0, VAR_7,
      VAR_6, VAR_8);
 } else {
  VAR_14 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12,
      VAR_0, VAR_7);
 }
 return (VAR_14);
}
