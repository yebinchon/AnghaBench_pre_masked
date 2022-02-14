
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
struct TYPE_5__ {size_t ddt_checksum; } ;
typedef TYPE_1__ ddt_t ;
struct TYPE_7__ {int ddt_op_name; } ;
struct TYPE_6__ {int ci_name; } ;


 char* VAR_0 ;
 int * VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (char*,char*,int ,int ,int ) ;
 TYPE_2__* VAR_3 ;

void
FUNC_1(ddt_t *VAR_4, enum ddt_type VAR_5, enum ddt_class VAR_6,
    char *VAR_7)
{
 (void) FUNC_0(VAR_7, VAR_0,
     VAR_3[VAR_4->ddt_checksum].ci_name,
     VAR_2[VAR_5]->ddt_op_name, VAR_1[VAR_6]);
}
