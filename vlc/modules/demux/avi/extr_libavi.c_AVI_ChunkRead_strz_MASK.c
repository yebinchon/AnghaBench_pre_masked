
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
typedef int avi_chunk_t ;
struct TYPE_3__ {scalar_t__ i_chunk_fourcc; int i_chunk_size; scalar_t__* p_str; scalar_t__* p_type; } ;
typedef TYPE_1__ avi_chunk_STRING_t ;
struct TYPE_4__ {scalar_t__ i_fourcc; int psz_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (int *,char*,char*,scalar_t__*,scalar_t__*) ;
 int VAR_4 ;
 scalar_t__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_5, avi_chunk_t *VAR_6 )
{
    int VAR_7;
    avi_chunk_STRING_t *VAR_8 = (avi_chunk_STRING_t*)VAR_6;
    VAR_0;

    for( VAR_7 = 0;; VAR_7++)
    {
        if( !VAR_1[VAR_7].i_fourcc ||
            VAR_1[VAR_7].i_fourcc == VAR_8->i_chunk_fourcc )
        {
            break;
        }
    }
    VAR_8->p_type = FUNC_5( VAR_1[VAR_7].psz_type );
    VAR_8->p_str = FUNC_2( VAR_8->i_chunk_size + 1 );
    if( !VAR_8->p_type || !VAR_8->p_str )
    {
        FUNC_1( VAR_8->p_type );
        FUNC_1( VAR_8->p_str );
        FUNC_0( VAR_2 );
    }
    FUNC_3( VAR_8->p_str, VAR_4, VAR_8->i_chunk_size );
    VAR_8->p_str[VAR_8->i_chunk_size] = 0;





    FUNC_0( VAR_3 );
}
