
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_4__ {int b_ephemer; int b_fade; int i_original_picture_width; int i_original_picture_height; scalar_t__ i_start; scalar_t__ i_stop; scalar_t__ i_channel; } ;
typedef TYPE_1__ subpicture_t ;
typedef int picture_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5( vout_thread_t *VAR_3, picture_t *VAR_4 )
{
    subpicture_t *VAR_5 = FUNC_2( FUNC_0(VAR_3),
                                                        VAR_4, VAR_0 );
    if( !VAR_5 )
        return VAR_1;



    VAR_5->i_channel = 0;
    VAR_5->i_start = FUNC_3();
    VAR_5->i_stop = VAR_5->i_start + FUNC_1(4);
    VAR_5->b_ephemer = 1;
    VAR_5->b_fade = 1;


    VAR_5->i_original_picture_width *= 4;
    VAR_5->i_original_picture_height *= 4;

    FUNC_4( VAR_3, VAR_5 );
    return VAR_2;
}
