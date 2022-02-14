
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vdev_alloc_bias; scalar_t__ vdev_top_zap; scalar_t__ vdev_ms_count; scalar_t__ vdev_id; int vdev_spa; scalar_t__ vdev_islog; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ vdev_alloc_bias_t ;
typedef scalar_t__ uint64_t ;
typedef char* u_longlong_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int,int,scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(vdev_t *VAR_8)
{
 vdev_alloc_bias_t VAR_9 = VAR_8->vdev_alloc_bias;
 const char *VAR_10 = "";
 if (VAR_9 == VAR_5 || VAR_8->vdev_islog) {
  VAR_10 = VAR_2;
 } else if (VAR_9 == VAR_6) {
  VAR_10 = VAR_3;
 } else if (VAR_9 == VAR_4) {
  VAR_10 = VAR_1;
 }

 uint64_t VAR_11 = 0;
 if (VAR_8->vdev_top_zap != 0) {
  int VAR_12 = FUNC_3(FUNC_2(VAR_8->vdev_spa),
      VAR_8->vdev_top_zap, VAR_7,
      sizeof (uint64_t), 1, &VAR_11);
  if (VAR_12 != VAR_0) {
   FUNC_0(VAR_12);
  }
 }

 (void) FUNC_1("\tvdev %10llu   %s",
     (u_longlong_t)VAR_8->vdev_id, VAR_10);

 if (VAR_11 != 0) {
  (void) FUNC_1("   ms_unflushed_phys object %llu",
      (u_longlong_t)VAR_11);
 }

 (void) FUNC_1("\n\t%-10s%5llu   %-19s   %-15s   %-12s\n",
     "metaslabs", (u_longlong_t)VAR_8->vdev_ms_count,
     "offset", "spacemap", "free");
 (void) FUNC_1("\t%15s   %19s   %15s   %12s\n",
     "---------------", "-------------------",
     "---------------", "------------");
}
