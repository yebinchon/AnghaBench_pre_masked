
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_9__ {int * b; } ;
struct TYPE_8__ {int i_size; TYPE_7__ i_uuid; } ;
typedef TYPE_1__ MP4_Box_t ;


 int FUNC_0 (TYPE_7__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_4, MP4_Box_t *VAR_5 )
{
    if( !FUNC_0( &VAR_5->i_uuid, &VAR_1 ) )
        return FUNC_3( VAR_4, VAR_5 );
    if( !FUNC_0( &VAR_5->i_uuid, &VAR_2 ) )
        return FUNC_4( VAR_4, VAR_5 );
    if( !FUNC_0( &VAR_5->i_uuid, &VAR_3 ) )
        return FUNC_2( VAR_4, VAR_5 );
    if( !FUNC_0( &VAR_5->i_uuid, &VAR_0 ) && VAR_5->i_size == 28 )
        return FUNC_1( VAR_4, VAR_5 );
    FUNC_5( VAR_4, "Unknown uuid type box" );

    return 1;
}
