
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int path ;
struct TYPE_3__ {int dir; int device; } ;
typedef TYPE_1__ dvb_device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3 (dvb_device_t *VAR_1, const char *VAR_2, int VAR_3)
{
    char VAR_4[FUNC_1 (VAR_2) + 4];

    FUNC_0 (VAR_4, sizeof (VAR_4), "%s%u", VAR_2, VAR_1->device);
    return FUNC_2 (VAR_1->dir, VAR_4, VAR_3 | VAR_0);
}
