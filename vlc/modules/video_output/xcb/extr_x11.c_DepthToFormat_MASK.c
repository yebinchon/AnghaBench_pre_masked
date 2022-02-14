
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int visual_id; } ;
typedef TYPE_1__ xcb_visualtype_t ;
typedef int xcb_visualid_t ;
typedef int xcb_setup_t ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ xcb_depth_t ;
typedef int video_format_t ;


 scalar_t__ FUNC_0 (int const*,int ,TYPE_1__ const*,int *) ;
 TYPE_1__* FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*) ;

__attribute__((used)) static xcb_visualid_t FUNC_3(const xcb_setup_t *VAR_0,
                                    const xcb_depth_t *VAR_1,
                                    video_format_t *restrict VAR_2)
{

    const xcb_visualtype_t *VAR_3 = FUNC_1(VAR_1);

    for (int VAR_4 = FUNC_2(VAR_1); VAR_4 > 0; VAR_4--, VAR_3++)
        if (FUNC_0(VAR_0, VAR_1->depth, VAR_3, VAR_2))
            return VAR_3->visual_id;

    return 0;
}
