
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int sname; int file; int options; } ;
typedef TYPE_1__ DHCPMessage ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (size_t) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static DHCPMessage *FUNC_3(uint8_t *VAR_0, uint16_t VAR_1,
                uint8_t *VAR_2, uint8_t VAR_3,
                uint8_t *VAR_4, uint8_t VAR_5) {
        DHCPMessage *VAR_6;
        size_t VAR_7 = sizeof(DHCPMessage) + VAR_1;

        VAR_6 = FUNC_1(VAR_7);
        FUNC_0(VAR_6);

        FUNC_2(&VAR_6->options, VAR_0, VAR_1);
        FUNC_2(&VAR_6->file, VAR_2, VAR_3);
        FUNC_2(&VAR_6->sname, VAR_4, VAR_5);

        return VAR_6;
}
