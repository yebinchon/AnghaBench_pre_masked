
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int stream_t ;
typedef scalar_t__ ssize_t ;
typedef int libarchive_t ;
struct TYPE_2__ {int * p_source; } ;
typedef TYPE_1__ libarchive_callback_t ;
typedef scalar_t__ la_int64_t ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static la_int64_t FUNC_5( libarchive_t* VAR_1, void* VAR_2,
  la_int64_t VAR_3, int VAR_4 )
{
    FUNC_0( VAR_1 );

    libarchive_callback_t* VAR_5 = (libarchive_callback_t*)VAR_2;
    stream_t* VAR_6 = VAR_5->p_source;

    ssize_t VAR_7;

    switch( VAR_4 )
    {
        case 128: VAR_7 = 0; break;
        case 130: VAR_7 = FUNC_4( VAR_6 ); break;
        case 129: VAR_7 = FUNC_1( VAR_6 ); break;
              default: FUNC_2();

    }

    if( VAR_7 < 0 || FUNC_3( VAR_6, VAR_7 + VAR_3 ) )
        return VAR_0;

    return FUNC_4( VAR_6 );
}
