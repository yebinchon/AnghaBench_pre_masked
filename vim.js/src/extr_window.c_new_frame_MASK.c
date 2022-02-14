
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* w_frame; } ;
typedef TYPE_1__ win_T ;
struct TYPE_5__ {TYPE_1__* fr_win; int fr_layout; } ;
typedef TYPE_2__ frame_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static void
FUNC_1(win_T *VAR_1)
{
    frame_T *VAR_2 = (frame_T *)FUNC_0((unsigned)sizeof(frame_T));

    VAR_1->w_frame = VAR_2;
    if (VAR_2 != ((void*)0))
    {
 VAR_2->fr_layout = VAR_0;
 VAR_2->fr_win = VAR_1;
    }
}
