
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {scalar_t__ imagesize; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (char*,int,char*,char) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(char VAR_2)
{
    char VAR_3[100];

    FUNC_3(VAR_3, sizeof(VAR_3), "a.dump%c", VAR_2);



    FILE *VAR_4 = FUNC_1(VAR_3, "wb");
    FUNC_2(VAR_1 + 0x1000, VAR_0.imagesize - 0x1000, 1, VAR_4);
    FUNC_0(VAR_4);
}
