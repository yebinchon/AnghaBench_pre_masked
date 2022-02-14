
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {int * client; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int IAudioClient ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 intptr_t FUNC_1 (char const*,char**,int) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(audio_output_t *VAR_3, const char* VAR_4)
{
    if( VAR_4 == ((void*)0) )
        return VAR_1;
    char* VAR_5;
    aout_sys_t* VAR_6 = VAR_3->sys;
    intptr_t VAR_7 = FUNC_1( VAR_4, &VAR_5, 16 );
    if ( *VAR_5 != 0 )
        return VAR_1;
    if (VAR_6->client == (IAudioClient*)VAR_7)
        return VAR_2;
    VAR_6->client = (IAudioClient*)VAR_7;
    FUNC_2( FUNC_3(VAR_3), "winstore-client", VAR_6->client );
    FUNC_0( VAR_3, VAR_0 );
    return VAR_2;
}
