
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bus_entry_ptr ;
struct TYPE_4__ {int bus_id; int bus_type; void* type; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(bus_entry_ptr VAR_4)
{

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->type = VAR_0;
 VAR_4->bus_id = 0;
 FUNC_0(VAR_4->bus_type, VAR_3, VAR_2);
 VAR_4++;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->type = VAR_0;
 VAR_4->bus_id = 1;
 FUNC_0(VAR_4->bus_type, VAR_1, VAR_2);
}
