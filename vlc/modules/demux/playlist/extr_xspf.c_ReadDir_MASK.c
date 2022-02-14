
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_tracklist_entries; int i_track_id; int ** pp_tracklist; int psz_base; } ;
typedef TYPE_1__ xspf_sys_t ;
typedef int xml_reader_t ;
struct TYPE_8__ {int s; int psz_url; TYPE_1__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int *,char*,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char const**) ;

__attribute__((used)) static int FUNC_9(stream_t *VAR_1, input_item_node_t *VAR_2)
{
    xspf_sys_t *VAR_3 = VAR_1->p_sys;
    int VAR_4 = -1;
    xml_reader_t *VAR_5 = ((void*)0);
    const char *VAR_6 = ((void*)0);

    VAR_3->pp_tracklist = ((void*)0);
    VAR_3->i_tracklist_entries = 0;
    VAR_3->i_track_id = -1;
    VAR_3->psz_base = FUNC_4(VAR_1->psz_url);


    VAR_5 = FUNC_5(VAR_1, VAR_1->s);
    if (!VAR_5)
        goto end;


    if (FUNC_8(VAR_5, &VAR_6) != VAR_0)
    {
        FUNC_1(VAR_1, "can't read xml stream");
        goto end;
    }


    if (FUNC_3(VAR_6, "playlist"))
    {
        FUNC_1(VAR_1, "invalid root node name <%s>", VAR_6);
        goto end;
    }

    if(FUNC_7(VAR_5))
        goto end;

    VAR_4 = FUNC_2(VAR_1, VAR_2,
                                 VAR_5, "playlist", 0 ) ? 0 : -1;

    for (int VAR_7 = 0 ; VAR_7 < VAR_3->i_tracklist_entries ; VAR_7++)
    {
        input_item_t *VAR_8 = VAR_3->pp_tracklist[VAR_7];
        if (VAR_8)
        {
            FUNC_0(VAR_2, VAR_8);
        }
    }

end:
    if (VAR_5)
        FUNC_6(VAR_5);
    return VAR_4;
}
