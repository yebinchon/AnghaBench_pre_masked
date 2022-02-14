
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {struct deint_data* const pp_pics; } ;
struct TYPE_7__ {struct deint_data* const surfaces; } ;
struct deint_data {TYPE_3__ history; TYPE_2__ forward_refs; TYPE_1__* meta; scalar_t__ b_double_rate; } ;
struct TYPE_9__ {int pf_flush; int pf_video_filter; } ;
typedef TYPE_4__ filter_t ;
typedef int VAProcPipelineCaps ;
struct TYPE_6__ {int i_nb_fields; int date; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__* const,int ,int *,struct deint_data* const,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct deint_data* FUNC_1 (int,int) ;
 int FUNC_2 (struct deint_data* const) ;

__attribute__((used)) static int
FUNC_3(vlc_object_t * VAR_11)
{
    VAProcPipelineCaps VAR_12;
    filter_t *const VAR_13 = (filter_t *)VAR_11;
    struct deint_data *const VAR_14 = FUNC_1(1, sizeof(*VAR_14));
    if (!VAR_14)
        return VAR_8;

    if (FUNC_0(VAR_13, VAR_6, &VAR_12, VAR_14,
             VAR_4, VAR_5))
        goto error;

    if (VAR_14->b_double_rate)
        VAR_13->pf_video_filter = VAR_1;
    else
        VAR_13->pf_video_filter = VAR_0;
    VAR_13->pf_flush = VAR_2;

    for (unsigned int VAR_15 = 0; VAR_15 < VAR_3; ++VAR_15)
    {
        VAR_14->meta[VAR_15].date = VAR_10;
        VAR_14->meta[VAR_15].i_nb_fields = 2;
    }

    return VAR_9;

error:
    if (VAR_14->forward_refs.surfaces)
        FUNC_2(VAR_14->forward_refs.surfaces);
    if (VAR_14->history.pp_pics)
        FUNC_2(VAR_14->history.pp_pics);
    FUNC_2(VAR_14);
    return VAR_7;
}
