
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {void* io_abd; int io_size; int io_offset; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_16__ {int const rto_dcols; TYPE_1__* rm_golden; TYPE_1__* zio_golden; int rto_ashift; int rto_dsize; int rto_offset; } ;
typedef TYPE_2__ raidz_test_opts_t ;
typedef TYPE_1__ raidz_map_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int const) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (TYPE_1__*,int ,size_t const,int const) ;

__attribute__((used)) static int
FUNC_12(raidz_test_opts_t *VAR_1, const int VAR_2)
{
 int VAR_3 = 0;
 zio_t *VAR_4;
 raidz_map_t *VAR_5;
 const size_t VAR_6 = VAR_1->rto_dcols + VAR_2;

 if (VAR_1->rm_golden) {
  FUNC_5(&VAR_1->zio_golden, &VAR_1->rm_golden);
 }

 VAR_1->zio_golden = FUNC_8(sizeof (zio_t), VAR_0);
 VAR_4 = FUNC_8(sizeof (zio_t), VAR_0);

 VAR_1->zio_golden->io_offset = VAR_4->io_offset = VAR_1->rto_offset;
 VAR_1->zio_golden->io_size = VAR_4->io_size = VAR_1->rto_dsize;

 VAR_1->zio_golden->io_abd = FUNC_7(VAR_1->rto_dsize);
 VAR_4->io_abd = FUNC_7(VAR_1->rto_dsize);

 FUNC_6(VAR_1->zio_golden);
 FUNC_6(VAR_4);

 FUNC_2(FUNC_10("original"));

 VAR_1->rm_golden = FUNC_11(VAR_1->zio_golden,
     VAR_1->rto_ashift, VAR_6, VAR_2);
 VAR_5 = FUNC_11(VAR_4,
     VAR_1->rto_ashift, VAR_6, VAR_2);

 FUNC_1(VAR_1->zio_golden);
 FUNC_1(VAR_1->rm_golden);

 FUNC_9(VAR_1->rm_golden);
 FUNC_9(VAR_5);


 VAR_3 |= FUNC_4(VAR_1, VAR_5);
 VAR_3 |= FUNC_3(VAR_1, VAR_5, VAR_2);

 if (VAR_3)
  FUNC_0("initializing the golden copy ... [FAIL]!\n");


 FUNC_5(&VAR_4, &VAR_5);

 return (VAR_3);
}
