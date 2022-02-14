
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_shmid; int fourcc; int i_height; int i_width; int i_id; } ;
typedef TYPE_1__ commandparams_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char**,char**,int,char*) ;
 scalar_t__ FUNC_3 (char**,int *) ;
 int FUNC_4 (char**) ;

__attribute__((used)) static int FUNC_5( char *VAR_2,
                                 char *VAR_3,
                                 commandparams_t *VAR_4 )
{

    FUNC_4( &VAR_2 );
    if( FUNC_1( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_3( &VAR_2, &VAR_4->i_id ) == VAR_0 )
            return VAR_0;
    }
    FUNC_4( &VAR_2 );
    if( FUNC_1( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_3( &VAR_2, &VAR_4->i_width ) == VAR_0 )
            return VAR_0;
    }
    FUNC_4( &VAR_2 );
    if( FUNC_1( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_3( &VAR_2, &VAR_4->i_height ) == VAR_0 )
            return VAR_0;
    }
    FUNC_4( &VAR_2 );
    if( FUNC_0( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_2( &VAR_2, &VAR_3, 4, (char*)&VAR_4->fourcc )
            == VAR_0 )
            return VAR_0;
    }
    FUNC_4( &VAR_2 );
    if( FUNC_1( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_3( &VAR_2, &VAR_4->i_shmid ) == VAR_0 )
            return VAR_0;
    }
    return VAR_1;
}
