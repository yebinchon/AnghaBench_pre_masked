
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct vlc_h2_frame* first; } ;
struct TYPE_3__ {struct vlc_h2_frame* first; } ;
struct vlc_h2_output {TYPE_2__ queue; TYPE_1__ prio; } ;
struct vlc_h2_frame {struct vlc_h2_frame* next; } ;


 int FUNC_0 (struct vlc_h2_frame*) ;

__attribute__((used)) static void FUNC_1(struct vlc_h2_output *VAR_0)
{
    for (struct vlc_h2_frame *VAR_1 = VAR_0->prio.first, *VAR_2; VAR_1 != ((void*)0); VAR_1 = VAR_2)
    {
        VAR_2 = VAR_1->next;
        FUNC_0(VAR_1);
    }
    for (struct vlc_h2_frame *VAR_3 = VAR_0->queue.first, *VAR_4; VAR_3 != ((void*)0); VAR_3 = VAR_4)
    {
        VAR_4 = VAR_3->next;
        FUNC_0(VAR_3);
    }
}
