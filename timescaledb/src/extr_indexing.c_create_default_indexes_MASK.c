
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int column_name; } ;
struct TYPE_13__ {TYPE_1__ fd; } ;
struct TYPE_12__ {int ordering; int name; int type; int expr; } ;
typedef TYPE_2__ IndexElem ;
typedef int Hypertable ;
typedef TYPE_3__ Dimension ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(Hypertable *VAR_3, Dimension *VAR_4, Dimension *VAR_5, bool VAR_6,
        bool VAR_7)
{
 IndexElem VAR_8 = {
  .type = VAR_2,
  .name = FUNC_3(VAR_4),
  .ordering = VAR_1,
  .expr = FUNC_2(VAR_4),
 };


 if (((void*)0) == VAR_4)
  return;


 if (!VAR_6)
  FUNC_1(VAR_3, FUNC_4(&VAR_8));


 if (VAR_5 != ((void*)0) && !VAR_7)
 {
  IndexElem VAR_9 = {
   .type = VAR_2,
   .name = FUNC_0(VAR_5->fd.column_name),
   .ordering = VAR_0,
  };

  FUNC_1(VAR_3, FUNC_5(&VAR_9, &VAR_8));
 }
}
