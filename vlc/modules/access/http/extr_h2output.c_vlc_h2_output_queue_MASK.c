
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_queue {struct vlc_h2_frame** last; } ;
struct vlc_h2_output {scalar_t__ size; int lock; int wait; scalar_t__ failed; } ;
struct vlc_h2_frame {struct vlc_h2_frame* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vlc_h2_frame*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct vlc_h2_output *VAR_1,
                               struct vlc_h2_queue *VAR_2, struct vlc_h2_frame *VAR_3)
{
    if (FUNC_2(VAR_3 == ((void*)0)))
        return -1;


    struct vlc_h2_frame **VAR_4 = &VAR_3;
    size_t VAR_5 = 0;

    do
    {
        struct vlc_h2_frame *VAR_6 = *VAR_4;

        VAR_5 += FUNC_4(VAR_6);
        VAR_4 = &VAR_6->next;
    }
    while (*VAR_4 != ((void*)0));

    FUNC_5(&VAR_1->lock);
    if (VAR_1->failed)
        goto error;

    VAR_1->size += VAR_5;
    if (VAR_1->size >= VAR_0)
    {



        VAR_1->size -= VAR_5;
        goto error;
    }

    FUNC_0(*(VAR_2->last) == ((void*)0));
    *(VAR_2->last) = VAR_3;
    VAR_2->last = VAR_4;
    FUNC_3(&VAR_1->wait);
    FUNC_6(&VAR_1->lock);
    return 0;

error:
    FUNC_6(&VAR_1->lock);
    while (VAR_3 != ((void*)0))
    {
        struct vlc_h2_frame *VAR_7 = VAR_3->next;

        FUNC_1(VAR_3);
        VAR_3 = VAR_7;
    }
    return -1;
}
