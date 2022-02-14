
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ request_count; int lock; int wait; TYPE_2__* picture; } ;
typedef TYPE_1__ vout_snapshot_t ;
typedef int video_format_t ;
struct TYPE_8__ {struct TYPE_8__* p_next; int format; } ;
typedef TYPE_2__ picture_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(vout_snapshot_t *VAR_0,
                       const video_format_t *VAR_1,
                       picture_t *VAR_2)
{
    if (VAR_0 == ((void*)0))
        return;

    if (!VAR_1)
        VAR_1 = &VAR_2->format;

    FUNC_3(&VAR_0->lock);
    while (VAR_0->request_count > 0) {
        picture_t *VAR_3 = FUNC_0(VAR_2);
        if (!VAR_3)
            break;

        FUNC_1( &VAR_3->format, VAR_1 );

        VAR_3->p_next = VAR_0->picture;
        VAR_0->picture = VAR_3;
        VAR_0->request_count--;
    }
    FUNC_2(&VAR_0->wait);
    FUNC_4(&VAR_0->lock);
}
