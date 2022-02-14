
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {scalar_t__ i_parent; scalar_t__ i_type; int (* MP4_ReadBox_function ) (int *,TYPE_1__*) ;} ;
struct TYPE_6__ {scalar_t__ i_type; } ;
typedef TYPE_1__ MP4_Box_t ;


 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1( stream_t *VAR_3, MP4_Box_t *VAR_4, MP4_Box_t *VAR_5 )
{
    int VAR_6;

    for( VAR_6 = 0; ; VAR_6++ )
    {
        if ( VAR_0[VAR_6].i_parent &&
             VAR_5 && VAR_5->i_type != VAR_0[VAR_6].i_parent )
            continue;

        if( ( VAR_0[VAR_6].i_type == VAR_4->i_type )||
            ( VAR_0[VAR_6].i_type == 0 ) )
        {
            break;
        }
    }

    if( !(VAR_0[VAR_6].MP4_ReadBox_function)( VAR_3, VAR_4 ) )
    {
        return VAR_1;
    }

    return VAR_2;
}
