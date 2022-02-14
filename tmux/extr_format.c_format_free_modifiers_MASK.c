
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct format_modifier {int argv; int argc; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct format_modifier*) ;

__attribute__((used)) static void
FUNC_2(struct format_modifier *VAR_0, u_int VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0[VAR_2].argc, VAR_0[VAR_2].argv);
 FUNC_1(VAR_0);
}
