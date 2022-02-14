
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * first; int ** last; } ;
struct TYPE_3__ {int * first; int ** last; } ;
struct vlc_h2_output {int failed; TYPE_2__ queue; TYPE_1__ prio; int lock; int tls; } ;
struct vlc_h2_frame {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct vlc_h2_frame*) ;
 struct vlc_h2_frame* FUNC_1 (struct vlc_h2_output*) ;
 int FUNC_2 (struct vlc_h2_output*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void *FUNC_5(void *VAR_0)
{
    struct vlc_h2_output *VAR_1 = VAR_0;
    struct vlc_h2_frame *VAR_2;

    while ((VAR_2 = FUNC_1(VAR_1)) != ((void*)0))
    {
        if (FUNC_0(VAR_1->tls, VAR_2))
        {

            FUNC_3(&VAR_1->lock);
            VAR_1->failed = 1;
            FUNC_4(&VAR_1->lock);



            FUNC_2(VAR_1);
            VAR_1->prio.first = ((void*)0);
            VAR_1->prio.last = &VAR_1->prio.first;
            VAR_1->queue.first = ((void*)0);
            VAR_1->queue.last = &VAR_1->queue.first;
            break;
        }
    }

    return ((void*)0);
}
