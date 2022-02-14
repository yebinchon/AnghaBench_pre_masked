
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* crypto_spi_ctx_template_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_provider_handle_t ;
struct TYPE_3__ {scalar_t__ cm_type; } ;
typedef TYPE_1__ crypto_mechanism_t ;
typedef int crypto_key_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (size_t*,int ) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (void*,size_t) ;

__attribute__((used)) static int
FUNC_5(crypto_provider_handle_t VAR_9,
    crypto_mechanism_t *VAR_10, crypto_key_t *VAR_11,
    crypto_spi_ctx_template_t *VAR_12, size_t *VAR_13, crypto_req_handle_t VAR_14)
{
 void *VAR_15;
 size_t VAR_16;
 int VAR_17;

 if (VAR_10->cm_type != VAR_3 &&
     VAR_10->cm_type != VAR_0 &&
     VAR_10->cm_type != VAR_2 &&
     VAR_10->cm_type != VAR_1 &&
     VAR_10->cm_type != VAR_4 &&
     VAR_10->cm_type != VAR_5)
  return (VAR_7);

 if ((VAR_15 = FUNC_0(&VAR_16,
     FUNC_2(VAR_14))) == ((void*)0)) {
  return (VAR_6);
 }





 if ((VAR_17 = FUNC_3(VAR_11, VAR_15)) != VAR_8) {
  FUNC_1(VAR_15, VAR_16);
  FUNC_4(VAR_15, VAR_16);
  return (VAR_17);
 }

 *VAR_12 = VAR_15;
 *VAR_13 = VAR_16;

 return (VAR_8);
}
