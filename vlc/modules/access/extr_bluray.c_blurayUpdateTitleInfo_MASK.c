
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {void* i_time_offset; } ;
typedef TYPE_2__ seekpoint_t ;
struct TYPE_12__ {int i_seekpoint; int * seekpoint; void* i_length; } ;
typedef TYPE_3__ input_title_t ;
struct TYPE_13__ {unsigned int chapter_count; TYPE_1__* chapters; int duration; } ;
struct TYPE_10__ {int start; } ;
typedef TYPE_4__ BLURAY_TITLE_INFO ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int,int *,TYPE_2__*) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 () ;

__attribute__((used)) static void FUNC_6(input_title_t *VAR_0, BLURAY_TITLE_INFO *VAR_1)
{
    VAR_0->i_length = FUNC_0(VAR_1->duration);

    for (int VAR_2 = 0; VAR_2 < VAR_0->i_seekpoint; VAR_2++)
        FUNC_4( VAR_0->seekpoint[VAR_2] );
    FUNC_2(VAR_0->i_seekpoint, VAR_0->seekpoint);


    if(FUNC_3(VAR_1, 50, 90))
        return;

    for (unsigned int VAR_3 = 0; VAR_3 < VAR_1->chapter_count; VAR_3++) {
        seekpoint_t *VAR_4 = FUNC_5();
        if (!VAR_4) {
            break;
        }
        VAR_4->i_time_offset = FUNC_0(VAR_1->chapters[VAR_3].start);

        FUNC_1(VAR_0->i_seekpoint, VAR_0->seekpoint, VAR_4);
    }
}
