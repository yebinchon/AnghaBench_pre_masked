
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_4__ {scalar_t__ i_size; scalar_t__ i_pos; int i_handler; } ;
typedef TYPE_1__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4( stream_t *VAR_4, MP4_Box_t *VAR_5 )
{
    VAR_5->i_handler = VAR_0;
    FUNC_0( VAR_1, 16, ((void*)0) );
    (void) VAR_3;
    if( VAR_2 < 8 )
        FUNC_1( 0 );

    FUNC_2( VAR_4, VAR_5, ((void*)0) );

    if ( FUNC_3( VAR_4, VAR_5->i_pos + VAR_5->i_size ) )
        FUNC_1( 0 );

    FUNC_1( 1 );
}
