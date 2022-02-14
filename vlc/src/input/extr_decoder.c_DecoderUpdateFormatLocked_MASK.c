
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * p_description; int fmt_out; } ;
struct decoder_owner {int b_fmt_description; int * p_description; int fmt; int lock; TYPE_1__ dec; } ;
typedef TYPE_1__ decoder_t ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( struct decoder_owner *VAR_1 )
{
    decoder_t *VAR_2 = &VAR_1->dec;

    FUNC_4( &VAR_1->lock );

    FUNC_1( &VAR_1->fmt );
    FUNC_2( &VAR_1->fmt, &VAR_2->fmt_out );


    if( VAR_2->p_description != ((void*)0) )
    {
        if( VAR_1->p_description != ((void*)0) )
            FUNC_3( VAR_1->p_description );
        VAR_1->p_description = VAR_2->p_description;
        VAR_2->p_description = ((void*)0);
    }

    FUNC_0( &VAR_1->b_fmt_description, 1,
                           VAR_0 );
}
