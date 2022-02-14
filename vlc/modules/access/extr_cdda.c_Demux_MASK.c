
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_11__ {scalar_t__ position; scalar_t__ length; unsigned int start; int pts; int es; int vcddev; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_12__ {int i_nb_samples; int i_buffer; int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,unsigned int,int ,unsigned int,int ) ;
 int FUNC_8 (TYPE_1__*,char*,unsigned int) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(demux_t *VAR_5)
{
    demux_sys_t *VAR_6 = VAR_5->p_sys;
    unsigned VAR_7 = VAR_0;

    if (VAR_6->position >= VAR_6->length)
        return VAR_3;

    if (VAR_6->position + VAR_7 >= VAR_6->length)
        VAR_7 = VAR_6->length - VAR_6->position;

    block_t *VAR_8 = FUNC_1(VAR_7 * VAR_1);
    if (FUNC_9(VAR_8 == ((void*)0)))
        return VAR_3;

    if (FUNC_7(FUNC_0(VAR_5), VAR_6->vcddev,
                          VAR_6->start + VAR_6->position,
                          VAR_8->p_buffer, VAR_7, VAR_2) < 0)
    {
        FUNC_8(VAR_5, "cannot read sector %u", VAR_6->position);
        FUNC_2(VAR_8);


        VAR_6->position++;
        return VAR_4;
    }

    VAR_6->position += VAR_7;

    VAR_8->i_nb_samples = VAR_8->i_buffer / 4;
    VAR_8->i_dts = VAR_8->i_pts = FUNC_3(&VAR_6->pts);
    FUNC_4(&VAR_6->pts, VAR_8->i_nb_samples);

    FUNC_5(VAR_5->out, VAR_6->es, VAR_8);
    FUNC_6(VAR_5->out, FUNC_3(&VAR_6->pts));
    return VAR_4;
}
