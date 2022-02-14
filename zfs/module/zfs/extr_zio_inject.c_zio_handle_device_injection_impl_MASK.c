
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ io_offset; int io_flags; scalar_t__ io_type; int io_size; int io_abd; } ;
typedef TYPE_3__ zio_t ;
struct TYPE_12__ {int vs_aux; } ;
struct TYPE_15__ {scalar_t__ vdev_psize; scalar_t__ vdev_guid; TYPE_1__ vdev_stat; } ;
typedef TYPE_4__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {scalar_t__ zi_cmd; scalar_t__ zi_guid; scalar_t__ zi_iotype; int zi_error; scalar_t__ zi_failfast; int zi_freq; } ;
struct TYPE_16__ {TYPE_2__ zi_record; } ;
typedef TYPE_5__ inject_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__* FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (int *,TYPE_5__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_7(vdev_t *VAR_14, zio_t *VAR_15, int VAR_16, int VAR_17)
{
 inject_handler_t *VAR_18;
 int VAR_19 = 0;





 if (VAR_15 != ((void*)0)) {
  uint64_t VAR_20 = VAR_15->io_offset;

  if (VAR_20 < VAR_6 ||
      VAR_20 >= VAR_14->vdev_psize - VAR_5)
   return (0);
 }

 FUNC_5(&VAR_12, VAR_3);

 for (VAR_18 = FUNC_3(&VAR_11); VAR_18 != ((void*)0);
     VAR_18 = FUNC_4(&VAR_11, VAR_18)) {

  if (VAR_18->zi_record.zi_cmd != VAR_7)
   continue;

  if (VAR_14->vdev_guid == VAR_18->zi_record.zi_guid) {
   if (VAR_18->zi_record.zi_failfast &&
       (VAR_15 == ((void*)0) || (VAR_15->io_flags &
       (VAR_8 | VAR_9)))) {
    continue;
   }


   if (VAR_15 != ((void*)0) &&
       VAR_18->zi_record.zi_iotype != VAR_10 &&
       VAR_18->zi_record.zi_iotype != VAR_15->io_type)
    continue;

   if (VAR_18->zi_record.zi_error == VAR_16 ||
       VAR_18->zi_record.zi_error == VAR_17) {



    if (!FUNC_2(VAR_18->zi_record.zi_freq))
     continue;





    if (VAR_16 == VAR_2)
     VAR_14->vdev_stat.vs_aux =
         VAR_4;






    if (!VAR_18->zi_record.zi_failfast &&
        VAR_15 != ((void*)0))
     VAR_15->io_flags |= VAR_8;




    if (VAR_18->zi_record.zi_error == VAR_0) {
     if (VAR_15 == ((void*)0))
      break;


     (void) FUNC_1(VAR_15->io_abd, 0,
         VAR_15->io_size, VAR_13,
         VAR_15);
     break;
    }

    VAR_19 = VAR_18->zi_record.zi_error;
    break;
   }
   if (VAR_18->zi_record.zi_error == VAR_2) {
    VAR_19 = FUNC_0(VAR_1);
    break;
   }
  }
 }

 FUNC_6(&VAR_12);

 return (VAR_19);
}
