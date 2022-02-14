
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_queue {struct vlc_h2_frame** last; struct vlc_h2_frame* first; } ;
struct vlc_h2_output {size_t size; int lock; int wait; int closing; struct vlc_h2_queue queue; struct vlc_h2_queue prio; } ;
struct vlc_h2_frame {struct vlc_h2_frame* next; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 size_t FUNC_3 (struct vlc_h2_frame*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static struct vlc_h2_frame *FUNC_8(struct vlc_h2_output *VAR_0)
{
    struct vlc_h2_queue *VAR_1;
    struct vlc_h2_frame *VAR_2;
    size_t VAR_3;

    FUNC_4(&VAR_0->lock);

    for (;;)
    {
        VAR_1 = &VAR_0->prio;
        if (VAR_1->first != ((void*)0))
            break;

        VAR_1 = &VAR_0->queue;
        if (VAR_1->first != ((void*)0))
            break;

        if (FUNC_1(VAR_0->closing))
        {
            FUNC_5(&VAR_0->lock);
            return ((void*)0);
        }

        int VAR_4 = FUNC_7();
        FUNC_2(&VAR_0->wait, &VAR_0->lock);
        FUNC_6(VAR_4);
    }

    VAR_2 = VAR_1->first;
    VAR_1->first = VAR_2->next;
    if (VAR_2->next == ((void*)0))
    {
        FUNC_0(VAR_1->last == &VAR_2->next);
        VAR_1->last = &VAR_1->first;
    }
    FUNC_0(VAR_1->last != &VAR_2->next);

    VAR_3 = FUNC_3(VAR_2);
    FUNC_0(VAR_0->size >= VAR_3);
    VAR_0->size -= VAR_3;

    FUNC_5(&VAR_0->lock);

    VAR_2->next = ((void*)0);
    return VAR_2;
}
