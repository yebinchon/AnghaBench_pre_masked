
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct adjust_data {int dummy; } ;
struct TYPE_3__ {int pf_video_filter; } ;
typedef TYPE_1__ filter_t ;
typedef int VAProcPipelineCaps ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__* const,int ,int *,struct adjust_data* const,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 struct adjust_data* FUNC_1 (int,int) ;
 int FUNC_2 (struct adjust_data* const) ;
 int FUNC_3 (int *,int ,int ,struct adjust_data* const) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(vlc_object_t * VAR_12)
{
    VAProcPipelineCaps VAR_13;
    filter_t *const VAR_14 = (filter_t *)VAR_12;
    struct adjust_data *const VAR_15 = FUNC_1(1, sizeof(*VAR_15));
    if (!VAR_15)
        return VAR_6;

    for (unsigned int VAR_16 = 0; VAR_16 < VAR_2; ++VAR_16)
        FUNC_4(VAR_12, VAR_11[VAR_16],
                   VAR_9 | VAR_8 | VAR_10);

    if (FUNC_0(VAR_14, VAR_4, &VAR_13, VAR_15,
             VAR_3, ((void*)0)))
        goto error;

    for (unsigned int VAR_17 = 0; VAR_17 < VAR_2; ++VAR_17)
        FUNC_3(VAR_12, VAR_11[VAR_17], VAR_1, VAR_15);

    VAR_14->pf_video_filter = VAR_0;

    return VAR_7;

error:
    for (unsigned int VAR_18 = 0; VAR_18 < VAR_2; ++VAR_18)
        FUNC_5(VAR_12, VAR_11[VAR_18]);
    FUNC_2(VAR_15);
    return VAR_5;
}
