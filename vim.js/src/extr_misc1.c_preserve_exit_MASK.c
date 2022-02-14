
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ml_mfp; } ;
struct TYPE_7__ {TYPE_2__ b_ml; struct TYPE_7__* b_next; } ;
typedef TYPE_3__ buf_T ;
struct TYPE_5__ {int * mf_fname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 () ;

void
FUNC_9()
{
    buf_T *VAR_5;

    FUNC_7();



    VAR_4 = VAR_2;

    FUNC_6(VAR_1);
    FUNC_8();
    FUNC_5();

    FUNC_3();

    for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->b_next)
    {
 if (VAR_5->b_ml.ml_mfp != ((void*)0) && VAR_5->b_ml.ml_mfp->mf_fname != ((void*)0))
 {
     FUNC_0("Vim: preserving files...\n");
     FUNC_8();
     FUNC_5();
     FUNC_4(VAR_0, VAR_0);
     break;
 }
    }

    FUNC_2(VAR_0);

    FUNC_0("Vim: Finished.\n");

    FUNC_1(1);
}
