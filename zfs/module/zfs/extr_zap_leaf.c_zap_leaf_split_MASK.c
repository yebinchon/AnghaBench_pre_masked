
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zap_leaf_t ;
struct zap_leaf_entry {scalar_t__ le_type; unsigned long long le_hash; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int lh_prefix_len; int lh_prefix; int lh_flags; } ;
struct TYPE_4__ {TYPE_1__ l_hdr; int l_hash; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct zap_leaf_entry* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int ,int ,int) ;

void
FUNC_7(zap_leaf_t *VAR_3, zap_leaf_t *VAR_4, boolean_t VAR_5)
{
 int VAR_6 = 64 - 1 - FUNC_3(VAR_3)->l_hdr.lh_prefix_len;


 FUNC_3(VAR_3)->l_hdr.lh_prefix <<= 1;
 FUNC_3(VAR_3)->l_hdr.lh_prefix_len++;
 FUNC_3(VAR_4)->l_hdr.lh_prefix =
     FUNC_3(VAR_3)->l_hdr.lh_prefix | 1;
 FUNC_3(VAR_4)->l_hdr.lh_prefix_len =
     FUNC_3(VAR_3)->l_hdr.lh_prefix_len;


 FUNC_6(FUNC_3(VAR_3)->l_hash, VAR_0,
     2*FUNC_1(VAR_3));

 if (VAR_5)
  FUNC_3(VAR_3)->l_hdr.lh_flags |= VAR_2;
 for (int VAR_7 = 0; VAR_7 < FUNC_2(VAR_3); VAR_7++) {
  struct zap_leaf_entry *VAR_8 = FUNC_0(VAR_3, VAR_7);
  if (VAR_8->le_type != VAR_1)
   continue;

  if (VAR_8->le_hash & (1ULL << VAR_6))
   FUNC_5(VAR_3, VAR_7, VAR_4);
  else
   (void) FUNC_4(VAR_3, VAR_7);
 }
}
