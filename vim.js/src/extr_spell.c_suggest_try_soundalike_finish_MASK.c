
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int * ht_array; scalar_t__ ht_used; } ;
struct TYPE_11__ {scalar_t__ ga_len; } ;
struct TYPE_12__ {TYPE_5__ sl_sounddone; int * sl_sbyts; TYPE_2__ sl_sal; } ;
typedef TYPE_3__ slang_T ;
struct TYPE_13__ {TYPE_3__* lp_slang; } ;
typedef TYPE_4__ langp_T ;
typedef int hashitem_T ;
struct TYPE_16__ {int ga_len; } ;
struct TYPE_15__ {TYPE_1__* w_s; } ;
struct TYPE_10__ {TYPE_9__ b_langp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (TYPE_9__,int) ;
 TYPE_7__* VAR_0 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6()
{
    langp_T *VAR_1;
    int VAR_2;
    slang_T *VAR_3;
    int VAR_4;
    hashitem_T *VAR_5;



    for (VAR_2 = 0; VAR_2 < VAR_0->w_s->b_langp.ga_len; ++VAR_2)
    {
 VAR_1 = FUNC_2(VAR_0->w_s->b_langp, VAR_2);
 VAR_3 = VAR_1->lp_slang;
 if (VAR_3->sl_sal.ga_len > 0 && VAR_3->sl_sbyts != ((void*)0))
 {

     VAR_4 = (int)VAR_3->sl_sounddone.ht_used;
     for (VAR_5 = VAR_3->sl_sounddone.ht_array; VAR_4 > 0; ++VAR_5)
  if (!FUNC_0(VAR_5))
  {
      FUNC_5(FUNC_1(VAR_5));
      --VAR_4;
  }


     FUNC_3(&VAR_3->sl_sounddone);
     FUNC_4(&VAR_3->sl_sounddone);
 }
    }
}
