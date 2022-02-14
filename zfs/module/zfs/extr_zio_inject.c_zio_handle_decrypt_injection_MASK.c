
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_7__ {scalar_t__ zi_cmd; } ;
struct TYPE_6__ {TYPE_2__ zi_record; int * zi_spa; } ;
typedef TYPE_1__ inject_handler_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*,int ,int ,TYPE_2__*,int) ;

int
FUNC_5(spa_t *VAR_5, const zbookmark_phys_t *VAR_6,
    uint64_t VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 inject_handler_t *VAR_10;

 FUNC_2(&VAR_4, VAR_0);

 for (VAR_10 = FUNC_0(&VAR_3); VAR_10 != ((void*)0);
     VAR_10 = FUNC_1(&VAR_3, VAR_10)) {

  if (VAR_5 != VAR_10->zi_spa ||
      VAR_10->zi_record.zi_cmd != VAR_1)
   continue;

  if (FUNC_4(VAR_6, VAR_7, VAR_2,
      &VAR_10->zi_record, VAR_8)) {
   VAR_9 = VAR_8;
   break;
  }
 }

 FUNC_3(&VAR_4);
 return (VAR_9);
}
