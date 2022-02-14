
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* sst_next; } ;
typedef TYPE_2__ synstate_T ;
struct TYPE_9__ {long b_sst_len; int b_sst_freecount; TYPE_2__* b_sst_array; TYPE_2__* b_sst_firstfree; TYPE_2__* b_sst_first; } ;
struct TYPE_6__ {int ml_line_count; } ;
struct TYPE_8__ {TYPE_1__ b_ml; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3()
{
    long VAR_6;
    synstate_T *VAR_7, *VAR_8;
    synstate_T *VAR_9;

    VAR_6 = VAR_5->b_ml.ml_line_count / VAR_1 + VAR_0 * 2;
    if (VAR_6 < VAR_3)
 VAR_6 = VAR_3;
    else if (VAR_6 > VAR_2)
 VAR_6 = VAR_2;
    if (VAR_4->b_sst_len > VAR_6 * 2 || VAR_4->b_sst_len < VAR_6)
    {

 VAR_6 = VAR_5->b_ml.ml_line_count;
 VAR_6 = (VAR_6 + VAR_6 / 2) / VAR_1 + VAR_0 * 2;
 if (VAR_6 < VAR_3)
     VAR_6 = VAR_3;
 else if (VAR_6 > VAR_2)
     VAR_6 = VAR_2;

 if (VAR_4->b_sst_array != ((void*)0))
 {


     while (VAR_4->b_sst_len - VAR_4->b_sst_freecount + 2 > VAR_6
      && FUNC_1())
  ;
     if (VAR_6 < VAR_4->b_sst_len - VAR_4->b_sst_freecount + 2)
  VAR_6 = VAR_4->b_sst_len - VAR_4->b_sst_freecount + 2;
 }

 VAR_9 = (synstate_T *)FUNC_0((unsigned)(VAR_6 * sizeof(synstate_T)));
 if (VAR_9 == ((void*)0))
     return;

 VAR_7 = VAR_9 - 1;
 if (VAR_4->b_sst_array != ((void*)0))
 {

     for (VAR_8 = VAR_4->b_sst_first; VAR_8 != ((void*)0);
       VAR_8 = VAR_8->sst_next)
     {
  ++VAR_7;
  *VAR_7 = *VAR_8;
  VAR_7->sst_next = VAR_7 + 1;
     }
 }
 if (VAR_7 != VAR_9 - 1)
 {
     VAR_7->sst_next = ((void*)0);
     VAR_4->b_sst_first = VAR_9;
     VAR_4->b_sst_freecount = VAR_6 - (int)(VAR_7 - VAR_9) - 1;
 }
 else
 {
     VAR_4->b_sst_first = ((void*)0);
     VAR_4->b_sst_freecount = VAR_6;
 }


 VAR_4->b_sst_firstfree = VAR_7 + 1;
 while (++VAR_7 < VAR_9 + VAR_6)
     VAR_7->sst_next = VAR_7 + 1;
 (VAR_9 + VAR_6 - 1)->sst_next = ((void*)0);

 FUNC_2(VAR_4->b_sst_array);
 VAR_4->b_sst_array = VAR_9;
 VAR_4->b_sst_len = VAR_6;
    }
}
