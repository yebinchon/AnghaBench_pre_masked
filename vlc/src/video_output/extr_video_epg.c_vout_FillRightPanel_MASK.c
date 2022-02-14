
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ i_id; float i_start; scalar_t__ i_duration; } ;
typedef TYPE_2__ const vlc_epg_event_t ;
struct TYPE_14__ {int i_align; struct TYPE_14__* p_next; } ;
typedef TYPE_3__ subpicture_region_t ;
struct TYPE_15__ {float time; TYPE_1__* epg; } ;
typedef TYPE_4__ epg_spu_updater_sys_t ;
struct TYPE_12__ {char* psz_name; size_t i_event; TYPE_2__ const* p_current; TYPE_2__ const** pp_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 TYPE_3__* FUNC_4 (TYPE_2__ const*,int,int,int) ;
 TYPE_3__* FUNC_5 (int,int,int,int,float) ;
 TYPE_3__* FUNC_6 (char*,int,int,int,int) ;
 char* FUNC_7 (float) ;
 int FUNC_8 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void FUNC_9(epg_spu_updater_sys_t *VAR_6,
                                int VAR_7, int VAR_8,
                                int VAR_9, int VAR_10,
                                int VAR_11, int VAR_12,
                                subpicture_region_t **VAR_13)
{
    float VAR_14 = 0;
    FUNC_2(VAR_12);


    *VAR_13 = FUNC_6(VAR_6->epg->psz_name,
                                VAR_7,
                                VAR_8,
                                VAR_10 * VAR_0,
                                0x00ffffff);
    if(*VAR_13)
        VAR_13 = &(*VAR_13)->p_next;

    const vlc_epg_event_t *VAR_15 = VAR_6->epg->p_current;
    vlc_epg_event_t *VAR_16 = ((void*)0);
    if(!VAR_6->epg->p_current && VAR_6->epg->i_event)
        VAR_15 = VAR_6->epg->pp_event[0];

    for(size_t VAR_17=0; VAR_17<VAR_6->epg->i_event; VAR_17++)
    {
        if( VAR_6->epg->pp_event[VAR_17]->i_id != VAR_15->i_id )
        {
            VAR_16 = VAR_6->epg->pp_event[VAR_17];
            break;
        }
    }


    if(VAR_15)
    {
        *VAR_13 = FUNC_4(VAR_15,
                                     VAR_7,
                                     VAR_8 + VAR_10 * FUNC_0(2),
                                     VAR_10 * VAR_2);

        FUNC_8(*VAR_13, VAR_9, 0);
        if(*VAR_13)
            VAR_13 = &(*VAR_13)->p_next;
    }


    if(VAR_16)
    {
        *VAR_13 = FUNC_4(VAR_16,
                                     VAR_7,
                                     VAR_8 + VAR_10 * FUNC_0(5),
                                     VAR_10 * VAR_2);

        FUNC_8(*VAR_13, VAR_9, 0);
        if(*VAR_13)
            VAR_13 = &(*VAR_13)->p_next;
    }

    if(VAR_6->time)
    {
        VAR_14 = (VAR_6->time - VAR_6->epg->p_current->i_start) /
                     (float)VAR_6->epg->p_current->i_duration;
    }


    *VAR_13 = FUNC_5(VAR_7 + VAR_9 * 0.05,
                                  VAR_8 + VAR_10 * FUNC_0(9),
                                  VAR_9 * 0.90,
                                  VAR_10 * FUNC_1(1),
                                  VAR_14);
    if (*VAR_13)
        VAR_13 = &(*VAR_13)->p_next;


    if(VAR_6->time)
    {
        char *VAR_18 = FUNC_7(VAR_6->time);
        if(VAR_18)
        {
            *VAR_13 = FUNC_6(VAR_18,
                                        VAR_11,
                                        VAR_8 + VAR_10 * FUNC_0(0),
                                        VAR_10 * VAR_1,
                                        VAR_3);
            FUNC_3(VAR_18);
            if(*VAR_13)
            {
                (*VAR_13)->i_align = VAR_5|VAR_4;
                VAR_13 = &(*VAR_13)->p_next;
            }
        }
    }
}
