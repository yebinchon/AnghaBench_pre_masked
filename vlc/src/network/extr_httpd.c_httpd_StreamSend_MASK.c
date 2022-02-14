
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int b_has_keyframes; int lock; int i_buffer_pos; int i_last_keyframe_seen_pos; int i_buffer_last_pos; } ;
typedef TYPE_1__ httpd_stream_t ;
struct TYPE_7__ {int i_flags; int i_buffer; int p_buffer; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(httpd_stream_t *VAR_2, const block_t *VAR_3)
{
    if (!VAR_3 || !VAR_3->p_buffer)
        return VAR_1;

    FUNC_1(&VAR_2->lock);


    VAR_2->i_buffer_last_pos = VAR_2->i_buffer_pos;

    if (VAR_3->i_flags & VAR_0) {
        VAR_2->b_has_keyframes = 1;
        VAR_2->i_last_keyframe_seen_pos = VAR_2->i_buffer_pos;
    }

    FUNC_0(VAR_2, VAR_3->p_buffer, VAR_3->i_buffer);

    FUNC_2(&VAR_2->lock);
    return VAR_1;
}
