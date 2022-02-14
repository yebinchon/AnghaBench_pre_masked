
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {scalar_t__ b_seekable_source; } ;
typedef TYPE_1__ private_sys_t ;
typedef scalar_t__ off_t ;
typedef int libarchive_t ;
struct TYPE_4__ {TYPE_1__* p_sys; int * p_source; } ;
typedef TYPE_2__ libarchive_callback_t ;
typedef scalar_t__ la_int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static la_int64_t FUNC_4( libarchive_t* VAR_1, void* VAR_2,
  off_t VAR_3 )
{
    FUNC_0( VAR_1 );

    libarchive_callback_t* VAR_4 = (libarchive_callback_t*)VAR_2;

    stream_t* VAR_5 = VAR_4->p_source;
    private_sys_t* VAR_6 = VAR_4->p_sys;



    if( VAR_6->b_seekable_source )
    {
        if( FUNC_2( VAR_5, FUNC_3( VAR_5 ) + VAR_3 ) )
            return VAR_0;

        return VAR_3;
    }

    ssize_t VAR_7 = FUNC_1( VAR_5, ((void*)0), VAR_3 );
    return VAR_7 >= 0 ? VAR_7 : VAR_0;
}
