
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tracks; } ;
typedef TYPE_1__ mp4mux_handle_t ;
struct TYPE_7__ {int i_codec; } ;
typedef TYPE_2__ es_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(mp4mux_handle_t *VAR_6, const es_format_t *VAR_7)
{
    switch(VAR_7->i_codec)
    {
        case 133:
            FUNC_0(VAR_6, VAR_2);
            break;
        case 132:
            FUNC_0(VAR_6, VAR_3);
            break;
        case 138:
            FUNC_0(VAR_6, VAR_1);
            FUNC_0(VAR_6, VAR_4);
            break;
        case 131:
        case 128:
        case 129:
        case 137:
        case 136:
        case 135:
        case 134:
            FUNC_0(VAR_6, VAR_5);
            break;
        case 130:
            FUNC_0(VAR_6, VAR_5);
            if(FUNC_1(&VAR_6->tracks) == 1)
                FUNC_0(VAR_6, VAR_0);
            break;
        default:
            break;
    }
}
