
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int out; } ;
typedef TYPE_1__ demux_t ;
typedef int buffer ;


 int FUNC_0 (TYPE_1__*,int const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_1 )
{
    static const uint8_t VAR_2[] = {
        0x00, 0x00, 0x01, 0xe0, 0x00, 0x07,
        0x80, 0x00, 0x00,
        0x00, 0x00, 0x01, 0xB7,
    };
    FUNC_0( VAR_1, VAR_2, sizeof(VAR_2) );

    bool VAR_3;
    FUNC_1( VAR_1->out, VAR_0, &VAR_3 );
}
