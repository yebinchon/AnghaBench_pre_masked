
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_infe; } ;
struct heif_private_t {int i_pcr; int i_image_duration; scalar_t__ i_end_display_time; TYPE_1__ current; int p_root; } ;
struct TYPE_4__ {int i_flags; } ;
typedef int MP4_Box_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ,char*,int *) ;

__attribute__((used)) static void FUNC_3( struct heif_private_t *VAR_1, int VAR_2 )
{
    int VAR_3 = 0;
    MP4_Box_t *VAR_4 = ((void*)0);
    while( VAR_3 < VAR_2 &&
          (VAR_4 = FUNC_2( VAR_1->p_root, VAR_0, "meta/iinf/infe", VAR_4 )) )
    {
        if( (FUNC_0(VAR_4)->i_flags & 0x01) != 0x00 ||
                !FUNC_1( VAR_4, VAR_1->p_root ) )
            continue;
        VAR_3++;
    }
    VAR_1->current.p_infe = VAR_4;
    VAR_1->i_end_display_time = 0;
    VAR_1->i_pcr = VAR_3 * VAR_1->i_image_duration;
}
