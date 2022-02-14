
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int vimTextArea; } ;
struct TYPE_17__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_14__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_16__ {TYPE_2__ ul; TYPE_1__ lr; } ;
struct TYPE_15__ {TYPE_4__ rect; struct TYPE_15__* next; } ;
typedef int PtWidget_t ;
typedef TYPE_3__ PhTile_t ;
typedef TYPE_4__ PhRect_t ;
typedef TYPE_5__ PhPoint_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(PtWidget_t *VAR_4, PhTile_t *VAR_5)
{
    PhRect_t *VAR_6;
    PhPoint_t VAR_7;
    PhPoint_t VAR_8;

    if (VAR_3 == VAR_1)
 return;

    FUNC_4(VAR_0, VAR_4, VAR_5);
    FUNC_1(&VAR_8);
    FUNC_0();
    FUNC_5(VAR_4, &VAR_7);
    FUNC_3(&VAR_7, FUNC_6(VAR_2.vimTextArea, ((void*)0)));



    if (VAR_5->next != ((void*)0))
 VAR_5 = VAR_5->next;

    while (VAR_5 != ((void*)0))
    {
 VAR_6 = &VAR_5->rect;
 FUNC_7(
  VAR_6->ul.x - VAR_7.x, VAR_6->ul.y - VAR_7.y,
  VAR_6->lr.x - VAR_6->ul.x + 1,
  VAR_6->lr.y - VAR_6->ul.y + 1);
 VAR_5 = VAR_5->next;
    }
    FUNC_2(&VAR_8, 0);
}
