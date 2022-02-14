
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zp_checksum; } ;
struct TYPE_11__ {TYPE_1__ io_prop; int * io_bp; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_12__ {int rm_firstdatacol; TYPE_4__* rm_col; } ;
typedef TYPE_3__ raidz_map_t ;
struct TYPE_13__ {scalar_t__ rc_error; int rc_abd; int rc_tried; int rc_size; } ;
typedef TYPE_4__ raidz_col_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
typedef int blkptr_t ;
typedef int abd_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_9(zio_t *VAR_4, raidz_map_t *VAR_5)
{
 abd_t *VAR_6[VAR_1];
 int VAR_7, VAR_8 = 0;
 raidz_col_t *VAR_9;

 blkptr_t *VAR_10 = VAR_4->io_bp;
 enum zio_checksum VAR_11 = (VAR_10 == ((void*)0) ? VAR_4->io_prop.zp_checksum :
     (FUNC_1(VAR_10) ? VAR_2 : FUNC_0(VAR_10)));

 if (VAR_11 == VAR_3)
  return (VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_5->rm_firstdatacol; VAR_7++) {
  VAR_9 = &VAR_5->rm_col[VAR_7];
  if (!VAR_9->rc_tried || VAR_9->rc_error != 0)
   continue;

  VAR_6[VAR_7] = FUNC_3(VAR_9->rc_abd, VAR_9->rc_size);
  FUNC_5(VAR_6[VAR_7], VAR_9->rc_abd, VAR_9->rc_size);
 }

 FUNC_8(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_5->rm_firstdatacol; VAR_7++) {
  VAR_9 = &VAR_5->rm_col[VAR_7];
  if (!VAR_9->rc_tried || VAR_9->rc_error != 0)
   continue;
  if (FUNC_4(VAR_6[VAR_7], VAR_9->rc_abd) != 0) {
   FUNC_7(VAR_4, VAR_9, VAR_6[VAR_7]);
   VAR_9->rc_error = FUNC_2(VAR_0);
   VAR_8++;
  }
  FUNC_6(VAR_6[VAR_7]);
 }

 return (VAR_8);
}
