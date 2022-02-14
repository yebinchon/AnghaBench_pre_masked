
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int Tox ;
struct TYPE_2__ {scalar_t__ accepted; int id; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (char*,char*,int) ;

void FUNC_4(Tox *VAR_3, const uint8_t *VAR_4, const uint8_t *VAR_5, size_t VAR_6, void *VAR_7)
{
    FUNC_2("[i] received friend request with message:");
    FUNC_2((char *)VAR_5);
    char VAR_8[100];
    FUNC_3(VAR_8, "[i] accept request with /a %u", VAR_1);
    FUNC_2(VAR_8);
    FUNC_1(VAR_2[VAR_1].id, VAR_4, VAR_0);
    VAR_2[VAR_1].accepted = 0;
    ++VAR_1;
    FUNC_0();
}
