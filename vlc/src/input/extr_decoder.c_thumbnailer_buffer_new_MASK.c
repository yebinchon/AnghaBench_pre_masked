
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct decoder_owner {int lock; int b_first; } ;
typedef int picture_t ;
struct TYPE_5__ {int video; } ;
struct TYPE_6__ {TYPE_1__ fmt_out; } ;
typedef TYPE_2__ decoder_t ;


 struct decoder_owner* FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static picture_t *FUNC_4( decoder_t *VAR_0 )
{
    struct decoder_owner *VAR_1 = FUNC_0( VAR_0 );


    FUNC_2( &VAR_1->lock );
    if( !VAR_1->b_first )
    {
        FUNC_3( &VAR_1->lock );
        return ((void*)0);
    }
    FUNC_3( &VAR_1->lock );
    return FUNC_1( &VAR_0->fmt_out.video );
}
