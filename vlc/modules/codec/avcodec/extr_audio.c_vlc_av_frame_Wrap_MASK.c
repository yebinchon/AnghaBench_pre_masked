
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int i_nb_samples; } ;
struct TYPE_9__ {TYPE_3__* frame; TYPE_2__ self; } ;
typedef TYPE_1__ vlc_av_frame_t ;
typedef TYPE_2__ block_t ;
struct TYPE_11__ {scalar_t__* linesize; int nb_samples; int * extended_data; } ;
typedef TYPE_3__ AVFrame ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int *,int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static block_t *FUNC_5(AVFrame *VAR_2)
{
    for (unsigned VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
        FUNC_0(VAR_2->linesize[VAR_3] == 0);

    if (FUNC_1(VAR_2))
        return ((void*)0);

    vlc_av_frame_t *VAR_4 = FUNC_3(sizeof (*VAR_4));
    if (FUNC_4(VAR_4 == ((void*)0)))
        return ((void*)0);

    block_t *VAR_5 = &VAR_4->self;

    FUNC_2(VAR_5, &VAR_1,
               VAR_2->extended_data[0], VAR_2->linesize[0]);
    VAR_5->i_nb_samples = VAR_2->nb_samples;
    VAR_4->frame = VAR_2;
    return VAR_5;
}
