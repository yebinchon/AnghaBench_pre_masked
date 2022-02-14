
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int zap_object; int zap_objset; } ;
typedef TYPE_2__ zap_t ;
struct TYPE_11__ {int zn_hash; TYPE_2__* zn_zap; } ;
typedef TYPE_3__ zap_name_t ;
typedef int uint64_t ;
struct TYPE_9__ {int zt_shift; } ;
struct TYPE_12__ {TYPE_1__ zap_ptrtbl; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int,int,int ) ;
 TYPE_5__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int*) ;

void
FUNC_5(zap_name_t *VAR_1)
{
 uint64_t VAR_2;
 zap_t *VAR_3 = VAR_1->zn_zap;

 uint64_t VAR_4 = FUNC_1(VAR_1->zn_hash,
     FUNC_3(VAR_3)->zap_ptrtbl.zt_shift);
 if (FUNC_4(VAR_3, VAR_4, &VAR_2) != 0)
  return;
 int VAR_5 = FUNC_0(VAR_3);
 FUNC_2(VAR_3->zap_objset, VAR_3->zap_object, 0, VAR_2 << VAR_5, 1 << VAR_5,
     VAR_0);
}
