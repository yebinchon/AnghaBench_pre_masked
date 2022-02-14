
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int spa_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ zi_cmd; int zi_duration; scalar_t__ zi_timer; } ;
struct TYPE_7__ {TYPE_1__ zi_record; int * zi_spa; } ;
typedef TYPE_2__ inject_handler_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ VAR_5 ;

void
FUNC_8(spa_t *VAR_6)
{
 inject_handler_t *VAR_7;

 if (VAR_5 == 0)
  return;

 FUNC_5(&VAR_4, VAR_0);

 for (VAR_7 = FUNC_3(&VAR_3); VAR_7 != ((void*)0);
     VAR_7 = FUNC_4(&VAR_3, VAR_7)) {

  if (VAR_6 != VAR_7->zi_spa ||
      VAR_7->zi_record.zi_cmd != VAR_1)
   continue;

  if (VAR_7->zi_record.zi_duration > 0) {
   FUNC_0(VAR_7->zi_record.zi_timer == 0 ||
       FUNC_2(
       (int64_t)VAR_7->zi_record.zi_timer +
       VAR_7->zi_record.zi_duration * VAR_2,
       FUNC_1()));
  } else {

   FUNC_0(VAR_7->zi_record.zi_timer == 0 ||
       VAR_7->zi_record.zi_timer -
       VAR_7->zi_record.zi_duration >=
       FUNC_7(VAR_6));
  }
 }

 FUNC_6(&VAR_4);
}
