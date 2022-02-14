
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; int * wsect; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;

int
FUNC_4(int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_2 = VAR_5;

 VAR_6 = FUNC_3(&VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);





 if (FUNC_2("BHYVE_ACPI_VERBOSE_IASL"))
  VAR_3 = 1;





 if (FUNC_2("BHYVE_ACPI_KEEPTMPS"))
  VAR_1 = 1;

 VAR_7 = 0;
 VAR_6 = FUNC_1();





 while (!VAR_6 && VAR_0[VAR_7].wsect != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_0[VAR_7].wsect,
       VAR_0[VAR_7].offset);
  VAR_7++;
 }

 return (VAR_6);
}
