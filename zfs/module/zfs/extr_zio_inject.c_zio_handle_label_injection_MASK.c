
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ io_offset; TYPE_3__* io_vd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_11__ {scalar_t__ vdev_psize; scalar_t__ vdev_guid; } ;
typedef TYPE_3__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {scalar_t__ zi_start; scalar_t__ zi_end; scalar_t__ zi_cmd; scalar_t__ zi_guid; } ;
struct TYPE_12__ {TYPE_1__ zi_record; } ;
typedef TYPE_4__ inject_handler_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int,scalar_t__) ;

int
FUNC_6(zio_t *VAR_6, int VAR_7)
{
 inject_handler_t *VAR_8;
 vdev_t *VAR_9 = VAR_6->io_vd;
 uint64_t VAR_10 = VAR_6->io_offset;
 int VAR_11;
 int VAR_12 = 0;

 if (VAR_10 >= VAR_2 &&
     VAR_10 < VAR_9->vdev_psize - VAR_1)
  return (0);

 FUNC_2(&VAR_5, VAR_0);

 for (VAR_8 = FUNC_0(&VAR_4); VAR_8 != ((void*)0);
     VAR_8 = FUNC_1(&VAR_4, VAR_8)) {
  uint64_t VAR_13 = VAR_8->zi_record.zi_start;
  uint64_t VAR_14 = VAR_8->zi_record.zi_end;

  if (VAR_8->zi_record.zi_cmd != VAR_3)
   continue;






  VAR_11 = FUNC_4(VAR_9->vdev_psize, VAR_10);
  VAR_13 = FUNC_5(VAR_9->vdev_psize, VAR_11, VAR_13);
  VAR_14 = FUNC_5(VAR_9->vdev_psize, VAR_11, VAR_14);

  if (VAR_6->io_vd->vdev_guid == VAR_8->zi_record.zi_guid &&
      (VAR_10 >= VAR_13 && VAR_10 <= VAR_14)) {
   VAR_12 = VAR_7;
   break;
  }
 }
 FUNC_3(&VAR_5);
 return (VAR_12);
}
