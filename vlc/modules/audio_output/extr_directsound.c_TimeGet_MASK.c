
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ i_last_read; scalar_t__ i_data; int i_bytes_per_sample; int i_rate; int p_dsbuffer; } ;
typedef TYPE_1__ aout_stream_sys_t ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int*,int *) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static HRESULT FUNC_4( aout_stream_sys_t *VAR_5, vlc_tick_t *VAR_6 )
{
    DWORD VAR_7, VAR_8;
    HRESULT VAR_9;
    ssize_t VAR_10;

    VAR_9 = FUNC_2( VAR_5->p_dsbuffer, &VAR_8 );
    if( VAR_9 != VAR_4 )
        return VAR_9;
    if( !(VAR_8 & VAR_0) )
        return VAR_2 ;

    VAR_9 = FUNC_1( VAR_5->p_dsbuffer, &VAR_7, ((void*)0) );
    if( VAR_9 != VAR_4 )
        return VAR_9;

    VAR_10 = (ssize_t)VAR_7 - VAR_5->i_last_read;



    if( VAR_10 == 0 )
        return VAR_1 ;
    else if( VAR_10 < 0 )
      VAR_10 += VAR_3;

    VAR_5->i_data -= VAR_10;
    VAR_5->i_last_read = VAR_7;

    if( VAR_5->i_data < 0 )

        FUNC_0(VAR_5);

    *VAR_6 = FUNC_3( VAR_5->i_data / VAR_5->i_bytes_per_sample, VAR_5->i_rate );

    return VAR_4;
}
