
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ io_type; scalar_t__ io_spa; scalar_t__ io_bp; TYPE_1__* io_logical; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_13__ {scalar_t__ zi_cmd; } ;
struct TYPE_12__ {scalar_t__ zi_spa; TYPE_4__ zi_record; } ;
typedef TYPE_3__ inject_handler_t ;
struct TYPE_10__ {int io_bookmark; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,int ,int ,TYPE_4__*,int) ;

int
FUNC_7(zio_t *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 inject_handler_t *VAR_9;




 if (VAR_6->io_logical == ((void*)0))
  return (0);




 if (VAR_6->io_type != VAR_3)
  return (0);

 FUNC_3(&VAR_5, VAR_1);

 for (VAR_9 = FUNC_1(&VAR_4); VAR_9 != ((void*)0);
     VAR_9 = FUNC_2(&VAR_4, VAR_9)) {
  if (VAR_6->io_spa != VAR_9->zi_spa ||
      VAR_9->zi_record.zi_cmd != VAR_2)
   continue;


  if (FUNC_6(&VAR_6->io_logical->io_bookmark,
      VAR_6->io_bp ? FUNC_0(VAR_6->io_bp) : VAR_0,
      FUNC_5(VAR_6), &VAR_9->zi_record, VAR_7)) {
   VAR_8 = VAR_7;
   break;
  }
 }

 FUNC_4(&VAR_5);

 return (VAR_8);
}
