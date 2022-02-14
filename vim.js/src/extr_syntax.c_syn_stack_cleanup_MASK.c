
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sst_lnum; scalar_t__ sst_tick; struct TYPE_8__* sst_next; } ;
typedef TYPE_2__ synstate_T ;
typedef scalar_t__ disptick_T ;
struct TYPE_7__ {scalar_t__ ml_line_count; } ;
struct TYPE_10__ {TYPE_1__ b_ml; } ;
struct TYPE_9__ {scalar_t__ b_sst_len; scalar_t__ b_sst_lasttick; TYPE_2__* b_sst_first; int * b_sst_array; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1()
{
    synstate_T *VAR_5, *VAR_6;
    disptick_T VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10 = VAR_0;

    if (VAR_3->b_sst_array == ((void*)0) || VAR_3->b_sst_first == ((void*)0))
 return VAR_10;


    if (VAR_3->b_sst_len <= VAR_1)
 VAR_9 = 999999;
    else
 VAR_9 = VAR_4->b_ml.ml_line_count / (VAR_3->b_sst_len - VAR_1) + 1;






    VAR_7 = VAR_3->b_sst_lasttick;
    VAR_8 = VAR_0;
    VAR_6 = VAR_3->b_sst_first;
    for (VAR_5 = VAR_6->sst_next; VAR_5 != ((void*)0); VAR_6 = VAR_5, VAR_5 = VAR_5->sst_next)
    {
 if (VAR_6->sst_lnum + VAR_9 > VAR_5->sst_lnum)
 {
     if (VAR_5->sst_tick > VAR_3->b_sst_lasttick)
     {
  if (!VAR_8 || VAR_5->sst_tick < VAR_7)
      VAR_7 = VAR_5->sst_tick;
  VAR_8 = VAR_2;
     }
     else if (!VAR_8 && VAR_5->sst_tick < VAR_7)
  VAR_7 = VAR_5->sst_tick;
 }
    }





    VAR_6 = VAR_3->b_sst_first;
    for (VAR_5 = VAR_6->sst_next; VAR_5 != ((void*)0); VAR_6 = VAR_5, VAR_5 = VAR_5->sst_next)
    {
 if (VAR_5->sst_tick == VAR_7 && VAR_6->sst_lnum + VAR_9 > VAR_5->sst_lnum)
 {

     VAR_6->sst_next = VAR_5->sst_next;
     FUNC_0(VAR_3, VAR_5);
     VAR_5 = VAR_6;
     VAR_10 = VAR_2;
 }
    }
    return VAR_10;
}
