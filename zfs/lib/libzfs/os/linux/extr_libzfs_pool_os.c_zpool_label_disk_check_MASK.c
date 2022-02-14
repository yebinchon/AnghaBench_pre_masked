
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dk_gpt {int efi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct dk_gpt**) ;
 int FUNC_2 (struct dk_gpt*) ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_5)
{
 struct dk_gpt *VAR_6;
 int VAR_7, VAR_8;

 if ((VAR_7 = FUNC_3(VAR_5, VAR_3|VAR_2)) < 0)
  return (VAR_4);

 if ((VAR_8 = FUNC_1(VAR_7, &VAR_6)) != 0) {
  (void) FUNC_0(VAR_7);
  return (VAR_8);
 }

 if (VAR_6->efi_flags & VAR_0) {
  FUNC_2(VAR_6);
  (void) FUNC_0(VAR_7);
  return (VAR_1);
 }

 FUNC_2(VAR_6);
 (void) FUNC_0(VAR_7);
 return (0);
}
