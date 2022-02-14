
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uchar_t ;
struct TYPE_10__ {scalar_t__ cm_type; int cm_param_len; scalar_t__ cm_param; } ;
typedef TYPE_2__ crypto_mechanism_t ;
struct TYPE_9__ {scalar_t__ iov_base; } ;
struct TYPE_11__ {scalar_t__ cd_format; int cd_length; TYPE_1__ cd_raw; } ;
typedef TYPE_3__ crypto_data_t ;
struct TYPE_13__ {int ulAADLen; int * pAAD; int ulTagBits; int ulIvLen; int * pIv; } ;
struct TYPE_12__ {int * pIv; } ;
typedef TYPE_4__ CK_AES_GMAC_PARAMS ;
typedef TYPE_5__ CK_AES_GCM_PARAMS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_0(crypto_mechanism_t *VAR_8, crypto_data_t *VAR_9,
    CK_AES_GCM_PARAMS *VAR_10)
{

 CK_AES_GMAC_PARAMS *VAR_11 = (CK_AES_GMAC_PARAMS *)VAR_8->cm_param;

 if (VAR_8->cm_type != VAR_1)
  return (VAR_5);

 if (VAR_8->cm_param_len != sizeof (CK_AES_GMAC_PARAMS))
  return (VAR_6);

 if (VAR_11->pIv == ((void*)0))
  return (VAR_6);

 VAR_10->pIv = VAR_11->pIv;
 VAR_10->ulIvLen = VAR_0;
 VAR_10->ulTagBits = VAR_2;

 if (VAR_9 == ((void*)0))
  return (VAR_7);

 if (VAR_9->cd_format != VAR_4)
  return (VAR_3);

 VAR_10->pAAD = (uchar_t *)VAR_9->cd_raw.iov_base;
 VAR_10->ulAADLen = VAR_9->cd_length;
 return (VAR_7);
}
