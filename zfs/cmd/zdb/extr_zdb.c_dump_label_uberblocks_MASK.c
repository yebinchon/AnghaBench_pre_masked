
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ** uberblocks; int label; } ;
typedef TYPE_1__ zdb_label_t ;
struct TYPE_10__ {int vdev_ashift; struct TYPE_10__* vdev_top; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_11__ {scalar_t__ ub_mmp_magic; scalar_t__ ub_mmp_delay; } ;
typedef TYPE_3__ uberblock_t ;
typedef int cksum_record_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (TYPE_3__*,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_8(zdb_label_t *VAR_4, uint64_t VAR_5, int VAR_6)
{

 vdev_t VAR_7;
 char VAR_8[VAR_2];

 VAR_7.vdev_ashift = VAR_5;
 VAR_7.vdev_top = &VAR_7;

 for (int VAR_9 = 0; VAR_9 < FUNC_0(&VAR_7); VAR_9++) {
  uint64_t VAR_10 = FUNC_1(&VAR_7, VAR_9);
  uberblock_t *VAR_11 = (void *)((char *)&VAR_4->label + VAR_10);
  cksum_record_t *VAR_12 = VAR_4->uberblocks[VAR_9];

  if (VAR_12 == ((void*)0)) {
   if (VAR_3['u'] >= 2) {
    FUNC_4(VAR_4, VAR_6);
    (void) FUNC_6("    Uberblock[%d] invalid\n", VAR_9);
   }
   continue;
  }

  if ((VAR_3['u'] < 3) && (FUNC_3(VAR_12) != VAR_6))
   continue;

  if ((VAR_3['u'] < 4) &&
      (VAR_11->ub_mmp_magic == VAR_1) && VAR_11->ub_mmp_delay &&
      (VAR_9 >= FUNC_0(&VAR_7) - VAR_0))
   continue;

  FUNC_4(VAR_4, VAR_6);
  (void) FUNC_7(VAR_8, VAR_2,
      "    Uberblock[%d]\n", VAR_9);
  FUNC_2(VAR_11, VAR_8, "");
  FUNC_5("        labels = ", VAR_12);
 }
}
