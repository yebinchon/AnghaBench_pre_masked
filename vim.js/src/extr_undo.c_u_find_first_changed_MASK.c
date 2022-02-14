
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int lnum; } ;
struct TYPE_8__ {TYPE_6__ uh_cursor; TYPE_3__* uh_entry; } ;
typedef TYPE_2__ u_header_T ;
struct TYPE_9__ {scalar_t__ ue_top; scalar_t__ ue_bot; int ue_size; int * ue_array; } ;
typedef TYPE_3__ u_entry_T ;
typedef int linenr_T ;
struct TYPE_7__ {int ml_line_count; } ;
struct TYPE_10__ {TYPE_1__ b_ml; int * b_u_curhead; TYPE_2__* b_u_newhead; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (TYPE_4__*,int,int ) ;

void
FUNC_3()
{
    u_header_T *VAR_2 = VAR_1->b_u_newhead;
    u_entry_T *VAR_3;
    linenr_T VAR_4;

    if (VAR_1->b_u_curhead != ((void*)0) || VAR_2 == ((void*)0))
 return;


    VAR_3 = VAR_2->uh_entry;
    if (VAR_3->ue_top != 0 || VAR_3->ue_bot != 0)
 return;

    for (VAR_4 = 1; VAR_4 < VAR_1->b_ml.ml_line_count
           && VAR_4 <= VAR_3->ue_size; ++VAR_4)
 if (FUNC_0(FUNC_2(VAR_1, VAR_4, VAR_0),
      VAR_3->ue_array[VAR_4 - 1]) != 0)
 {
     FUNC_1(&(VAR_2->uh_cursor));
     VAR_2->uh_cursor.lnum = VAR_4;
     return;
 }
    if (VAR_1->b_ml.ml_line_count != VAR_3->ue_size)
    {

 FUNC_1(&(VAR_2->uh_cursor));
 VAR_2->uh_cursor.lnum = VAR_4;
    }
}
