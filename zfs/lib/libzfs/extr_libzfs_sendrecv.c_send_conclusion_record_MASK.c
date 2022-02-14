
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zio_cksum_t ;
typedef int drr ;
struct TYPE_5__ {int drr_checksum; } ;
struct TYPE_6__ {TYPE_1__ drr_end; } ;
struct TYPE_7__ {TYPE_2__ drr_u; int drr_type; int member_0; } ;
typedef TYPE_3__ dmu_replay_record_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, zio_cksum_t *VAR_3)
{
 dmu_replay_record_t VAR_4 = { 0 };
 VAR_4.drr_type = VAR_0;
 if (VAR_3 != ((void*)0))
  VAR_4.drr_u.drr_end.drr_checksum = *VAR_3;
 if (FUNC_0(VAR_2, &VAR_4, sizeof (VAR_4)) == -1) {
  return (VAR_1);
 }
 return (0);
}
