
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct range {int dummy; } ;
struct TYPE_4__ {char const* psz_name; struct range const* p_vlc_range; } ;
struct basic_filter_data {TYPE_1__ sigma; int filter_type; } ;
struct TYPE_5__ {int pf_video_filter; int psz_name; } ;
typedef TYPE_2__ filter_t ;
typedef int VAProcPipelineCaps ;
typedef int VAProcFilterType ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__* const,int ,int *,struct basic_filter_data* const,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 struct basic_filter_data* FUNC_2 (int,int) ;
 int FUNC_3 (struct basic_filter_data* const) ;
 int FUNC_4 (int *,char const*,int ,struct basic_filter_data* const) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int *,char const*) ;

__attribute__((used)) static int
FUNC_7(vlc_object_t * VAR_9, VAProcFilterType VAR_10,
                const char *VAR_11, struct range const *VAR_12)
{
    VAProcPipelineCaps VAR_13;
    filter_t *const VAR_14 = (filter_t *)VAR_9;
    FUNC_1(VAR_14->psz_name);
    struct basic_filter_data *const VAR_15 = FUNC_2(1, sizeof(*VAR_15));
    if (!VAR_15)
        return VAR_4;

    VAR_15->filter_type = VAR_10;
    VAR_15->sigma.psz_name = VAR_11;
    VAR_15->sigma.p_vlc_range = VAR_12;

    FUNC_5(VAR_9, VAR_15->sigma.psz_name,
               VAR_7 | VAR_6 | VAR_8);

    if (FUNC_0(VAR_14, VAR_15->filter_type, &VAR_13, VAR_15,
             VAR_2, ((void*)0)))
        goto error;

    FUNC_4(VAR_9, VAR_15->sigma.psz_name, VAR_1, VAR_15);

    VAR_14->pf_video_filter = VAR_0;

    return VAR_5;

error:
    FUNC_6(VAR_9, VAR_15->sigma.psz_name);
    FUNC_3(VAR_15);
    return VAR_3;
}
