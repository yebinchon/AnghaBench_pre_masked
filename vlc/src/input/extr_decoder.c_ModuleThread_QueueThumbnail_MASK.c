
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int b_first; int lock; } ;
typedef int picture_t ;
typedef int decoder_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (struct decoder_owner*,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( decoder_t *VAR_1, picture_t *VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_0( VAR_1 );
    bool VAR_4;

    FUNC_3( &VAR_3->lock );
    VAR_4 = VAR_3->b_first;
    VAR_3->b_first = 0;
    FUNC_4( &VAR_3->lock );

    if( VAR_4 )
        FUNC_1(VAR_3, VAR_0, VAR_2);
    FUNC_2( VAR_2 );

}
