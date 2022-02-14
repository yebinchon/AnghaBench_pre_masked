
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* psz_name; scalar_t__ i_duration; scalar_t__ i_start; } ;
typedef TYPE_1__ vlc_epg_event_t ;
struct TYPE_7__ {void* p_next; } ;
typedef TYPE_2__ text_segment_t ;
typedef int subpicture_region_t ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (char*,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_2__*,int,int) ;

__attribute__((used)) static subpicture_region_t * FUNC_6(const vlc_epg_event_t *VAR_1,
                                              int VAR_2, int VAR_3, int VAR_4)
{
    text_segment_t *VAR_5 = ((void*)0);
    char *VAR_6 = FUNC_2(VAR_1->i_start);
    char *VAR_7 = FUNC_2(VAR_1->i_start + VAR_1->i_duration);
    char *VAR_8;
    if( -1 < FUNC_0(&VAR_8, "%s-%s ", VAR_6, VAR_7))
    {
        VAR_5 = FUNC_3(VAR_8, VAR_4, VAR_0);
        if( VAR_5 )
            VAR_5->p_next = FUNC_3(VAR_1->psz_name, VAR_4, 0xffffff);
        FUNC_4( VAR_5 );
    }
    FUNC_1( VAR_6 );
    FUNC_1( VAR_7 );
    if(!VAR_5)
        return ((void*)0);
    return FUNC_5(VAR_5, VAR_2, VAR_3);
}
