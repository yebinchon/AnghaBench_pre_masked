
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double value; int b_auto; } ;
struct TYPE_5__ {int b_auto; double value; } ;
struct TYPE_7__ {int b_snap_to_lines; int position; int align; TYPE_2__ size; void* positionalign; int linealign; TYPE_1__ line; void* vertical; int * psz_region; } ;
typedef TYPE_3__ webvtt_cue_settings_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( webvtt_cue_settings_t *VAR_3 )
{
    VAR_3->psz_region = ((void*)0);
    VAR_3->vertical = VAR_0;
    VAR_3->b_snap_to_lines = 1;
    VAR_3->line.b_auto = 1;
    VAR_3->line.value = 1.0;
    VAR_3->linealign = VAR_2;
    VAR_3->position = -1;
    VAR_3->positionalign = VAR_0;
    VAR_3->size.value = 1.0;
    VAR_3->size.b_auto = 1;
    VAR_3->align = VAR_1;
}
