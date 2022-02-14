
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uio_loffset; int uio_skip; int uio_resid; int uio_limit; int uio_segflg; scalar_t__ uio_iovcnt; int * uio_bvec; } ;
typedef TYPE_1__ uio_t ;
struct bio {scalar_t__ bi_vcnt; int * bi_io_vec; } ;


 size_t FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(uio_t *VAR_2, struct bio *VAR_3)
{
 VAR_2->uio_bvec = &VAR_3->bi_io_vec[FUNC_0(VAR_3)];
 VAR_2->uio_iovcnt = VAR_3->bi_vcnt - FUNC_0(VAR_3);
 VAR_2->uio_loffset = FUNC_1(VAR_3) << 9;
 VAR_2->uio_segflg = VAR_1;
 VAR_2->uio_limit = VAR_0;
 VAR_2->uio_resid = FUNC_2(VAR_3);
 VAR_2->uio_skip = FUNC_3(VAR_3);
}
