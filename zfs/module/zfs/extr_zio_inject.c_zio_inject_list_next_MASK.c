
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zinject_record_t ;
struct TYPE_5__ {int zi_id; int zi_spa; int zi_record; } ;
typedef TYPE_1__ inject_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (char*,int ,size_t) ;

int
FUNC_9(int *VAR_5, char *VAR_6, size_t VAR_7,
    zinject_record_t *VAR_8)
{
 inject_handler_t *VAR_9;
 int VAR_10;

 FUNC_3(&VAR_4);
 FUNC_5(&VAR_3, VAR_1);

 for (VAR_9 = FUNC_1(&VAR_2); VAR_9 != ((void*)0);
     VAR_9 = FUNC_2(&VAR_2, VAR_9))
  if (VAR_9->zi_id > *VAR_5)
   break;

 if (VAR_9) {
  *VAR_8 = VAR_9->zi_record;
  *VAR_5 = VAR_9->zi_id;
  (void) FUNC_8(VAR_6, FUNC_7(VAR_9->zi_spa), VAR_7);
  VAR_10 = 0;
 } else {
  VAR_10 = FUNC_0(VAR_0);
 }

 FUNC_6(&VAR_3);
 FUNC_4(&VAR_4);

 return (VAR_10);
}
