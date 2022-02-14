
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
typedef int stream_t ;
typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ i_object_size; size_t i_language; size_t* ppsz_language; } ;
struct TYPE_4__ {TYPE_2__ language_list; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_language_list_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 () ;
 size_t FUNC_2 () ;
 size_t FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t* FUNC_4 (size_t,int) ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (int *,int const**,scalar_t__) ;

__attribute__((used)) static int FUNC_7(stream_t *VAR_5, asf_object_t *VAR_6)
{
    asf_object_language_list_t *VAR_7 = &VAR_6->language_list;
    const uint8_t *VAR_8, *VAR_9;
    uint16_t VAR_10;

    if( VAR_7->i_object_size > VAR_1 )
        return VAR_2;

    ssize_t VAR_11 = FUNC_6( VAR_5, &VAR_8, VAR_7->i_object_size );
    if( VAR_11 < 26 )
       return VAR_2;

    VAR_9 = &VAR_8[VAR_0];

    VAR_7->i_language = FUNC_2();
    if( VAR_7->i_language > 0 )
    {
        VAR_7->ppsz_language = FUNC_4( VAR_7->i_language, sizeof( char *) );
        if( !VAR_7->ppsz_language )
            return VAR_3;

        for( VAR_10 = 0; VAR_10 < VAR_7->i_language; VAR_10++ )
        {
            if( !FUNC_0(1) )
                break;
            VAR_7->ppsz_language[VAR_10] = FUNC_3( FUNC_1() );
        }
        VAR_7->i_language = VAR_10;
    }
    return VAR_4;
}
