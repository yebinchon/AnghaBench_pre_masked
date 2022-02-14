
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int spu_t ;
struct TYPE_10__ {int i_width; int i_visible_width; int i_height; int i_visible_height; } ;
struct TYPE_12__ {TYPE_2__ video; } ;
struct TYPE_9__ {int * sys; } ;
struct TYPE_11__ {int p_module; int pf_get_attachments; TYPE_7__ fmt_out; TYPE_7__ fmt_in; TYPE_1__ owner; } ;
typedef TYPE_3__ filter_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,char*,char*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static filter_t *FUNC_4(spu_t *VAR_2)
{
    filter_t *VAR_3 = FUNC_2(VAR_2, sizeof(*VAR_3), "spu text");
    if (!VAR_3)
        return ((void*)0);

    VAR_3->owner.sys = VAR_2;

    FUNC_0(&VAR_3->fmt_in, VAR_0, 0);

    FUNC_0(&VAR_3->fmt_out, VAR_0, 0);
    VAR_3->fmt_out.video.i_width =
    VAR_3->fmt_out.video.i_visible_width = 32;
    VAR_3->fmt_out.video.i_height =
    VAR_3->fmt_out.video.i_visible_height = 32;

    VAR_3->pf_get_attachments = VAR_1;

    VAR_3->p_module = FUNC_1(VAR_3, "text renderer", "text-renderer");
    if (!VAR_3->p_module)
    {
        FUNC_3(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
