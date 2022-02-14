
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sio_nr_dvas; int * sio_dva; int sio_cksum; int sio_birth; int sio_phys_birth; int sio_blk_prop; } ;
typedef TYPE_1__ scan_io_t ;
struct TYPE_7__ {int * blk_dva; int blk_cksum; int blk_birth; int blk_phys_birth; int blk_prop; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static inline void
FUNC_1(const blkptr_t *VAR_0, scan_io_t *VAR_1, int VAR_2)
{
 VAR_1->sio_blk_prop = VAR_0->blk_prop;
 VAR_1->sio_phys_birth = VAR_0->blk_phys_birth;
 VAR_1->sio_birth = VAR_0->blk_birth;
 VAR_1->sio_cksum = VAR_0->blk_cksum;
 VAR_1->sio_nr_dvas = FUNC_0(VAR_0);







 for (int VAR_3 = 0, VAR_4 = VAR_2; VAR_3 < VAR_1->sio_nr_dvas; VAR_3++, VAR_4++) {
  VAR_1->sio_dva[VAR_3] = VAR_0->blk_dva[VAR_4 % VAR_1->sio_nr_dvas];
 }
}
