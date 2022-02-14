
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_es_id_t ;
struct TYPE_3__ {size_t size; struct report_track_selection* data; } ;
typedef TYPE_1__ vec_on_track_selection_changed ;
struct report_track_selection {int * selected_id; int * unselected_id; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(vec_on_track_selection_changed *VAR_0,
                                 size_t VAR_1, vlc_es_id_t *VAR_2,
                                 vlc_es_id_t *VAR_3)
{
    FUNC_0(VAR_0->size >= VAR_1);
    bool VAR_4 = 0, VAR_5 = 0;
    for (size_t VAR_6 = VAR_1; VAR_6 < VAR_0->size; ++VAR_6)
    {
        struct report_track_selection VAR_7 = VAR_0->data[VAR_6];
        if (VAR_2 && VAR_7.unselected_id == VAR_2)
        {
            FUNC_0(!VAR_4);
            VAR_4 = 1;
        }
        if (VAR_3 && VAR_7.selected_id == VAR_3)
        {
            FUNC_0(!VAR_5);
            VAR_5 = 1;
        }
    }
    if (VAR_2 && VAR_3)
        return VAR_4 && VAR_5;
    else if (VAR_2)
    {
        FUNC_0(!VAR_5);
        return VAR_4;
    }
    else
    {
        FUNC_0(*VAR_3);
        FUNC_0(!VAR_4);
        return VAR_5;
    }
}
