
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ dvbpsi_t ;
typedef int dvbpsi_msg_level_t ;






 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static inline void FUNC_4(dvbpsi_t *VAR_0, const dvbpsi_msg_level_t VAR_1, const char* VAR_2)
{
    vlc_object_t *VAR_3 = (vlc_object_t *)VAR_0->p_sys;


    switch(VAR_1)
    {
        case 130:
        {

            if( FUNC_3( VAR_2, "libdvbpsi (PMT decoder): ", 25 ) ||
                ( FUNC_3( &VAR_2[25], "invalid section", 15 ) &&
                  FUNC_3( &VAR_2[25], "'program_number' don't match", 28 ) ) )

            FUNC_1( VAR_3, "%s", VAR_2 ); break;
        }
        case 128: FUNC_2( VAR_3, "%s", VAR_2 ); break;
        case 129:
        case 131:



            break;
    }
}
