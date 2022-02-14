
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int buffer; int p_archive; } ;
typedef TYPE_1__ private_sys_t ;
typedef int libarchive_t ;
struct TYPE_4__ {TYPE_1__* p_sys; int * p_source; } ;
typedef TYPE_2__ libarchive_callback_t ;
typedef scalar_t__ la_ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;

__attribute__((used)) static la_ssize_t FUNC_3( libarchive_t* VAR_1, void* VAR_2,
  const void** VAR_3 )
{
    FUNC_0( VAR_1 );

    libarchive_callback_t* VAR_4 = (libarchive_callback_t*)VAR_2;

    stream_t* VAR_5 = VAR_4->p_source;
    private_sys_t* VAR_6 = VAR_4->p_sys;

    ssize_t VAR_7 = FUNC_2( VAR_5, &VAR_6->buffer,
      sizeof( VAR_6->buffer ) );

    if( VAR_7 < 0 )
    {
        FUNC_1( VAR_6->p_archive, VAR_0,
          "libarchive_read_cb failed = %zd", VAR_7 );

        return VAR_0;
    }

    *VAR_3 = &VAR_6->buffer;
    return VAR_7;
}
