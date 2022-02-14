
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {int s; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(stream_t *VAR_2, int VAR_3, va_list VAR_4)
{
    switch(VAR_3)
    {
        case 144:
        case 146:
        case 145:
        case 147:
        case 137:
        case 140:
        case 134:
        case 135:
        case 139:
        case 142:
        case 143:
        case 138:
        case 136:
        case 133:
        case 131:
        case 132:
        case 141:
            return FUNC_2(VAR_2->s, VAR_3, VAR_4);

        case 128:
        case 129:
        {
            int VAR_5 = FUNC_2(VAR_2->s, VAR_3, VAR_4);
            if (VAR_5 == VAR_1)
                FUNC_0(VAR_2);
            return VAR_5;
        }

        case 130:
        default:
            FUNC_1(VAR_2, "invalid vlc_stream_vaControl query=0x%x", VAR_3);
            return VAR_0;
    }
    return VAR_1;
}
