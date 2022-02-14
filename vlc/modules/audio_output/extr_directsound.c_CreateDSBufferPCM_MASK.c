
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
typedef int aout_stream_sys_t ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,int ,int,unsigned int,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 unsigned int FUNC_2 (int) ;

__attribute__((used)) static HRESULT FUNC_3( vlc_object_t *VAR_3, aout_stream_sys_t *VAR_4,
                                  vlc_fourcc_t *VAR_5, int VAR_6,
                                  int VAR_7, bool VAR_8 )
{
    HRESULT VAR_9;
    unsigned VAR_10 = FUNC_2( VAR_6 );

    if( FUNC_1( VAR_3, "directx-audio-float32" ) )
    {
        VAR_9 = FUNC_0( VAR_3, VAR_4, VAR_1, VAR_6,
                             VAR_10, VAR_7, VAR_8 );
        if( VAR_9 == VAR_0 )
        {
            *VAR_5 = VAR_1;
            return VAR_0;
        }
    }

    VAR_9 = FUNC_0( VAR_3, VAR_4, VAR_2, VAR_6, VAR_10,
                         VAR_7, VAR_8 );
    if( VAR_9 == VAR_0 )
    {
        *VAR_5 = VAR_2;
        return VAR_0;
    }

    return VAR_9;
}
