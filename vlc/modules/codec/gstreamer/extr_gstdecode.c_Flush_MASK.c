
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int b_prerolled; int p_que; int p_decoder; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int GstBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;
    GstBuffer *VAR_4;
    gboolean VAR_5;





    VAR_5 = FUNC_2( VAR_3->p_decoder,
            VAR_0, VAR_1, 0 );
    FUNC_3( VAR_2, "new segment event : %d", VAR_5 );


    while( ( VAR_4 = FUNC_0( VAR_3->p_que ) ) )
        FUNC_1( VAR_4 );

    VAR_3->b_prerolled = 0;
}
