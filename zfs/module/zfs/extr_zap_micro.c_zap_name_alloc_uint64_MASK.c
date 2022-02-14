
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ zap_normflags; } ;
typedef TYPE_1__ zap_t ;
struct TYPE_8__ {int zn_key_intlen; int zn_key_orig_numints; int zn_key_norm_numints; int zn_hash; scalar_t__ zn_matchtype; int const* zn_key_norm; int const* zn_key_orig; TYPE_1__* zn_zap; } ;
typedef TYPE_2__ zap_name_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*) ;

zap_name_t *
FUNC_3(zap_t *VAR_1, const uint64_t *VAR_2, int VAR_3)
{
 zap_name_t *VAR_4 = FUNC_1(sizeof (zap_name_t), VAR_0);

 FUNC_0(VAR_1->zap_normflags == 0);
 VAR_4->zn_zap = VAR_1;
 VAR_4->zn_key_intlen = sizeof (*VAR_2);
 VAR_4->zn_key_orig = VAR_4->zn_key_norm = VAR_2;
 VAR_4->zn_key_orig_numints = VAR_4->zn_key_norm_numints = VAR_3;
 VAR_4->zn_matchtype = 0;

 VAR_4->zn_hash = FUNC_2(VAR_4);
 return (VAR_4);
}
