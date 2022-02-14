
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct demux_sys {size_t chapter_count; size_t chapter_gap; int null_names; int length; } ;
typedef size_t ssize_t ;
struct TYPE_9__ {TYPE_3__** seekpoint; int i_seekpoint; int * psz_name; int i_length; } ;
typedef TYPE_1__ input_title_t ;
struct TYPE_10__ {struct demux_sys* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {size_t i_time_offset; int psz_name; } ;


 int FUNC_0 (int *,char*,size_t,...) ;
 TYPE_3__** FUNC_1 (size_t,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 TYPE_3__* FUNC_4 () ;

__attribute__((used)) static input_title_t *
FUNC_5(demux_t *VAR_0, size_t VAR_1)
{
    struct demux_sys *VAR_2 = VAR_0->p_sys;

    input_title_t *VAR_3 = FUNC_3();
    if (!VAR_3)
        return ((void*)0);

    VAR_3->i_length = VAR_2->length;
    if (!VAR_2->null_names
     && FUNC_0(VAR_3->psz_name, "Mock Title %zu", VAR_1) == -1)
    {
        VAR_3->psz_name = ((void*)0);
        FUNC_2(VAR_3);
        return ((void*)0);
    }
    VAR_3->seekpoint = FUNC_1(VAR_2->chapter_count, sizeof(*VAR_3->seekpoint));
    if (!VAR_3->seekpoint)
    {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    for (ssize_t VAR_4 = 0; VAR_4 < VAR_2->chapter_count; ++VAR_4)
    {
        VAR_3->seekpoint[VAR_4] = FUNC_4();
        if (!VAR_3->seekpoint[VAR_4])
        {
            FUNC_2(VAR_3);
            return ((void*)0);
        }
        VAR_3->i_seekpoint++;
        if (!VAR_2->null_names
         && FUNC_0(&VAR_3->seekpoint[VAR_4]->psz_name, "Mock Chapter %zu-%zu", VAR_1, VAR_4)
            == -1)
        {
            FUNC_2(VAR_3);
            return ((void*)0);
        }
        VAR_3->seekpoint[VAR_4]->i_time_offset = VAR_4 * VAR_2->chapter_gap;
    }
    return VAR_3;
}
